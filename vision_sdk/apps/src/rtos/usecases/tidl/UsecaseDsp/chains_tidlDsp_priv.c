/******************************************************************************
Copyright (c) [2012 - 2017] Texas Instruments Incorporated

All rights reserved not granted herein.

Limited License.

 Texas Instruments Incorporated grants a world-wide, royalty-free, non-exclusive
 license under copyrights and patents it now or hereafter owns or controls to
 make,  have made, use, import, offer to sell and sell ("Utilize") this software
 subject to the terms herein.  With respect to the foregoing patent license,
 such license is granted  solely to the extent that any such patent is necessary
 to Utilize the software alone.  The patent license shall not apply to any
 combinations which include this software, other than combinations with devices
 manufactured by or for TI ("TI Devices").  No hardware patent is licensed
 hereunder.

 Redistributions must preserve existing copyright notices and reproduce this
 license (including the above copyright notice and the disclaimer and
 (if applicable) source code license limitations below) in the documentation
 and/or other materials provided with the distribution

 Redistribution and use in binary form, without modification, are permitted
 provided that the following conditions are met:

 * No reverse engineering, decompilation, or disassembly of this software
   is permitted with respect to any software provided in binary form.

 * Any redistribution and use are licensed by TI for use only with TI Devices.

 * Nothing shall obligate TI to provide you with source code for the software
   licensed and provided to you in object code.

 If software source code is provided to you, modification and redistribution of
 the source code are permitted provided that the following conditions are met:

 * Any redistribution and use of the source code, including any resulting
   derivative works, are licensed by TI for use only with TI Devices.

 * Any redistribution and use of any object code compiled from the source code
   and any resulting derivative works, are licensed by TI for use only with TI
   Devices.

 Neither the name of Texas Instruments Incorporated nor the names of its
 suppliers may be used to endorse or promote products derived from this software
 without specific prior written permission.

 DISCLAIMER.

 THIS SOFTWARE IS PROVIDED BY TI AND TI�S LICENSORS "AS IS" AND ANY EXPRESS OR
 IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
 MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
 IN NO EVENT SHALL TI AND TI�S LICENSORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
 LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
 PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
 LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE
 OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF
 ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
******************************************************************************/

/*
*******************************************************************************
*
* IMPORTANT NOTE:
*  This file is AUTO-GENERATED by Vision SDK use case generation tool
*
*******************************************************************************
*/
#include "chains_tidlDsp_priv.h"
Void chains_tidlDsp_SetLinkId(chains_tidlDspObj *pObj){
       pObj->NullSourceLinkID               = IPU1_0_LINK (SYSTEM_LINK_ID_NULL_SRC_0);
       pObj->IPCOut_IPU1_0_A15_0_0LinkID    = IPU1_0_LINK (SYSTEM_LINK_ID_IPC_OUT_0);
       pObj->IPCIn_A15_0_IPU1_0_0LinkID     = A15_0_LINK (SYSTEM_LINK_ID_IPC_IN_0);
       pObj->Alg_tidlpreprocLinkID          = A15_0_LINK (SYSTEM_LINK_ID_ALG_0);
       pObj->IPCOut_A15_0_DSP1_0LinkID      = A15_0_LINK (SYSTEM_LINK_ID_IPC_OUT_0);
       pObj->IPCIn_DSP1_A15_0_0LinkID       = DSP1_LINK (SYSTEM_LINK_ID_IPC_IN_0);
       pObj->Alg_tidl_1LinkID               = DSP1_LINK (SYSTEM_LINK_ID_ALG_0);
       pObj->IPCOut_DSP1_IPU1_0_0LinkID     = DSP1_LINK (SYSTEM_LINK_ID_IPC_OUT_0);
       pObj->IPCIn_IPU1_0_DSP1_0LinkID      = IPU1_0_LINK (SYSTEM_LINK_ID_IPC_IN_0);
       pObj->MergeLinkID                    = IPU1_0_LINK (SYSTEM_LINK_ID_MERGE_0);
       pObj->NullLinkID                     = IPU1_0_LINK (SYSTEM_LINK_ID_NULL_0);
}

