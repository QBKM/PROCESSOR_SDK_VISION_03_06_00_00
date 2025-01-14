/*
 * Copyright (c) 2015-2016, Texas Instruments Incorporated
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * *  Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *
 * *  Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * *  Neither the name of Texas Instruments Incorporated nor the names of
 *    its contributors may be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO,
 * THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR
 * CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
 * EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
 * PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS;
 * OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
 * WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR
 * OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE,
 * EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */
/*
 *  ======== pthread_cond.c ========
 */

#include <xdc/std.h>

#include <ti/sysbios/BIOS.h>
#include <ti/sysbios/knl/Clock.h>
#include <ti/sysbios/knl/Queue.h>
#include <ti/sysbios/knl/Semaphore.h>
#include <ti/sysbios/knl/Task.h>

#include <ti/sysbios/posix/pthread.h>
#include <ti/sysbios/posix/_pthread_error.h>


typedef struct CondElem {
    Queue_Elem       qElem;
    Semaphore_Struct sem;
} CondElem;

static int condWait(pthread_cond_t *cond, pthread_mutex_t *mutex,
        UInt32 timeout);

/*
 *************************************************************************
 *                      pthread_condattr
 *************************************************************************
 */
/*
 *  ======== pthread_condattr_destroy ========
 */
int pthread_condattr_destroy(pthread_condattr_t *attr)
{
    return (0);
}

/*
 *  ======== pthread_condattr_init ========
 */
int pthread_condattr_init(pthread_condattr_t * attr)
{
    return (0);
}

/*
 *************************************************************************
 *                      pthread_cond
 *************************************************************************
 */
/*
 *  ======== pthread_cond_broadcast ========
 */
int pthread_cond_broadcast(pthread_cond_t *cond)
{
    CondElem     *condElem;
    UInt          key;

    /*
     *  The calling thread is not required to hold the mutex when
     *  calling pthread_cond_broadcast() or pthread_cond_signal().
     */
    key = Task_disable();

    while (!Queue_empty(Queue_handle(&(cond->waitList)))) {
        condElem = (CondElem *)Queue_dequeue(Queue_handle(&(cond->waitList)));

        Semaphore_post(Semaphore_handle(&condElem->sem));
    }
    Task_restore(key);

    return (0);
}

/*
 *  ======== pthread_cond_destroy ========
 */
int pthread_cond_destroy(pthread_cond_t *cond)
{
    Queue_destruct(&cond->waitList);

    return (0);
}

/*
 *  ======== pthread_cond_init ========
 */
int pthread_cond_init(pthread_cond_t *cond, const pthread_condattr_t *attr)
{
    Queue_construct(&(cond->waitList), NULL);

    return (0);
}

/*
 *  ======== pthread_cond_signal ========
 */
int pthread_cond_signal(pthread_cond_t *cond)
{
    CondElem  *elem;
    UInt          key;

    /*
     *  The calling thread is not required to hold the mutex when
     *  calling pthread_cond_broadcast() or pthread_cond_signal().
     */
    key = Task_disable();

    if (!Queue_empty(Queue_handle(&(cond->waitList)))) {
        /* The calling thread is holding the mutex */
        elem = (CondElem *)Queue_dequeue(Queue_handle(&(cond->waitList)));
        Queue_elemClear(&(elem->qElem));

        Semaphore_post(Semaphore_handle(&elem->sem));
    }
    Task_restore(key);

    return (0);
}

/*
 *  ======== pthread_cond_timedwait ========
 */
int pthread_cond_timedwait(pthread_cond_t *cond, pthread_mutex_t *mutex,
        const struct timespec *abstime)
{
    struct timespec    curtime;
    UInt32             timeout;
    long               usecs = 0;
    time_t             secs = 0;

    if ((abstime->tv_nsec < 0) || (1000000000 <= abstime->tv_nsec)) {
        return (EINVAL);
    }

    clock_gettime(CLOCK_REALTIME, &curtime);
    secs = abstime->tv_sec - curtime.tv_sec;

    if ((abstime->tv_sec < curtime.tv_sec) ||
            ((secs == 0) && (abstime->tv_nsec <= curtime.tv_nsec))) {
        timeout = 0;
    }
    else {
        usecs = (abstime->tv_nsec - curtime.tv_nsec) / 1000;

        if (usecs < 0) {
            usecs += 1000000;
            secs--;
        }
        usecs += (long)secs * 1000000;
        timeout = (UInt32)(usecs / Clock_tickPeriod);
    }

    return (condWait(cond, mutex, timeout));
}

/*
 *  ======== pthread_cond_wait ========
 */
int pthread_cond_wait(pthread_cond_t *cond, pthread_mutex_t *mutex)
{
    return (condWait(cond, mutex, BIOS_WAIT_FOREVER));
}

/*
 *  ======== condWait ========
 */
static int condWait(pthread_cond_t *cond, pthread_mutex_t *mutex,
        UInt32 timeout)
{
    CondElem          condElem;
    Semaphore_Params  semParams;
    int               ret = 0;
    UInt              key;

    /*
     *  The calling thread is holding mutex but threads signalling
     *  the condition variable are not required to hold the mutex.
     *  Therefore, we need to call Task_disable() to protect the
     *  condition variable's waitList.
     */

    Queue_elemClear(&(condElem.qElem));

    Semaphore_Params_init(&semParams);
    semParams.mode = Semaphore_Mode_BINARY;
    Semaphore_construct(&(condElem.sem), 0, &semParams);

    key = Task_disable();
    Queue_enqueue(Queue_handle(&(cond->waitList)), (Queue_Elem *)&condElem);
    Task_restore(key);

    pthread_mutex_unlock(mutex);

    if (!Semaphore_pend(Semaphore_handle(&condElem.sem), timeout)) {
        key = Task_disable();
        Queue_remove((Queue_Elem *)&condElem);
        Task_restore(key);

        ret = ETIMEDOUT;
    }

    pthread_mutex_lock(mutex);

    return (ret);
}
