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
#include "chains_lvdsVip2dSurroundView_priv.h"
Void chains_lvdsVip2dSurroundView_SetLinkId(chains_lvdsVip2dSurroundViewObj *pObj){
       pObj->CaptureLinkID                  = System_linkIdAlloc( SYSTEM_PROC_IPU1_0, SYSTEM_LINK_TYPE_CAPTURE );
       pObj->Sync_svLinkID                  = System_linkIdAlloc( SYSTEM_PROC_IPU1_0, SYSTEM_LINK_TYPE_SYNC );
       pObj->Dup_svLinkID                   = System_linkIdAlloc( SYSTEM_PROC_IPU1_0, SYSTEM_LINK_TYPE_DUP );
       pObj->IPCOut_IPU1_0_A15_0_2LinkID    = System_linkIdAlloc( SYSTEM_PROC_IPU1_0, SYSTEM_LINK_TYPE_IPC_OUT );
       pObj->IPCIn_A15_0_IPU1_0_1LinkID     = System_linkIdAlloc( SYSTEM_PROC_A15_0, SYSTEM_LINK_TYPE_IPC_IN );
       pObj->EpSink_2LinkID                 = System_linkIdAlloc( SYSTEM_PROC_A15_0, SYSTEM_LINK_TYPE_EP );
       pObj->IPCOut_IPU1_0_DSP1_1LinkID     = System_linkIdAlloc( SYSTEM_PROC_IPU1_0, SYSTEM_LINK_TYPE_IPC_OUT );
       pObj->IPCIn_DSP1_IPU1_0_1LinkID      = System_linkIdAlloc( SYSTEM_PROC_DSP1, SYSTEM_LINK_TYPE_IPC_IN );
       pObj->IPCOut_IPU1_0_DSP1_0LinkID     = System_linkIdAlloc( SYSTEM_PROC_IPU1_0, SYSTEM_LINK_TYPE_IPC_OUT );
       pObj->IPCIn_DSP1_IPU1_0_0LinkID      = System_linkIdAlloc( SYSTEM_PROC_DSP1, SYSTEM_LINK_TYPE_IPC_IN );
       pObj->Alg_GeoAlignLinkID             = System_linkIdAlloc( SYSTEM_PROC_DSP1, SYSTEM_LINK_TYPE_ALG );
       pObj->Alg_SynthesisLinkID            = System_linkIdAlloc( SYSTEM_PROC_DSP1, SYSTEM_LINK_TYPE_ALG );
       pObj->IPCOut_DSP1_A15_0_0LinkID      = System_linkIdAlloc( SYSTEM_PROC_DSP1, SYSTEM_LINK_TYPE_IPC_OUT );
       pObj->IPCIn_A15_0_DSP1_0LinkID       = System_linkIdAlloc( SYSTEM_PROC_A15_0, SYSTEM_LINK_TYPE_IPC_IN );
       pObj->EpSink_1LinkID                 = System_linkIdAlloc( SYSTEM_PROC_A15_0, SYSTEM_LINK_TYPE_EP );
       pObj->Alg_PhotoAlignLinkID           = System_linkIdAlloc( SYSTEM_PROC_DSP1, SYSTEM_LINK_TYPE_ALG );
}

Void chains_lvdsVip2dSurroundView_FreeLinkId(chains_lvdsVip2dSurroundViewObj *pObj){
       System_linkIdFree( SYSTEM_LINK_TYPE_CAPTURE, pObj->CaptureLinkID);
       System_linkIdFree( SYSTEM_LINK_TYPE_SYNC, pObj->Sync_svLinkID);
       System_linkIdFree( SYSTEM_LINK_TYPE_DUP, pObj->Dup_svLinkID);
       System_linkIdFree( SYSTEM_LINK_TYPE_IPC_OUT, pObj->IPCOut_IPU1_0_A15_0_2LinkID);
       System_linkIdFree( SYSTEM_LINK_TYPE_IPC_IN, pObj->IPCIn_A15_0_IPU1_0_1LinkID);
       System_linkIdFree( SYSTEM_LINK_TYPE_EP, pObj->EpSink_2LinkID);
       System_linkIdFree( SYSTEM_LINK_TYPE_IPC_OUT, pObj->IPCOut_IPU1_0_DSP1_1LinkID);
       System_linkIdFree( SYSTEM_LINK_TYPE_IPC_IN, pObj->IPCIn_DSP1_IPU1_0_1LinkID);
       System_linkIdFree( SYSTEM_LINK_TYPE_IPC_OUT, pObj->IPCOut_IPU1_0_DSP1_0LinkID);
       System_linkIdFree( SYSTEM_LINK_TYPE_IPC_IN, pObj->IPCIn_DSP1_IPU1_0_0LinkID);
       System_linkIdFree( SYSTEM_LINK_TYPE_ALG, pObj->Alg_GeoAlignLinkID);
       System_linkIdFree( SYSTEM_LINK_TYPE_ALG, pObj->Alg_SynthesisLinkID);
       System_linkIdFree( SYSTEM_LINK_TYPE_IPC_OUT, pObj->IPCOut_DSP1_A15_0_0LinkID);
       System_linkIdFree( SYSTEM_LINK_TYPE_IPC_IN, pObj->IPCIn_A15_0_DSP1_0LinkID);
       System_linkIdFree( SYSTEM_LINK_TYPE_EP, pObj->EpSink_1LinkID);
       System_linkIdFree( SYSTEM_LINK_TYPE_ALG, pObj->Alg_PhotoAlignLinkID);
}