Void chains_tidlDsp_ResetLinkPrms(chains_tidlDspObj *pObj){
       NullSrcLink_CreateParams_Init(&pObj->NullSourcePrm);
       IpcLink_CreateParams_Init(&pObj->IPCOut_IPU1_0_A15_0_0Prm);
       IpcLink_CreateParams_Init(&pObj->IPCIn_A15_0_IPU1_0_0Prm);
       AlgorithmLink_tidlpreprocCreateParams_Init(&pObj->Alg_tidlpreprocPrm);
       IpcLink_CreateParams_Init(&pObj->IPCOut_A15_0_DSP1_0Prm);
       IpcLink_CreateParams_Init(&pObj->IPCIn_DSP1_A15_0_0Prm);
       AlgorithmLink_tidlCreateParams_Init(&pObj->Alg_tidl_1Prm);
       IpcLink_CreateParams_Init(&pObj->IPCOut_DSP1_IPU1_0_0Prm);
       IpcLink_CreateParams_Init(&pObj->IPCIn_IPU1_0_DSP1_0Prm);
       MergeLink_CreateParams_Init(&pObj->MergePrm);
       NullLink_CreateParams_Init (&pObj->NullPrm);
}

Void chains_tidlDsp_SetPrms(chains_tidlDspObj *pObj){
       (pObj->Alg_tidlpreprocPrm).baseClassCreate.size  = sizeof(AlgorithmLink_tidlpreprocCreateParams);
       (pObj->Alg_tidlpreprocPrm).baseClassCreate.algId  = ALGORITHM_LINK_A15_ALG_TIDLPREPROC;
       (pObj->Alg_tidl_1Prm).baseClassCreate.size  = sizeof(AlgorithmLink_tidlCreateParams);
       (pObj->Alg_tidl_1Prm).baseClassCreate.algId  = ALGORITHM_LINK_DSP_ALG_TIDL;
       (pObj->MergePrm).numInQue = 1;
       (pObj->NullPrm).numInQue = 1;
}

Void chains_tidlDsp_ConnectLinks(chains_tidlDspObj *pObj){

       //NullSource -> IPCOut_IPU1_0_A15_0_0
       pObj->NullSourcePrm.outQueParams.nextLink = pObj->IPCOut_IPU1_0_A15_0_0LinkID;
       pObj->IPCOut_IPU1_0_A15_0_0Prm.inQueParams.prevLinkId = pObj->NullSourceLinkID;
       pObj->IPCOut_IPU1_0_A15_0_0Prm.inQueParams.prevLinkQueId = 0;

       //IPCOut_IPU1_0_A15_0_0 -> IPCIn_A15_0_IPU1_0_0
       pObj->IPCOut_IPU1_0_A15_0_0Prm.outQueParams.nextLink = pObj->IPCIn_A15_0_IPU1_0_0LinkID;
       pObj->IPCIn_A15_0_IPU1_0_0Prm.inQueParams.prevLinkId = pObj->IPCOut_IPU1_0_A15_0_0LinkID;
       pObj->IPCIn_A15_0_IPU1_0_0Prm.inQueParams.prevLinkQueId = 0;

       //IPCIn_A15_0_IPU1_0_0 -> Alg_tidlpreproc
       pObj->IPCIn_A15_0_IPU1_0_0Prm.outQueParams.nextLink = pObj->Alg_tidlpreprocLinkID;
       pObj->Alg_tidlpreprocPrm.inQueParams.prevLinkId = pObj->IPCIn_A15_0_IPU1_0_0LinkID;
       pObj->Alg_tidlpreprocPrm.inQueParams.prevLinkQueId = 0;

       //Alg_tidlpreproc -> IPCOut_A15_0_DSP1_0
       pObj->Alg_tidlpreprocPrm.outQueParams[0].nextLink = pObj->IPCOut_A15_0_DSP1_0LinkID;
       pObj->IPCOut_A15_0_DSP1_0Prm.inQueParams.prevLinkId = pObj->Alg_tidlpreprocLinkID;
       pObj->IPCOut_A15_0_DSP1_0Prm.inQueParams.prevLinkQueId = 0;

       //IPCOut_A15_0_DSP1_0 -> IPCIn_DSP1_A15_0_0
       pObj->IPCOut_A15_0_DSP1_0Prm.outQueParams.nextLink = pObj->IPCIn_DSP1_A15_0_0LinkID;
       pObj->IPCIn_DSP1_A15_0_0Prm.inQueParams.prevLinkId = pObj->IPCOut_A15_0_DSP1_0LinkID;
       pObj->IPCIn_DSP1_A15_0_0Prm.inQueParams.prevLinkQueId = 0;

       //IPCIn_DSP1_A15_0_0 -> Alg_tidl_1
       pObj->IPCIn_DSP1_A15_0_0Prm.outQueParams.nextLink = pObj->Alg_tidl_1LinkID;
       pObj->Alg_tidl_1Prm.inQueParams[0].prevLinkId = pObj->IPCIn_DSP1_A15_0_0LinkID;
       pObj->Alg_tidl_1Prm.inQueParams[0].prevLinkQueId = 0;

       //Alg_tidl_1 -> IPCOut_DSP1_IPU1_0_0
       pObj->Alg_tidl_1Prm.outQueParams[0].nextLink = pObj->IPCOut_DSP1_IPU1_0_0LinkID;
       pObj->IPCOut_DSP1_IPU1_0_0Prm.inQueParams.prevLinkId = pObj->Alg_tidl_1LinkID;
       pObj->IPCOut_DSP1_IPU1_0_0Prm.inQueParams.prevLinkQueId = 0;

       //IPCOut_DSP1_IPU1_0_0 -> IPCIn_IPU1_0_DSP1_0
       pObj->IPCOut_DSP1_IPU1_0_0Prm.outQueParams.nextLink = pObj->IPCIn_IPU1_0_DSP1_0LinkID;
       pObj->IPCIn_IPU1_0_DSP1_0Prm.inQueParams.prevLinkId = pObj->IPCOut_DSP1_IPU1_0_0LinkID;
       pObj->IPCIn_IPU1_0_DSP1_0Prm.inQueParams.prevLinkQueId = 0;

       //IPCIn_IPU1_0_DSP1_0 -> Merge
       pObj->IPCIn_IPU1_0_DSP1_0Prm.outQueParams.nextLink = pObj->MergeLinkID;
       pObj->MergePrm.inQueParams[0].prevLinkId = pObj->IPCIn_IPU1_0_DSP1_0LinkID;
       pObj->MergePrm.inQueParams[0].prevLinkQueId = 0;

       //Merge -> Null
       pObj->MergePrm.outQueParams.nextLink = pObj->NullLinkID;
       pObj->NullPrm.inQueParams[0].prevLinkId = pObj->MergeLinkID;
       pObj->NullPrm.inQueParams[0].prevLinkQueId = 0;

}

