/****************************************************************************
Copyright (c) [2012 - 2017] Texas Instruments Incorporated

All rights reserved not granted herein.

Limited License.

 Texas Instruments Incorporated grants a world-wide, royalty-free, non-exclusive
 license under copyrights and patents it now or hereafter owns or controls to
 make,  have made, use, import, offer to sell and sell ('Utilize') this software
 subject to the terms herein.  With respect to the foregoing patent license,
 such license is granted  solely to the extent that any such patent is necessary
 to Utilize the software alone.  The patent license shall not apply to any
 combinations which include this software, other than combinations with devices
 manufactured by or for TI ('TI Devices').  No hardware patent is licensed
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

 THIS SOFTWARE IS PROVIDED BY TI AND TI�S LICENSORS 'AS IS' AND ANY EXPRESS OR
 IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
 MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
 IN NO EVENT SHALL TI AND TI�S LICENSORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
 LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
 PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
 LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE
 OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF
 ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
******************************************************************************
*/
/*
*******************************************************************************
*
* IMPORTANT NOTE:
*  This file is AUTO-GENERATED by Vision SDK use case generation tool
*
*******************************************************************************
*/
#include "chains_issMultCaptIspDeWarpRearView3dSv_priv.h"
Void chains_issMultCaptIspDeWarpRearView3dSv_SetLinkId(chains_issMultCaptIspDeWarpRearView3dSvObj *pObj){
       pObj->IssCaptureLinkID               = SYSTEM_LINK_ID_ISSCAPTURE_0;
       pObj->IssM2mIspLinkID                = SYSTEM_LINK_ID_ISSM2MISP_0;
       pObj->Alg_IssAewbLinkID              = IPU1_0_LINK (SYSTEM_LINK_ID_ALG_1);
       pObj->DupLinkID                      = IPU1_0_LINK (SYSTEM_LINK_ID_DUP_0);
       pObj->SelectLinkID                   = IPU1_0_LINK (SYSTEM_LINK_ID_SELECT_0);
       pObj->IssM2mSimcopLinkID             = SYSTEM_LINK_ID_ISSM2MSIMCOP_0;
       pObj->IssM2mResizerLinkID            = SYSTEM_LINK_ID_ISS_RESIZER_0;
       pObj->IPCOut_IPU1_0_DSP2_2LinkID     = IPU1_0_LINK (SYSTEM_LINK_ID_IPC_OUT_2);
       pObj->IPCIn_DSP2_IPU1_0_0LinkID      = DSP2_LINK (SYSTEM_LINK_ID_IPC_IN_0);
       pObj->Alg_drawRearviewLinkID         = DSP2_LINK (SYSTEM_LINK_ID_ALG_0);
       pObj->IPCOut_DSP2_IPU1_0_0LinkID     = DSP2_LINK (SYSTEM_LINK_ID_IPC_OUT_0);
       pObj->IPCIn_IPU1_0_DSP2_1LinkID      = IPU1_0_LINK (SYSTEM_LINK_ID_IPC_IN_1);
       pObj->Display_VideoRszBLinkID        = SYSTEM_LINK_ID_DISPLAY_0;
       pObj->Sync_dewarpLinkID              = IPU1_0_LINK (SYSTEM_LINK_ID_SYNC_0);
       pObj->Alg_DeWarpLinkID               = IPU1_0_LINK (SYSTEM_LINK_ID_ALG_0);
       pObj->IPCOut_IPU1_0_DSP1_0LinkID     = IPU1_0_LINK (SYSTEM_LINK_ID_IPC_OUT_0);
       pObj->IPCIn_DSP1_IPU1_0_0LinkID      = DSP1_LINK (SYSTEM_LINK_ID_IPC_IN_0);
       pObj->NullSourceLinkID               = IPU1_0_LINK (SYSTEM_LINK_ID_NULL_SRC_0);
       pObj->IPCOut_IPU1_0_DSP1_1LinkID     = IPU1_0_LINK (SYSTEM_LINK_ID_IPC_OUT_1);
       pObj->IPCIn_DSP1_IPU1_0_1LinkID      = DSP1_LINK (SYSTEM_LINK_ID_IPC_IN_1);
       pObj->Alg_SynthesisLinkID            = DSP1_LINK (SYSTEM_LINK_ID_ALG_0);
       pObj->IPCOut_DSP1_IPU1_0_0LinkID     = DSP1_LINK (SYSTEM_LINK_ID_IPC_OUT_0);
       pObj->IPCIn_IPU1_0_DSP1_0LinkID      = IPU1_0_LINK (SYSTEM_LINK_ID_IPC_IN_0);
       pObj->Display_VideoLinkID            = SYSTEM_LINK_ID_DISPLAY_1;
       pObj->Alg_PhotoAlignLinkID           = DSP1_LINK (SYSTEM_LINK_ID_ALG_1);
}