Void chains_lvdsVip2dSurroundView_ResetLinkPrms(chains_lvdsVip2dSurroundViewObj *pObj){
       CaptureLink_CreateParams_Init(&pObj->CapturePrm);
       SyncLink_CreateParams_Init(&pObj->Sync_svPrm);
       DupLink_CreateParams_Init(&pObj->Dup_svPrm);
       IpcLink_CreateParams_Init(&pObj->IPCOut_IPU1_0_A15_0_2Prm);
       IpcLink_CreateParams_Init(&pObj->IPCIn_A15_0_IPU1_0_1Prm);
       IpcLink_CreateParams_Init(&pObj->IPCOut_IPU1_0_DSP1_1Prm);
       IpcLink_CreateParams_Init(&pObj->IPCIn_DSP1_IPU1_0_1Prm);
       IpcLink_CreateParams_Init(&pObj->IPCOut_IPU1_0_DSP1_0Prm);
       IpcLink_CreateParams_Init(&pObj->IPCIn_DSP1_IPU1_0_0Prm);
       IpcLink_CreateParams_Init(&pObj->IPCOut_DSP1_A15_0_0Prm);
       IpcLink_CreateParams_Init(&pObj->IPCIn_A15_0_DSP1_0Prm);
}

Void chains_lvdsVip2dSurroundView_SetPrms(chains_lvdsVip2dSurroundViewObj *pObj){
       (pObj->Dup_svPrm).numOutQue = 3;
       (pObj->Alg_GeoAlignPrm).baseClassCreate.size  = sizeof(AlgorithmLink_GAlignCreateParams);
       (pObj->Alg_GeoAlignPrm).baseClassCreate.algId  = ALGORITHM_LINK_DSP_ALG_GALIGNMENT;
       (pObj->Alg_SynthesisPrm).baseClassCreate.size  = sizeof(AlgorithmLink_SynthesisCreateParams);
       (pObj->Alg_SynthesisPrm).baseClassCreate.algId  = ALGORITHM_LINK_DSP_ALG_SYNTHESIS;
       (pObj->Alg_PhotoAlignPrm).baseClassCreate.size  = sizeof(AlgorithmLink_PAlignCreateParams);
       (pObj->Alg_PhotoAlignPrm).baseClassCreate.algId  = ALGORITHM_LINK_DSP_ALG_PALIGNMENT;
}

