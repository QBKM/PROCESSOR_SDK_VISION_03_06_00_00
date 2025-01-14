/*
 * Copyright (C) 2014 Texas Instruments Incorporated - http://www.ti.com/
 *
 *
 *  Redistribution and use in source and binary forms, with or without
 *  modification, are permitted provided that the following conditions
 *  are met:
 *
 *    Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *
 *    Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the
 *    distribution.
 *
 *    Neither the name of Texas Instruments Incorporated nor the names of
 *    its contributors may be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 *  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 *  "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 *  LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
 *  A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
 *  OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 *  SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
 *  LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 *  DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 *  THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 *  (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 *  OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
*/

#include "avbtp_queue.h"

#include <stddef.h>

#include <ti/nsp/drv/inc/gmacsw_al.h>

void AVBTP_queueInit(queue_t *pQueue)
{
    pQueue->count = 0;
    pQueue->pHead = NULL;
    pQueue->pTail = NULL;
}

void AVBTP_queueCopy(queue_t *pDstQueue, const queue_t *pSrcQueue)
{
    pDstQueue->pHead = pSrcQueue->pHead;
    pDstQueue->pTail = pSrcQueue->pTail;
    pDstQueue->count = pSrcQueue->count;
}

void AVBTP_enqueue(queue_t *pQueue, node_t *pNode)
{
    uint32_t key = GMACSW_AL_globalInterruptDisable();

    pNode->pNext = NULL;

    if (0 == pQueue->count)
    {
        /* Queue is empty - Initialize it with this one node */
        pQueue->pHead = pNode;
    }
    else
    {
        /* Queue is not empty - Push onto END */
        pQueue->pTail->pNext = pNode;
    }

    /* Make tail of queue point to new */
    pQueue->pTail = pNode;
    pQueue->count++;

    GMACSW_AL_globalInterruptEnable(key);
}

void AVBTP_enqueueHead(queue_t *pQueue, node_t *pNode)
{
    uint32_t key = GMACSW_AL_globalInterruptDisable();

    if (0 == pQueue->count)
    {
        pQueue->pTail = pNode;
    }

    pNode->pNext = pQueue->pHead;
    pQueue->pHead = pNode;
    pQueue->count++;

    GMACSW_AL_globalInterruptEnable(key);
}

node_t *AVBTP_dequeue(queue_t *pQueue)
{
    node_t *pNode;
    uint32_t key = GMACSW_AL_globalInterruptDisable();

    pNode = pQueue->pHead;

    if (pNode != NULL)
    {
        pQueue->pHead = pNode->pNext;
        if (NULL == pQueue->pHead)
        {
            pQueue->pTail = NULL;
        }
        pQueue->count--;
        pNode->pNext = NULL;
    }

    GMACSW_AL_globalInterruptEnable(key);

    return pNode;
}

void AVBTP_appendQueue(queue_t *pDstQueue, const queue_t *pSrcQueue)
{
    if (pSrcQueue->count == 0) { return; }

    if (pDstQueue->pHead == NULL)
    {
        /* queue is empty - Initialize it with the source queue */
        AVBTP_queueCopy(pDstQueue, pSrcQueue);
    }
    else
    {
        /* queue is not empty - Add free queue contents onto end */
        pDstQueue->pTail->pNext = pSrcQueue->pHead;
        pDstQueue->pTail = pSrcQueue->pTail;
        pDstQueue->count += pSrcQueue->count;
    }
}