Void chains_issMultCaptIspDeWarpRearView3dSv_ResetLinkPrms(chains_issMultCaptIspDeWarpRearView3dSvObj *pObj){
       IssCaptureLink_CreateParams_Init(&pObj->IssCapturePrm);
       IssM2mIspLink_CreateParams_Init(&pObj->IssM2mIspPrm);
       AlgorithmLink_IssAewb_Init(&pObj->Alg_IssAewbPrm);
       DupLink_CreateParams_Init(&pObj->DupPrm);
       SelectLink_CreateParams_Init(&pObj->SelectPrm);
       IssM2mSimcopLink_CreateParams_Init(&pObj->IssM2mSimcopPrm);
       IssRszLink_CreateParams_Init(&pObj->IssM2mResizerPrm);
       IpcLink_CreateParams_Init(&pObj->IPCOut_IPU1_0_DSP2_2Prm);
       IpcLink_CreateParams_Init(&pObj->IPCIn_DSP2_IPU1_0_0Prm);
       IpcLink_CreateParams_Init(&pObj->IPCOut_DSP2_IPU1_0_0Prm);
       IpcLink_CreateParams_Init(&pObj->IPCIn_IPU1_0_DSP2_1Prm);
       DisplayLink_CreateParams_Init(&pObj->Display_VideoRszBPrm);
       SyncLink_CreateParams_Init(&pObj->Sync_dewarpPrm);
       AlgLink_DeWarpCreateParams_Init(&pObj->Alg_DeWarpPrm);
       IpcLink_CreateParams_Init(&pObj->IPCOut_IPU1_0_DSP1_0Prm);
       IpcLink_CreateParams_Init(&pObj->IPCIn_DSP1_IPU1_0_0Prm);
       NullSrcLink_CreateParams_Init(&pObj->NullSourcePrm);
       IpcLink_CreateParams_Init(&pObj->IPCOut_IPU1_0_DSP1_1Prm);
       IpcLink_CreateParams_Init(&pObj->IPCIn_DSP1_IPU1_0_1Prm);
       IpcLink_CreateParams_Init(&pObj->IPCOut_DSP1_IPU1_0_0Prm);
       IpcLink_CreateParams_Init(&pObj->IPCIn_IPU1_0_DSP1_0Prm);
       DisplayLink_CreateParams_Init(&pObj->Display_VideoPrm);
}

Void chains_issMultCaptIspDeWarpRearView3dSv_SetPrms(chains_issMultCaptIspDeWarpRearView3dSvObj *pObj){
       (pObj->Alg_IssAewbPrm).baseClassCreate.size  = sizeof(AlgorithmLink_IssAewbCreateParams);
       (pObj->Alg_IssAewbPrm).baseClassCreate.algId  = ALGORITHM_LINK_IPU_ALG_ISS_AEWB2;
       (pObj->DupPrm).numOutQue = 2;
       (pObj->SelectPrm).numOutQue = 1;
       (pObj->IssM2mSimcopPrm).numInQue = 1;
       (pObj->Alg_drawRearviewPrm).baseClassCreate.size  = sizeof(AlgorithmLink_drawRearviewCreateParams);
       (pObj->Alg_drawRearviewPrm).baseClassCreate.algId  = ALGORITHM_LINK_DSP_ALG_DRAWREARVIEW;
       (pObj->Alg_DeWarpPrm).baseClassCreate.size  = sizeof(AlgLink_DeWarpCreateParams);
       (pObj->Alg_DeWarpPrm).baseClassCreate.algId  = ALGORITHM_LINK_IPU_ALG_DEWARP;
       (pObj->Alg_SynthesisPrm).baseClassCreate.size  = sizeof(AlgorithmLink_SynthesisCreateParams);
       (pObj->Alg_SynthesisPrm).baseClassCreate.algId  = ALGORITHM_LINK_DSP_ALG_SYNTHESIS;
       (pObj->Alg_PhotoAlignPrm).baseClassCreate.size  = sizeof(AlgorithmLink_PAlignCreateParams);
       (pObj->Alg_PhotoAlignPrm).baseClassCreate.algId  = ALGORITHM_LINK_DSP_ALG_PALIGNMENT;
}