Void chains_lvdsVip2dSurroundView_ConnectLinks(chains_lvdsVip2dSurroundViewObj *pObj){

       //Capture -> Sync_sv
       pObj->CapturePrm.outQueParams.nextLink = pObj->Sync_svLinkID;
       pObj->Sync_svPrm.inQueParams.prevLinkId = pObj->CaptureLinkID;
       pObj->Sync_svPrm.inQueParams.prevLinkQueId = 0;

       //Sync_sv -> Dup_sv
       pObj->Sync_svPrm.outQueParams.nextLink = pObj->Dup_svLinkID;
       pObj->Dup_svPrm.inQueParams.prevLinkId = pObj->Sync_svLinkID;
       pObj->Dup_svPrm.inQueParams.prevLinkQueId = 0;

       //Dup_sv -> IPCOut_IPU1_0_DSP1_0
       pObj->Dup_svPrm.outQueParams[0].nextLink = pObj->IPCOut_IPU1_0_DSP1_0LinkID;
       pObj->IPCOut_IPU1_0_DSP1_0Prm.inQueParams.prevLinkId = pObj->Dup_svLinkID;
       pObj->IPCOut_IPU1_0_DSP1_0Prm.inQueParams.prevLinkQueId = 0;

       //Dup_sv -> IPCOut_IPU1_0_DSP1_1
       pObj->Dup_svPrm.outQueParams[1].nextLink = pObj->IPCOut_IPU1_0_DSP1_1LinkID;
       pObj->IPCOut_IPU1_0_DSP1_1Prm.inQueParams.prevLinkId = pObj->Dup_svLinkID;
       pObj->IPCOut_IPU1_0_DSP1_1Prm.inQueParams.prevLinkQueId = 1;

       //Dup_sv -> IPCOut_IPU1_0_A15_0_2
       pObj->Dup_svPrm.outQueParams[2].nextLink = pObj->IPCOut_IPU1_0_A15_0_2LinkID;
       pObj->IPCOut_IPU1_0_A15_0_2Prm.inQueParams.prevLinkId = pObj->Dup_svLinkID;
       pObj->IPCOut_IPU1_0_A15_0_2Prm.inQueParams.prevLinkQueId = 2;

       //IPCOut_IPU1_0_A15_0_2 -> IPCIn_A15_0_IPU1_0_1
       pObj->IPCOut_IPU1_0_A15_0_2Prm.outQueParams.nextLink = pObj->IPCIn_A15_0_IPU1_0_1LinkID;
       pObj->IPCIn_A15_0_IPU1_0_1Prm.inQueParams.prevLinkId = pObj->IPCOut_IPU1_0_A15_0_2LinkID;
       pObj->IPCIn_A15_0_IPU1_0_1Prm.inQueParams.prevLinkQueId = 0;

       //IPCIn_A15_0_IPU1_0_1 -> EpSink_2
       pObj->IPCIn_A15_0_IPU1_0_1Prm.outQueParams.nextLink = pObj->EpSink_2LinkID;
       pObj->EpSink_2Prm.inQueParams.prevLinkId = pObj->IPCIn_A15_0_IPU1_0_1LinkID;
       pObj->EpSink_2Prm.inQueParams.prevLinkQueId = 0;

       //IPCOut_IPU1_0_DSP1_1 -> IPCIn_DSP1_IPU1_0_1
       pObj->IPCOut_IPU1_0_DSP1_1Prm.outQueParams.nextLink = pObj->IPCIn_DSP1_IPU1_0_1LinkID;
       pObj->IPCIn_DSP1_IPU1_0_1Prm.inQueParams.prevLinkId = pObj->IPCOut_IPU1_0_DSP1_1LinkID;
       pObj->IPCIn_DSP1_IPU1_0_1Prm.inQueParams.prevLinkQueId = 0;

       //IPCIn_DSP1_IPU1_0_1 -> Alg_Synthesis
       pObj->IPCIn_DSP1_IPU1_0_1Prm.outQueParams.nextLink = pObj->Alg_SynthesisLinkID;
       pObj->Alg_SynthesisPrm.inQueParams[0].prevLinkId = pObj->IPCIn_DSP1_IPU1_0_1LinkID;
       pObj->Alg_SynthesisPrm.inQueParams[0].prevLinkQueId = 0;

       //IPCOut_IPU1_0_DSP1_0 -> IPCIn_DSP1_IPU1_0_0
       pObj->IPCOut_IPU1_0_DSP1_0Prm.outQueParams.nextLink = pObj->IPCIn_DSP1_IPU1_0_0LinkID;
       pObj->IPCIn_DSP1_IPU1_0_0Prm.inQueParams.prevLinkId = pObj->IPCOut_IPU1_0_DSP1_0LinkID;
       pObj->IPCIn_DSP1_IPU1_0_0Prm.inQueParams.prevLinkQueId = 0;

       //IPCIn_DSP1_IPU1_0_0 -> Alg_GeoAlign
       pObj->IPCIn_DSP1_IPU1_0_0Prm.outQueParams.nextLink = pObj->Alg_GeoAlignLinkID;
       pObj->Alg_GeoAlignPrm.inQueParams[0].prevLinkId = pObj->IPCIn_DSP1_IPU1_0_0LinkID;
       pObj->Alg_GeoAlignPrm.inQueParams[0].prevLinkQueId = 0;

       //Alg_GeoAlign -> Alg_Synthesis
       pObj->Alg_GeoAlignPrm.outQueParams[0].nextLink = pObj->Alg_SynthesisLinkID;
       pObj->Alg_SynthesisPrm.inQueParams[1].prevLinkId = pObj->Alg_GeoAlignLinkID;
       pObj->Alg_SynthesisPrm.inQueParams[1].prevLinkQueId = 0;

       //Alg_Synthesis -> IPCOut_DSP1_A15_0_0
       pObj->Alg_SynthesisPrm.outQueParams[0].nextLink = pObj->IPCOut_DSP1_A15_0_0LinkID;
       pObj->IPCOut_DSP1_A15_0_0Prm.inQueParams.prevLinkId = pObj->Alg_SynthesisLinkID;
       pObj->IPCOut_DSP1_A15_0_0Prm.inQueParams.prevLinkQueId = 0;

       //Alg_Synthesis -> Alg_PhotoAlign
       pObj->Alg_SynthesisPrm.outQueParams[1].nextLink = pObj->Alg_PhotoAlignLinkID;
       pObj->Alg_PhotoAlignPrm.inQueParams[0].prevLinkId = pObj->Alg_SynthesisLinkID;
       pObj->Alg_PhotoAlignPrm.inQueParams[0].prevLinkQueId = 1;

       //IPCOut_DSP1_A15_0_0 -> IPCIn_A15_0_DSP1_0
       pObj->IPCOut_DSP1_A15_0_0Prm.outQueParams.nextLink = pObj->IPCIn_A15_0_DSP1_0LinkID;
       pObj->IPCIn_A15_0_DSP1_0Prm.inQueParams.prevLinkId = pObj->IPCOut_DSP1_A15_0_0LinkID;
       pObj->IPCIn_A15_0_DSP1_0Prm.inQueParams.prevLinkQueId = 0;

       //IPCIn_A15_0_DSP1_0 -> EpSink_1
       pObj->IPCIn_A15_0_DSP1_0Prm.outQueParams.nextLink = pObj->EpSink_1LinkID;
       pObj->EpSink_1Prm.inQueParams.prevLinkId = pObj->IPCIn_A15_0_DSP1_0LinkID;
       pObj->EpSink_1Prm.inQueParams.prevLinkQueId = 0;

       //Alg_PhotoAlign -> Alg_Synthesis
       pObj->Alg_PhotoAlignPrm.outQueParams[0].nextLink = pObj->Alg_SynthesisLinkID;
       pObj->Alg_SynthesisPrm.inQueParams[2].prevLinkId = pObj->Alg_PhotoAlignLinkID;
       pObj->Alg_SynthesisPrm.inQueParams[2].prevLinkQueId = 0;

}