Int32 chains_tidlDsp_Create(chains_tidlDspObj *pObj, Void *appObj){

       Int32 status;

       chains_tidlDsp_SetLinkId(pObj);
       chains_tidlDsp_ResetLinkPrms(pObj);

       chains_tidlDsp_SetPrms(pObj);
       chains_tidlDsp_SetAppPrms(pObj, appObj);

       chains_tidlDsp_ConnectLinks(pObj);
       status = System_linkCreate(pObj->NullSourceLinkID, &pObj->NullSourcePrm, sizeof(pObj->NullSourcePrm));
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkCreate(pObj->IPCOut_IPU1_0_A15_0_0LinkID, &pObj->IPCOut_IPU1_0_A15_0_0Prm, sizeof(pObj->IPCOut_IPU1_0_A15_0_0Prm));
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkCreate(pObj->IPCIn_A15_0_IPU1_0_0LinkID, &pObj->IPCIn_A15_0_IPU1_0_0Prm, sizeof(pObj->IPCIn_A15_0_IPU1_0_0Prm));
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkCreate(pObj->Alg_tidlpreprocLinkID, &pObj->Alg_tidlpreprocPrm, sizeof(pObj->Alg_tidlpreprocPrm));
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkCreate(pObj->IPCOut_A15_0_DSP1_0LinkID, &pObj->IPCOut_A15_0_DSP1_0Prm, sizeof(pObj->IPCOut_A15_0_DSP1_0Prm));
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkCreate(pObj->IPCIn_DSP1_A15_0_0LinkID, &pObj->IPCIn_DSP1_A15_0_0Prm, sizeof(pObj->IPCIn_DSP1_A15_0_0Prm));
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkCreate(pObj->Alg_tidl_1LinkID, &pObj->Alg_tidl_1Prm, sizeof(pObj->Alg_tidl_1Prm));
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkCreate(pObj->IPCOut_DSP1_IPU1_0_0LinkID, &pObj->IPCOut_DSP1_IPU1_0_0Prm, sizeof(pObj->IPCOut_DSP1_IPU1_0_0Prm));
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkCreate(pObj->IPCIn_IPU1_0_DSP1_0LinkID, &pObj->IPCIn_IPU1_0_DSP1_0Prm, sizeof(pObj->IPCIn_IPU1_0_DSP1_0Prm));
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkCreate(pObj->MergeLinkID, &pObj->MergePrm, sizeof(pObj->MergePrm));
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkCreate(pObj->NullLinkID, &pObj->NullPrm, sizeof(pObj->NullPrm));
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       return status;
}