Void chains_issMultCaptIspDeWarpRearView3dSv_ConnectLinks(chains_issMultCaptIspDeWarpRearView3dSvObj *pObj){

       //IssCapture -> IssM2mIsp
       pObj->IssCapturePrm.outQueParams.nextLink = pObj->IssM2mIspLinkID;
       pObj->IssM2mIspPrm.inQueParams[0].prevLinkId = pObj->IssCaptureLinkID;
       pObj->IssM2mIspPrm.inQueParams[0].prevLinkQueId = 0;

       //IssM2mIsp -> Dup
       pObj->IssM2mIspPrm.outQueParams[0].nextLink = pObj->DupLinkID;
       pObj->DupPrm.inQueParams.prevLinkId = pObj->IssM2mIspLinkID;
       pObj->DupPrm.inQueParams.prevLinkQueId = 0;

       //IssM2mIsp -> Alg_IssAewb
       pObj->IssM2mIspPrm.outQueParams[1].nextLink = pObj->Alg_IssAewbLinkID;
       pObj->Alg_IssAewbPrm.inQueParams.prevLinkId = pObj->IssM2mIspLinkID;
       pObj->Alg_IssAewbPrm.inQueParams.prevLinkQueId = 1;

       //Dup -> Sync_dewarp
       pObj->DupPrm.outQueParams[0].nextLink = pObj->Sync_dewarpLinkID;
       pObj->Sync_dewarpPrm.inQueParams.prevLinkId = pObj->DupLinkID;
       pObj->Sync_dewarpPrm.inQueParams.prevLinkQueId = 0;

       //Dup -> Select
       pObj->DupPrm.outQueParams[1].nextLink = pObj->SelectLinkID;
       pObj->SelectPrm.inQueParams.prevLinkId = pObj->DupLinkID;
       pObj->SelectPrm.inQueParams.prevLinkQueId = 1;

       //Select -> IssM2mSimcop
       pObj->SelectPrm.outQueParams[0].nextLink = pObj->IssM2mSimcopLinkID;
       pObj->IssM2mSimcopPrm.inQueParams[0].prevLinkId = pObj->SelectLinkID;
       pObj->IssM2mSimcopPrm.inQueParams[0].prevLinkQueId = 0;

       //IssM2mSimcop -> IssM2mResizer
       pObj->IssM2mSimcopPrm.outQueParams.nextLink = pObj->IssM2mResizerLinkID;
       pObj->IssM2mResizerPrm.inQueParams.prevLinkId = pObj->IssM2mSimcopLinkID;
       pObj->IssM2mResizerPrm.inQueParams.prevLinkQueId = 0;

       //IssM2mResizer -> IPCOut_IPU1_0_DSP2_2
       pObj->IssM2mResizerPrm.outQueParams[0].nextLink = pObj->IPCOut_IPU1_0_DSP2_2LinkID;
       pObj->IPCOut_IPU1_0_DSP2_2Prm.inQueParams.prevLinkId = pObj->IssM2mResizerLinkID;
       pObj->IPCOut_IPU1_0_DSP2_2Prm.inQueParams.prevLinkQueId = 0;

       //IPCOut_IPU1_0_DSP2_2 -> IPCIn_DSP2_IPU1_0_0
       pObj->IPCOut_IPU1_0_DSP2_2Prm.outQueParams.nextLink = pObj->IPCIn_DSP2_IPU1_0_0LinkID;
       pObj->IPCIn_DSP2_IPU1_0_0Prm.inQueParams.prevLinkId = pObj->IPCOut_IPU1_0_DSP2_2LinkID;
       pObj->IPCIn_DSP2_IPU1_0_0Prm.inQueParams.prevLinkQueId = 0;

       //IPCIn_DSP2_IPU1_0_0 -> Alg_drawRearview
       pObj->IPCIn_DSP2_IPU1_0_0Prm.outQueParams.nextLink = pObj->Alg_drawRearviewLinkID;
       pObj->Alg_drawRearviewPrm.inQueParams.prevLinkId = pObj->IPCIn_DSP2_IPU1_0_0LinkID;
       pObj->Alg_drawRearviewPrm.inQueParams.prevLinkQueId = 0;

       //Alg_drawRearview -> IPCOut_DSP2_IPU1_0_0
       pObj->Alg_drawRearviewPrm.outQueParams.nextLink = pObj->IPCOut_DSP2_IPU1_0_0LinkID;
       pObj->IPCOut_DSP2_IPU1_0_0Prm.inQueParams.prevLinkId = pObj->Alg_drawRearviewLinkID;
       pObj->IPCOut_DSP2_IPU1_0_0Prm.inQueParams.prevLinkQueId = 0;

       //IPCOut_DSP2_IPU1_0_0 -> IPCIn_IPU1_0_DSP2_1
       pObj->IPCOut_DSP2_IPU1_0_0Prm.outQueParams.nextLink = pObj->IPCIn_IPU1_0_DSP2_1LinkID;
       pObj->IPCIn_IPU1_0_DSP2_1Prm.inQueParams.prevLinkId = pObj->IPCOut_DSP2_IPU1_0_0LinkID;
       pObj->IPCIn_IPU1_0_DSP2_1Prm.inQueParams.prevLinkQueId = 0;

       //IPCIn_IPU1_0_DSP2_1 -> Display_VideoRszB
       pObj->IPCIn_IPU1_0_DSP2_1Prm.outQueParams.nextLink = pObj->Display_VideoRszBLinkID;
       pObj->Display_VideoRszBPrm.inQueParams.prevLinkId = pObj->IPCIn_IPU1_0_DSP2_1LinkID;
       pObj->Display_VideoRszBPrm.inQueParams.prevLinkQueId = 0;

       //Sync_dewarp -> Alg_DeWarp
       pObj->Sync_dewarpPrm.outQueParams.nextLink = pObj->Alg_DeWarpLinkID;
       pObj->Alg_DeWarpPrm.inQueParams.prevLinkId = pObj->Sync_dewarpLinkID;
       pObj->Alg_DeWarpPrm.inQueParams.prevLinkQueId = 0;

       //Alg_DeWarp -> IPCOut_IPU1_0_DSP1_0
       pObj->Alg_DeWarpPrm.outQueParams.nextLink = pObj->IPCOut_IPU1_0_DSP1_0LinkID;
       pObj->IPCOut_IPU1_0_DSP1_0Prm.inQueParams.prevLinkId = pObj->Alg_DeWarpLinkID;
       pObj->IPCOut_IPU1_0_DSP1_0Prm.inQueParams.prevLinkQueId = 0;

       //IPCOut_IPU1_0_DSP1_0 -> IPCIn_DSP1_IPU1_0_0
       pObj->IPCOut_IPU1_0_DSP1_0Prm.outQueParams.nextLink = pObj->IPCIn_DSP1_IPU1_0_0LinkID;
       pObj->IPCIn_DSP1_IPU1_0_0Prm.inQueParams.prevLinkId = pObj->IPCOut_IPU1_0_DSP1_0LinkID;
       pObj->IPCIn_DSP1_IPU1_0_0Prm.inQueParams.prevLinkQueId = 0;

       //IPCIn_DSP1_IPU1_0_0 -> Alg_Synthesis
       pObj->IPCIn_DSP1_IPU1_0_0Prm.outQueParams.nextLink = pObj->Alg_SynthesisLinkID;
       pObj->Alg_SynthesisPrm.inQueParams[0].prevLinkId = pObj->IPCIn_DSP1_IPU1_0_0LinkID;
       pObj->Alg_SynthesisPrm.inQueParams[0].prevLinkQueId = 0;

       //NullSource -> IPCOut_IPU1_0_DSP1_1
       pObj->NullSourcePrm.outQueParams.nextLink = pObj->IPCOut_IPU1_0_DSP1_1LinkID;
       pObj->IPCOut_IPU1_0_DSP1_1Prm.inQueParams.prevLinkId = pObj->NullSourceLinkID;
       pObj->IPCOut_IPU1_0_DSP1_1Prm.inQueParams.prevLinkQueId = 0;

       //IPCOut_IPU1_0_DSP1_1 -> IPCIn_DSP1_IPU1_0_1
       pObj->IPCOut_IPU1_0_DSP1_1Prm.outQueParams.nextLink = pObj->IPCIn_DSP1_IPU1_0_1LinkID;
       pObj->IPCIn_DSP1_IPU1_0_1Prm.inQueParams.prevLinkId = pObj->IPCOut_IPU1_0_DSP1_1LinkID;
       pObj->IPCIn_DSP1_IPU1_0_1Prm.inQueParams.prevLinkQueId = 0;

       //IPCIn_DSP1_IPU1_0_1 -> Alg_Synthesis
       pObj->IPCIn_DSP1_IPU1_0_1Prm.outQueParams.nextLink = pObj->Alg_SynthesisLinkID;
       pObj->Alg_SynthesisPrm.inQueParams[1].prevLinkId = pObj->IPCIn_DSP1_IPU1_0_1LinkID;
       pObj->Alg_SynthesisPrm.inQueParams[1].prevLinkQueId = 0;

       //Alg_Synthesis -> IPCOut_DSP1_IPU1_0_0
       pObj->Alg_SynthesisPrm.outQueParams[0].nextLink = pObj->IPCOut_DSP1_IPU1_0_0LinkID;
       pObj->IPCOut_DSP1_IPU1_0_0Prm.inQueParams.prevLinkId = pObj->Alg_SynthesisLinkID;
       pObj->IPCOut_DSP1_IPU1_0_0Prm.inQueParams.prevLinkQueId = 0;

       //Alg_Synthesis -> Alg_PhotoAlign
       pObj->Alg_SynthesisPrm.outQueParams[1].nextLink = pObj->Alg_PhotoAlignLinkID;
       pObj->Alg_PhotoAlignPrm.inQueParams[0].prevLinkId = pObj->Alg_SynthesisLinkID;
       pObj->Alg_PhotoAlignPrm.inQueParams[0].prevLinkQueId = 1;

       //IPCOut_DSP1_IPU1_0_0 -> IPCIn_IPU1_0_DSP1_0
       pObj->IPCOut_DSP1_IPU1_0_0Prm.outQueParams.nextLink = pObj->IPCIn_IPU1_0_DSP1_0LinkID;
       pObj->IPCIn_IPU1_0_DSP1_0Prm.inQueParams.prevLinkId = pObj->IPCOut_DSP1_IPU1_0_0LinkID;
       pObj->IPCIn_IPU1_0_DSP1_0Prm.inQueParams.prevLinkQueId = 0;

       //IPCIn_IPU1_0_DSP1_0 -> Display_Video
       pObj->IPCIn_IPU1_0_DSP1_0Prm.outQueParams.nextLink = pObj->Display_VideoLinkID;
       pObj->Display_VideoPrm.inQueParams.prevLinkId = pObj->IPCIn_IPU1_0_DSP1_0LinkID;
       pObj->Display_VideoPrm.inQueParams.prevLinkQueId = 0;

       //Alg_PhotoAlign -> Alg_Synthesis
       pObj->Alg_PhotoAlignPrm.outQueParams[0].nextLink = pObj->Alg_SynthesisLinkID;
       pObj->Alg_SynthesisPrm.inQueParams[2].prevLinkId = pObj->Alg_PhotoAlignLinkID;
       pObj->Alg_SynthesisPrm.inQueParams[2].prevLinkQueId = 0;

}