Int32 chains_lvdsVip2dSurroundView_Create(chains_lvdsVip2dSurroundViewObj *pObj, Void *appObj){

       Int32 status;

       chains_lvdsVip2dSurroundView_SetLinkId(pObj);
       chains_lvdsVip2dSurroundView_ResetLinkPrms(pObj);

       chains_lvdsVip2dSurroundView_SetPrms(pObj);
       chains_lvdsVip2dSurroundView_SetAppPrms(pObj, appObj);

       chains_lvdsVip2dSurroundView_ConnectLinks(pObj);
       status = System_linkCreate(pObj->CaptureLinkID, &pObj->CapturePrm, sizeof(pObj->CapturePrm));
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkCreate(pObj->Sync_svLinkID, &pObj->Sync_svPrm, sizeof(pObj->Sync_svPrm));
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkCreate(pObj->Dup_svLinkID, &pObj->Dup_svPrm, sizeof(pObj->Dup_svPrm));
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkCreate(pObj->IPCOut_IPU1_0_A15_0_2LinkID, &pObj->IPCOut_IPU1_0_A15_0_2Prm, sizeof(pObj->IPCOut_IPU1_0_A15_0_2Prm));
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkCreate(pObj->IPCIn_A15_0_IPU1_0_1LinkID, &pObj->IPCIn_A15_0_IPU1_0_1Prm, sizeof(pObj->IPCIn_A15_0_IPU1_0_1Prm));
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkCreate(pObj->EpSink_2LinkID, &pObj->EpSink_2Prm, sizeof(pObj->EpSink_2Prm));
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkCreate(pObj->IPCOut_IPU1_0_DSP1_1LinkID, &pObj->IPCOut_IPU1_0_DSP1_1Prm, sizeof(pObj->IPCOut_IPU1_0_DSP1_1Prm));
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkCreate(pObj->IPCIn_DSP1_IPU1_0_1LinkID, &pObj->IPCIn_DSP1_IPU1_0_1Prm, sizeof(pObj->IPCIn_DSP1_IPU1_0_1Prm));
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkCreate(pObj->IPCOut_IPU1_0_DSP1_0LinkID, &pObj->IPCOut_IPU1_0_DSP1_0Prm, sizeof(pObj->IPCOut_IPU1_0_DSP1_0Prm));
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkCreate(pObj->IPCIn_DSP1_IPU1_0_0LinkID, &pObj->IPCIn_DSP1_IPU1_0_0Prm, sizeof(pObj->IPCIn_DSP1_IPU1_0_0Prm));
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkCreate(pObj->Alg_GeoAlignLinkID, &pObj->Alg_GeoAlignPrm, sizeof(pObj->Alg_GeoAlignPrm));
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkCreate(pObj->Alg_SynthesisLinkID, &pObj->Alg_SynthesisPrm, sizeof(pObj->Alg_SynthesisPrm));
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkCreate(pObj->IPCOut_DSP1_A15_0_0LinkID, &pObj->IPCOut_DSP1_A15_0_0Prm, sizeof(pObj->IPCOut_DSP1_A15_0_0Prm));
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkCreate(pObj->IPCIn_A15_0_DSP1_0LinkID, &pObj->IPCIn_A15_0_DSP1_0Prm, sizeof(pObj->IPCIn_A15_0_DSP1_0Prm));
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkCreate(pObj->EpSink_1LinkID, &pObj->EpSink_1Prm, sizeof(pObj->EpSink_1Prm));
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkCreate(pObj->Alg_PhotoAlignLinkID, &pObj->Alg_PhotoAlignPrm, sizeof(pObj->Alg_PhotoAlignPrm));
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       return status;
}