Int32 chains_tidlDsp_Start(chains_tidlDspObj *pObj){

       Int32 status;

       status = System_linkStart(pObj->NullLinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkStart(pObj->MergeLinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkStart(pObj->IPCIn_IPU1_0_DSP1_0LinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkStart(pObj->IPCOut_DSP1_IPU1_0_0LinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkStart(pObj->Alg_tidl_1LinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkStart(pObj->IPCIn_DSP1_A15_0_0LinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkStart(pObj->IPCOut_A15_0_DSP1_0LinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkStart(pObj->Alg_tidlpreprocLinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkStart(pObj->IPCIn_A15_0_IPU1_0_0LinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkStart(pObj->IPCOut_IPU1_0_A15_0_0LinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkStart(pObj->NullSourceLinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       return status;
}

Int32 chains_tidlDsp_Stop(chains_tidlDspObj *pObj){

       Int32 status;

       status = System_linkStop(pObj->NullLinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkStop(pObj->MergeLinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkStop(pObj->IPCIn_IPU1_0_DSP1_0LinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkStop(pObj->IPCOut_DSP1_IPU1_0_0LinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkStop(pObj->Alg_tidl_1LinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkStop(pObj->IPCIn_DSP1_A15_0_0LinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkStop(pObj->IPCOut_A15_0_DSP1_0LinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkStop(pObj->Alg_tidlpreprocLinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkStop(pObj->IPCIn_A15_0_IPU1_0_0LinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkStop(pObj->IPCOut_IPU1_0_A15_0_0LinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkStop(pObj->NullSourceLinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       return status;
}

Int32 chains_tidlDsp_Delete(chains_tidlDspObj *pObj){

       Int32 status;

       status = System_linkDelete(pObj->NullLinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkDelete(pObj->MergeLinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkDelete(pObj->IPCIn_IPU1_0_DSP1_0LinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkDelete(pObj->IPCOut_DSP1_IPU1_0_0LinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkDelete(pObj->Alg_tidl_1LinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkDelete(pObj->IPCIn_DSP1_A15_0_0LinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkDelete(pObj->IPCOut_A15_0_DSP1_0LinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkDelete(pObj->Alg_tidlpreprocLinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkDelete(pObj->IPCIn_A15_0_IPU1_0_0LinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkDelete(pObj->IPCOut_IPU1_0_A15_0_0LinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkDelete(pObj->NullSourceLinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       return status;
}

Void chains_tidlDsp_printBufferStatistics(chains_tidlDspObj *pObj){
       System_linkPrintBufferStatistics(pObj->NullSourceLinkID);
       System_linkPrintBufferStatistics(pObj->IPCOut_IPU1_0_A15_0_0LinkID);
       Task_sleep(500);
       System_linkPrintBufferStatistics(pObj->IPCIn_A15_0_IPU1_0_0LinkID);
       System_linkPrintBufferStatistics(pObj->Alg_tidlpreprocLinkID);
       System_linkPrintBufferStatistics(pObj->IPCOut_A15_0_DSP1_0LinkID);
       Task_sleep(500);
       System_linkPrintBufferStatistics(pObj->IPCIn_DSP1_A15_0_0LinkID);
       System_linkPrintBufferStatistics(pObj->Alg_tidl_1LinkID);
       System_linkPrintBufferStatistics(pObj->IPCOut_DSP1_IPU1_0_0LinkID);
       Task_sleep(500);
       System_linkPrintBufferStatistics(pObj->IPCIn_IPU1_0_DSP1_0LinkID);
       System_linkPrintBufferStatistics(pObj->MergeLinkID);
       System_linkPrintBufferStatistics(pObj->NullLinkID);
       Task_sleep(500);
}

Void chains_tidlDsp_printStatistics(chains_tidlDspObj *pObj){
       System_linkPrintStatistics(pObj->NullSourceLinkID);
       System_linkPrintStatistics(pObj->IPCOut_IPU1_0_A15_0_0LinkID);
       Task_sleep(500);
       System_linkPrintStatistics(pObj->IPCIn_A15_0_IPU1_0_0LinkID);
       System_linkPrintStatistics(pObj->Alg_tidlpreprocLinkID);
       System_linkPrintStatistics(pObj->IPCOut_A15_0_DSP1_0LinkID);
       Task_sleep(500);
       System_linkPrintStatistics(pObj->IPCIn_DSP1_A15_0_0LinkID);
       System_linkPrintStatistics(pObj->Alg_tidl_1LinkID);
       System_linkPrintStatistics(pObj->IPCOut_DSP1_IPU1_0_0LinkID);
       Task_sleep(500);
       System_linkPrintStatistics(pObj->IPCIn_IPU1_0_DSP1_0LinkID);
       System_linkPrintStatistics(pObj->MergeLinkID);
       System_linkPrintStatistics(pObj->NullLinkID);
       Task_sleep(500);
}