Int32 chains_issMultCaptIspDeWarpRearView3dSv_Create(chains_issMultCaptIspDeWarpRearView3dSvObj *pObj, Void *appObj){

       Int32 status;

       chains_issMultCaptIspDeWarpRearView3dSv_SetLinkId(pObj);
       chains_issMultCaptIspDeWarpRearView3dSv_ResetLinkPrms(pObj);

       chains_issMultCaptIspDeWarpRearView3dSv_SetPrms(pObj);
       chains_issMultCaptIspDeWarpRearView3dSv_SetAppPrms(pObj, appObj);

       chains_issMultCaptIspDeWarpRearView3dSv_ConnectLinks(pObj);
       status = System_linkCreate(pObj->IssCaptureLinkID, &pObj->IssCapturePrm, sizeof(pObj->IssCapturePrm));
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkCreate(pObj->IssM2mIspLinkID, &pObj->IssM2mIspPrm, sizeof(pObj->IssM2mIspPrm));
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkCreate(pObj->Alg_IssAewbLinkID, &pObj->Alg_IssAewbPrm, sizeof(pObj->Alg_IssAewbPrm));
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkCreate(pObj->DupLinkID, &pObj->DupPrm, sizeof(pObj->DupPrm));
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkCreate(pObj->SelectLinkID, &pObj->SelectPrm, sizeof(pObj->SelectPrm));
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkCreate(pObj->IssM2mSimcopLinkID, &pObj->IssM2mSimcopPrm, sizeof(pObj->IssM2mSimcopPrm));
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkCreate(pObj->IssM2mResizerLinkID, &pObj->IssM2mResizerPrm, sizeof(pObj->IssM2mResizerPrm));
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkCreate(pObj->IPCOut_IPU1_0_DSP2_2LinkID, &pObj->IPCOut_IPU1_0_DSP2_2Prm, sizeof(pObj->IPCOut_IPU1_0_DSP2_2Prm));
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkCreate(pObj->IPCIn_DSP2_IPU1_0_0LinkID, &pObj->IPCIn_DSP2_IPU1_0_0Prm, sizeof(pObj->IPCIn_DSP2_IPU1_0_0Prm));
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkCreate(pObj->Alg_drawRearviewLinkID, &pObj->Alg_drawRearviewPrm, sizeof(pObj->Alg_drawRearviewPrm));
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkCreate(pObj->IPCOut_DSP2_IPU1_0_0LinkID, &pObj->IPCOut_DSP2_IPU1_0_0Prm, sizeof(pObj->IPCOut_DSP2_IPU1_0_0Prm));
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkCreate(pObj->IPCIn_IPU1_0_DSP2_1LinkID, &pObj->IPCIn_IPU1_0_DSP2_1Prm, sizeof(pObj->IPCIn_IPU1_0_DSP2_1Prm));
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkCreate(pObj->Display_VideoRszBLinkID, &pObj->Display_VideoRszBPrm, sizeof(pObj->Display_VideoRszBPrm));
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkCreate(pObj->Sync_dewarpLinkID, &pObj->Sync_dewarpPrm, sizeof(pObj->Sync_dewarpPrm));
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkCreate(pObj->Alg_DeWarpLinkID, &pObj->Alg_DeWarpPrm, sizeof(pObj->Alg_DeWarpPrm));
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkCreate(pObj->IPCOut_IPU1_0_DSP1_0LinkID, &pObj->IPCOut_IPU1_0_DSP1_0Prm, sizeof(pObj->IPCOut_IPU1_0_DSP1_0Prm));
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkCreate(pObj->IPCIn_DSP1_IPU1_0_0LinkID, &pObj->IPCIn_DSP1_IPU1_0_0Prm, sizeof(pObj->IPCIn_DSP1_IPU1_0_0Prm));
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkCreate(pObj->NullSourceLinkID, &pObj->NullSourcePrm, sizeof(pObj->NullSourcePrm));
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkCreate(pObj->IPCOut_IPU1_0_DSP1_1LinkID, &pObj->IPCOut_IPU1_0_DSP1_1Prm, sizeof(pObj->IPCOut_IPU1_0_DSP1_1Prm));
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkCreate(pObj->IPCIn_DSP1_IPU1_0_1LinkID, &pObj->IPCIn_DSP1_IPU1_0_1Prm, sizeof(pObj->IPCIn_DSP1_IPU1_0_1Prm));
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkCreate(pObj->Alg_SynthesisLinkID, &pObj->Alg_SynthesisPrm, sizeof(pObj->Alg_SynthesisPrm));
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkCreate(pObj->IPCOut_DSP1_IPU1_0_0LinkID, &pObj->IPCOut_DSP1_IPU1_0_0Prm, sizeof(pObj->IPCOut_DSP1_IPU1_0_0Prm));
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkCreate(pObj->IPCIn_IPU1_0_DSP1_0LinkID, &pObj->IPCIn_IPU1_0_DSP1_0Prm, sizeof(pObj->IPCIn_IPU1_0_DSP1_0Prm));
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkCreate(pObj->Display_VideoLinkID, &pObj->Display_VideoPrm, sizeof(pObj->Display_VideoPrm));
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkCreate(pObj->Alg_PhotoAlignLinkID, &pObj->Alg_PhotoAlignPrm, sizeof(pObj->Alg_PhotoAlignPrm));
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       return status;
}