Int32 chains_lvdsVip2dSurroundView_Start(chains_lvdsVip2dSurroundViewObj *pObj){

       Int32 status;

       status = System_linkStart(pObj->Alg_PhotoAlignLinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkStart(pObj->EpSink_1LinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkStart(pObj->IPCIn_A15_0_DSP1_0LinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkStart(pObj->IPCOut_DSP1_A15_0_0LinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkStart(pObj->Alg_SynthesisLinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkStart(pObj->Alg_GeoAlignLinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkStart(pObj->IPCIn_DSP1_IPU1_0_0LinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkStart(pObj->IPCOut_IPU1_0_DSP1_0LinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkStart(pObj->IPCIn_DSP1_IPU1_0_1LinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkStart(pObj->IPCOut_IPU1_0_DSP1_1LinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkStart(pObj->EpSink_2LinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkStart(pObj->IPCIn_A15_0_IPU1_0_1LinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkStart(pObj->IPCOut_IPU1_0_A15_0_2LinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkStart(pObj->Dup_svLinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkStart(pObj->Sync_svLinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkStart(pObj->CaptureLinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       return status;
}

Int32 chains_lvdsVip2dSurroundView_Stop(chains_lvdsVip2dSurroundViewObj *pObj){

       Int32 status;

       status = System_linkStop(pObj->Alg_PhotoAlignLinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkStop(pObj->EpSink_1LinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkStop(pObj->IPCIn_A15_0_DSP1_0LinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkStop(pObj->IPCOut_DSP1_A15_0_0LinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkStop(pObj->Alg_SynthesisLinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkStop(pObj->Alg_GeoAlignLinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkStop(pObj->IPCIn_DSP1_IPU1_0_0LinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkStop(pObj->IPCOut_IPU1_0_DSP1_0LinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkStop(pObj->IPCIn_DSP1_IPU1_0_1LinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkStop(pObj->IPCOut_IPU1_0_DSP1_1LinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkStop(pObj->EpSink_2LinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkStop(pObj->IPCIn_A15_0_IPU1_0_1LinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkStop(pObj->IPCOut_IPU1_0_A15_0_2LinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkStop(pObj->Dup_svLinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkStop(pObj->Sync_svLinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkStop(pObj->CaptureLinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       return status;
}

Int32 chains_lvdsVip2dSurroundView_Delete(chains_lvdsVip2dSurroundViewObj *pObj){

       Int32 status;

       status = System_linkDelete(pObj->Alg_PhotoAlignLinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkDelete(pObj->EpSink_1LinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkDelete(pObj->IPCIn_A15_0_DSP1_0LinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkDelete(pObj->IPCOut_DSP1_A15_0_0LinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkDelete(pObj->Alg_SynthesisLinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkDelete(pObj->Alg_GeoAlignLinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkDelete(pObj->IPCIn_DSP1_IPU1_0_0LinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkDelete(pObj->IPCOut_IPU1_0_DSP1_0LinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkDelete(pObj->IPCIn_DSP1_IPU1_0_1LinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkDelete(pObj->IPCOut_IPU1_0_DSP1_1LinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkDelete(pObj->EpSink_2LinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkDelete(pObj->IPCIn_A15_0_IPU1_0_1LinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkDelete(pObj->IPCOut_IPU1_0_A15_0_2LinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkDelete(pObj->Dup_svLinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkDelete(pObj->Sync_svLinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkDelete(pObj->CaptureLinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       chains_lvdsVip2dSurroundView_FreeLinkId(pObj);
       return status;
}

Void chains_lvdsVip2dSurroundView_printBufferStatistics(chains_lvdsVip2dSurroundViewObj *pObj){
       System_linkPrintBufferStatistics(pObj->CaptureLinkID);
       System_linkPrintBufferStatistics(pObj->Sync_svLinkID);
       System_linkPrintBufferStatistics(pObj->Dup_svLinkID);
       System_linkPrintBufferStatistics(pObj->IPCOut_IPU1_0_A15_0_2LinkID);
       Task_sleep(500);
       System_linkPrintBufferStatistics(pObj->IPCIn_A15_0_IPU1_0_1LinkID);
       System_linkPrintBufferStatistics(pObj->EpSink_2LinkID);
       Task_sleep(500);
       System_linkPrintBufferStatistics(pObj->IPCOut_IPU1_0_DSP1_1LinkID);
       Task_sleep(500);
       System_linkPrintBufferStatistics(pObj->IPCIn_DSP1_IPU1_0_1LinkID);
       Task_sleep(500);
       System_linkPrintBufferStatistics(pObj->IPCOut_IPU1_0_DSP1_0LinkID);
       Task_sleep(500);
       System_linkPrintBufferStatistics(pObj->IPCIn_DSP1_IPU1_0_0LinkID);
       System_linkPrintBufferStatistics(pObj->Alg_GeoAlignLinkID);
       System_linkPrintBufferStatistics(pObj->Alg_SynthesisLinkID);
       System_linkPrintBufferStatistics(pObj->IPCOut_DSP1_A15_0_0LinkID);
       Task_sleep(500);
       System_linkPrintBufferStatistics(pObj->IPCIn_A15_0_DSP1_0LinkID);
       System_linkPrintBufferStatistics(pObj->EpSink_1LinkID);
       Task_sleep(500);
       System_linkPrintBufferStatistics(pObj->Alg_PhotoAlignLinkID);
       Task_sleep(500);
}

Void chains_lvdsVip2dSurroundView_printStatistics(chains_lvdsVip2dSurroundViewObj *pObj){
       System_linkPrintStatistics(pObj->CaptureLinkID);
       System_linkPrintStatistics(pObj->Sync_svLinkID);
       System_linkPrintStatistics(pObj->Dup_svLinkID);
       System_linkPrintStatistics(pObj->IPCOut_IPU1_0_A15_0_2LinkID);
       Task_sleep(500);
       System_linkPrintStatistics(pObj->IPCIn_A15_0_IPU1_0_1LinkID);
       System_linkPrintStatistics(pObj->EpSink_2LinkID);
       Task_sleep(500);
       System_linkPrintStatistics(pObj->IPCOut_IPU1_0_DSP1_1LinkID);
       Task_sleep(500);
       System_linkPrintStatistics(pObj->IPCIn_DSP1_IPU1_0_1LinkID);
       Task_sleep(500);
       System_linkPrintStatistics(pObj->IPCOut_IPU1_0_DSP1_0LinkID);
       Task_sleep(500);
       System_linkPrintStatistics(pObj->IPCIn_DSP1_IPU1_0_0LinkID);
       System_linkPrintStatistics(pObj->Alg_GeoAlignLinkID);
       System_linkPrintStatistics(pObj->Alg_SynthesisLinkID);
       System_linkPrintStatistics(pObj->IPCOut_DSP1_A15_0_0LinkID);
       Task_sleep(500);
       System_linkPrintStatistics(pObj->IPCIn_A15_0_DSP1_0LinkID);
       System_linkPrintStatistics(pObj->EpSink_1LinkID);
       Task_sleep(500);
       System_linkPrintStatistics(pObj->Alg_PhotoAlignLinkID);
       Task_sleep(500);
}