Int32 chains_issMultCaptIspDeWarpRearView3dSv_Start(chains_issMultCaptIspDeWarpRearView3dSvObj *pObj){

       Int32 status;

       status = System_linkStart(pObj->Alg_PhotoAlignLinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkStart(pObj->Display_VideoLinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkStart(pObj->IPCIn_IPU1_0_DSP1_0LinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkStart(pObj->IPCOut_DSP1_IPU1_0_0LinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkStart(pObj->Alg_SynthesisLinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkStart(pObj->IPCIn_DSP1_IPU1_0_1LinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkStart(pObj->IPCOut_IPU1_0_DSP1_1LinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkStart(pObj->NullSourceLinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkStart(pObj->IPCIn_DSP1_IPU1_0_0LinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkStart(pObj->IPCOut_IPU1_0_DSP1_0LinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkStart(pObj->Alg_DeWarpLinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkStart(pObj->Sync_dewarpLinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkStart(pObj->Display_VideoRszBLinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkStart(pObj->IPCIn_IPU1_0_DSP2_1LinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkStart(pObj->IPCOut_DSP2_IPU1_0_0LinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkStart(pObj->Alg_drawRearviewLinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkStart(pObj->IPCIn_DSP2_IPU1_0_0LinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkStart(pObj->IPCOut_IPU1_0_DSP2_2LinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkStart(pObj->IssM2mResizerLinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkStart(pObj->IssM2mSimcopLinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkStart(pObj->SelectLinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkStart(pObj->DupLinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkStart(pObj->Alg_IssAewbLinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkStart(pObj->IssM2mIspLinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkStart(pObj->IssCaptureLinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       return status;
}

Int32 chains_issMultCaptIspDeWarpRearView3dSv_Stop(chains_issMultCaptIspDeWarpRearView3dSvObj *pObj){

       Int32 status;

       status = System_linkStop(pObj->Alg_PhotoAlignLinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkStop(pObj->Display_VideoLinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkStop(pObj->IPCIn_IPU1_0_DSP1_0LinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkStop(pObj->IPCOut_DSP1_IPU1_0_0LinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkStop(pObj->Alg_SynthesisLinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkStop(pObj->IPCIn_DSP1_IPU1_0_1LinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkStop(pObj->IPCOut_IPU1_0_DSP1_1LinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkStop(pObj->NullSourceLinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkStop(pObj->IPCIn_DSP1_IPU1_0_0LinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkStop(pObj->IPCOut_IPU1_0_DSP1_0LinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkStop(pObj->Alg_DeWarpLinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkStop(pObj->Sync_dewarpLinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkStop(pObj->Display_VideoRszBLinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkStop(pObj->IPCIn_IPU1_0_DSP2_1LinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkStop(pObj->IPCOut_DSP2_IPU1_0_0LinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkStop(pObj->Alg_drawRearviewLinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkStop(pObj->IPCIn_DSP2_IPU1_0_0LinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkStop(pObj->IPCOut_IPU1_0_DSP2_2LinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkStop(pObj->IssM2mResizerLinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkStop(pObj->IssM2mSimcopLinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkStop(pObj->SelectLinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkStop(pObj->DupLinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkStop(pObj->Alg_IssAewbLinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkStop(pObj->IssM2mIspLinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkStop(pObj->IssCaptureLinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       return status;
}

Int32 chains_issMultCaptIspDeWarpRearView3dSv_Delete(chains_issMultCaptIspDeWarpRearView3dSvObj *pObj){

       Int32 status;

       status = System_linkDelete(pObj->Alg_PhotoAlignLinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkDelete(pObj->Display_VideoLinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkDelete(pObj->IPCIn_IPU1_0_DSP1_0LinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkDelete(pObj->IPCOut_DSP1_IPU1_0_0LinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkDelete(pObj->Alg_SynthesisLinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkDelete(pObj->IPCIn_DSP1_IPU1_0_1LinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkDelete(pObj->IPCOut_IPU1_0_DSP1_1LinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkDelete(pObj->NullSourceLinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkDelete(pObj->IPCIn_DSP1_IPU1_0_0LinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkDelete(pObj->IPCOut_IPU1_0_DSP1_0LinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkDelete(pObj->Alg_DeWarpLinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkDelete(pObj->Sync_dewarpLinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkDelete(pObj->Display_VideoRszBLinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkDelete(pObj->IPCIn_IPU1_0_DSP2_1LinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkDelete(pObj->IPCOut_DSP2_IPU1_0_0LinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkDelete(pObj->Alg_drawRearviewLinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkDelete(pObj->IPCIn_DSP2_IPU1_0_0LinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkDelete(pObj->IPCOut_IPU1_0_DSP2_2LinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkDelete(pObj->IssM2mResizerLinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkDelete(pObj->IssM2mSimcopLinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkDelete(pObj->SelectLinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkDelete(pObj->DupLinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkDelete(pObj->Alg_IssAewbLinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkDelete(pObj->IssM2mIspLinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkDelete(pObj->IssCaptureLinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       return status;
}

Void chains_issMultCaptIspDeWarpRearView3dSv_printBufferStatistics(chains_issMultCaptIspDeWarpRearView3dSvObj *pObj){
       System_linkPrintBufferStatistics(pObj->IssCaptureLinkID);
       System_linkPrintBufferStatistics(pObj->IssM2mIspLinkID);
       System_linkPrintBufferStatistics(pObj->Alg_IssAewbLinkID);
       System_linkPrintBufferStatistics(pObj->DupLinkID);
       System_linkPrintBufferStatistics(pObj->SelectLinkID);
       System_linkPrintBufferStatistics(pObj->IssM2mSimcopLinkID);
       System_linkPrintBufferStatistics(pObj->IssM2mResizerLinkID);
       System_linkPrintBufferStatistics(pObj->IPCOut_IPU1_0_DSP2_2LinkID);
       Task_sleep(500);
       System_linkPrintBufferStatistics(pObj->IPCIn_DSP2_IPU1_0_0LinkID);
       System_linkPrintBufferStatistics(pObj->Alg_drawRearviewLinkID);
       System_linkPrintBufferStatistics(pObj->IPCOut_DSP2_IPU1_0_0LinkID);
       Task_sleep(500);
       System_linkPrintBufferStatistics(pObj->IPCIn_IPU1_0_DSP2_1LinkID);
       System_linkPrintBufferStatistics(pObj->Display_VideoRszBLinkID);
       System_linkPrintBufferStatistics(pObj->Sync_dewarpLinkID);
       System_linkPrintBufferStatistics(pObj->Alg_DeWarpLinkID);
       System_linkPrintBufferStatistics(pObj->IPCOut_IPU1_0_DSP1_0LinkID);
       Task_sleep(500);
       System_linkPrintBufferStatistics(pObj->IPCIn_DSP1_IPU1_0_0LinkID);
       Task_sleep(500);
       System_linkPrintBufferStatistics(pObj->NullSourceLinkID);
       System_linkPrintBufferStatistics(pObj->IPCOut_IPU1_0_DSP1_1LinkID);
       Task_sleep(500);
       System_linkPrintBufferStatistics(pObj->IPCIn_DSP1_IPU1_0_1LinkID);
       System_linkPrintBufferStatistics(pObj->Alg_SynthesisLinkID);
       System_linkPrintBufferStatistics(pObj->IPCOut_DSP1_IPU1_0_0LinkID);
       Task_sleep(500);
       System_linkPrintBufferStatistics(pObj->IPCIn_IPU1_0_DSP1_0LinkID);
       System_linkPrintBufferStatistics(pObj->Display_VideoLinkID);
       Task_sleep(500);
       System_linkPrintBufferStatistics(pObj->Alg_PhotoAlignLinkID);
       Task_sleep(500);
}

Void chains_issMultCaptIspDeWarpRearView3dSv_printStatistics(chains_issMultCaptIspDeWarpRearView3dSvObj *pObj){
       System_linkPrintStatistics(pObj->IssCaptureLinkID);
       System_linkPrintStatistics(pObj->IssM2mIspLinkID);
       System_linkPrintStatistics(pObj->Alg_IssAewbLinkID);
       System_linkPrintStatistics(pObj->DupLinkID);
       System_linkPrintStatistics(pObj->SelectLinkID);
       System_linkPrintStatistics(pObj->IssM2mSimcopLinkID);
       System_linkPrintStatistics(pObj->IssM2mResizerLinkID);
       System_linkPrintStatistics(pObj->IPCOut_IPU1_0_DSP2_2LinkID);
       Task_sleep(500);
       System_linkPrintStatistics(pObj->IPCIn_DSP2_IPU1_0_0LinkID);
       System_linkPrintStatistics(pObj->Alg_drawRearviewLinkID);
       System_linkPrintStatistics(pObj->IPCOut_DSP2_IPU1_0_0LinkID);
       Task_sleep(500);
       System_linkPrintStatistics(pObj->IPCIn_IPU1_0_DSP2_1LinkID);
       System_linkPrintStatistics(pObj->Display_VideoRszBLinkID);
       System_linkPrintStatistics(pObj->Sync_dewarpLinkID);
       System_linkPrintStatistics(pObj->Alg_DeWarpLinkID);
       System_linkPrintStatistics(pObj->IPCOut_IPU1_0_DSP1_0LinkID);
       Task_sleep(500);
       System_linkPrintStatistics(pObj->IPCIn_DSP1_IPU1_0_0LinkID);
       Task_sleep(500);
       System_linkPrintStatistics(pObj->NullSourceLinkID);
       System_linkPrintStatistics(pObj->IPCOut_IPU1_0_DSP1_1LinkID);
       Task_sleep(500);
       System_linkPrintStatistics(pObj->IPCIn_DSP1_IPU1_0_1LinkID);
       System_linkPrintStatistics(pObj->Alg_SynthesisLinkID);
       System_linkPrintStatistics(pObj->IPCOut_DSP1_IPU1_0_0LinkID);
       Task_sleep(500);
       System_linkPrintStatistics(pObj->IPCIn_IPU1_0_DSP1_0LinkID);
       System_linkPrintStatistics(pObj->Display_VideoLinkID);
       Task_sleep(500);
       System_linkPrintStatistics(pObj->Alg_PhotoAlignLinkID);
       Task_sleep(500);
}

