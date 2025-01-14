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
#include "chains_fastBoot_issIspSimcop_pd_Display_priv.h"
Void chains_fastBoot_issIspSimcop_pd_Display_SetLinkId(chains_fastBoot_issIspSimcop_pd_DisplayObj *pObj){
       pObj->IssCaptureLinkID               = SYSTEM_LINK_ID_ISSCAPTURE_0;
       pObj->IssM2mIspLinkID                = SYSTEM_LINK_ID_ISSM2MISP_0;
       pObj->Alg_IssAewbLinkID              = IPU1_0_LINK (SYSTEM_LINK_ID_ALG_0);
       pObj->IssM2mSimcopLinkID             = SYSTEM_LINK_ID_ISSM2MSIMCOP_0;
       pObj->IssM2mRszLinkID                = SYSTEM_LINK_ID_ISS_RESIZER_0;
       pObj->Dup_captureLinkID              = IPU1_0_LINK (SYSTEM_LINK_ID_DUP_0);
       pObj->Gate_algFeatureComputeLinkID   = IPU1_0_LINK (SYSTEM_LINK_ID_GATE_2);
       pObj->IPCOut_IPU1_0_EVE1_0LinkID     = IPU1_0_LINK (SYSTEM_LINK_ID_IPC_OUT_0);
       pObj->IPCIn_EVE1_IPU1_0_0LinkID      = EVE1_LINK (SYSTEM_LINK_ID_IPC_IN_0);
       pObj->Alg_FeaturePlaneComputationLinkID = EVE1_LINK (SYSTEM_LINK_ID_ALG_0);
       pObj->IPCOut_EVE1_DSP1_0LinkID       = EVE1_LINK (SYSTEM_LINK_ID_IPC_OUT_0);
       pObj->IPCIn_DSP1_EVE1_0LinkID        = DSP1_LINK (SYSTEM_LINK_ID_IPC_IN_0);
       pObj->Alg_ObjectDetectionLinkID      = DSP1_LINK (SYSTEM_LINK_ID_ALG_0);
       pObj->IPCOut_DSP1_IPU1_0_0LinkID     = DSP1_LINK (SYSTEM_LINK_ID_IPC_OUT_0);
       pObj->IPCIn_IPU1_0_DSP1_0LinkID      = IPU1_0_LINK (SYSTEM_LINK_ID_IPC_IN_0);
       pObj->Gate_algCaptureLinkID          = IPU1_0_LINK (SYSTEM_LINK_ID_GATE_0);
       pObj->Merge_algLinkID                = IPU1_0_LINK (SYSTEM_LINK_ID_MERGE_1);
       pObj->Sync_algLinkID                 = IPU1_0_LINK (SYSTEM_LINK_ID_SYNC_0);
       pObj->Alg_ObjectDrawLinkID           = IPU1_0_LINK (SYSTEM_LINK_ID_ALG_1);
       pObj->Gate_algDrawLinkID             = IPU1_0_LINK (SYSTEM_LINK_ID_GATE_1);
       pObj->Merge_displayLinkID            = IPU1_0_LINK (SYSTEM_LINK_ID_MERGE_0);
       pObj->Display_VideoLinkID            = SYSTEM_LINK_ID_DISPLAY_0;
       pObj->GrpxSrcLinkID                  = IPU1_0_LINK (SYSTEM_LINK_ID_GRPX_SRC_0);
       pObj->Display_GrpxLinkID             = SYSTEM_LINK_ID_DISPLAY_1;
}

Void chains_fastBoot_issIspSimcop_pd_Display_ResetLinkPrms(chains_fastBoot_issIspSimcop_pd_DisplayObj *pObj){
       IssCaptureLink_CreateParams_Init(&pObj->IssCapturePrm);
       IssM2mIspLink_CreateParams_Init(&pObj->IssM2mIspPrm);
       AlgorithmLink_IssAewb_Init(&pObj->Alg_IssAewbPrm);
       IssM2mSimcopLink_CreateParams_Init(&pObj->IssM2mSimcopPrm);
       IssRszLink_CreateParams_Init(&pObj->IssM2mRszPrm);
       DupLink_CreateParams_Init(&pObj->Dup_capturePrm);
       GateLink_CreateParams_Init(&pObj->Gate_algFeatureComputePrm);
       IpcLink_CreateParams_Init(&pObj->IPCOut_IPU1_0_EVE1_0Prm);
       IpcLink_CreateParams_Init(&pObj->IPCIn_EVE1_IPU1_0_0Prm);
       AlgorithmLink_FeatureComputation_Init(&pObj->Alg_FeaturePlaneComputationPrm);
       IpcLink_CreateParams_Init(&pObj->IPCOut_EVE1_DSP1_0Prm);
       IpcLink_CreateParams_Init(&pObj->IPCIn_DSP1_EVE1_0Prm);
       AlgorithmLink_ObjectDetection_Init(&pObj->Alg_ObjectDetectionPrm);
       IpcLink_CreateParams_Init(&pObj->IPCOut_DSP1_IPU1_0_0Prm);
       IpcLink_CreateParams_Init(&pObj->IPCIn_IPU1_0_DSP1_0Prm);
       GateLink_CreateParams_Init(&pObj->Gate_algCapturePrm);
       MergeLink_CreateParams_Init(&pObj->Merge_algPrm);
       SyncLink_CreateParams_Init(&pObj->Sync_algPrm);
       AlgorithmLink_ObjectDraw_Init(&pObj->Alg_ObjectDrawPrm);
       GateLink_CreateParams_Init(&pObj->Gate_algDrawPrm);
       MergeLink_CreateParams_Init(&pObj->Merge_displayPrm);
       DisplayLink_CreateParams_Init(&pObj->Display_VideoPrm);
       GrpxSrcLink_CreateParams_Init(&pObj->GrpxSrcPrm);
       DisplayLink_CreateParams_Init(&pObj->Display_GrpxPrm);
}

Void chains_fastBoot_issIspSimcop_pd_Display_SetPrms(chains_fastBoot_issIspSimcop_pd_DisplayObj *pObj){
       (pObj->Alg_IssAewbPrm).baseClassCreate.size  = sizeof(AlgorithmLink_IssAewbCreateParams);
       (pObj->Alg_IssAewbPrm).baseClassCreate.algId  = ALGORITHM_LINK_IPU_ALG_ISS_AEWB1;
       (pObj->Dup_capturePrm).numOutQue = 3;
       (pObj->Alg_FeaturePlaneComputationPrm).baseClassCreate.size  = sizeof(AlgorithmLink_FeaturePlaneComputationCreateParams);
       (pObj->Alg_FeaturePlaneComputationPrm).baseClassCreate.algId  = ALGORITHM_LINK_EVE_ALG_FEATUREPLANECOMPUTE;
       (pObj->Alg_ObjectDetectionPrm).baseClassCreate.size  = sizeof(AlgorithmLink_ObjectDetectionCreateParams);
       (pObj->Alg_ObjectDetectionPrm).baseClassCreate.algId  = ALGORITHM_LINK_DSP_ALG_OBJECTDETECTION;
       (pObj->Merge_algPrm).numInQue = 2;
       (pObj->Alg_ObjectDrawPrm).baseClassCreate.size  = sizeof(AlgorithmLink_ObjectDrawCreateParams);
       (pObj->Alg_ObjectDrawPrm).baseClassCreate.algId  = ALGORITHM_LINK_IPU_ALG_OBJECT_DRAW;
       (pObj->Merge_displayPrm).numInQue = 2;
       (pObj->IssM2mSimcopPrm).numInQue = 1U;
}

Void chains_fastBoot_issIspSimcop_pd_Display_ConnectLinks(chains_fastBoot_issIspSimcop_pd_DisplayObj *pObj){

       //IssCapture -> IssM2mIsp
       pObj->IssCapturePrm.outQueParams.nextLink = pObj->IssM2mIspLinkID;
       pObj->IssM2mIspPrm.inQueParams[0].prevLinkId = pObj->IssCaptureLinkID;
       pObj->IssM2mIspPrm.inQueParams[0].prevLinkQueId = 0;

       //IssM2mIsp -> IssM2mSimcop
       pObj->IssM2mIspPrm.outQueParams[0].nextLink = pObj->IssM2mSimcopLinkID;
       pObj->IssM2mSimcopPrm.inQueParams[0].prevLinkId = pObj->IssM2mIspLinkID;
       pObj->IssM2mSimcopPrm.inQueParams[0].prevLinkQueId = 0;

       //IssM2mIsp -> Alg_IssAewb
       pObj->IssM2mIspPrm.outQueParams[1].nextLink = pObj->Alg_IssAewbLinkID;
       pObj->Alg_IssAewbPrm.inQueParams.prevLinkId = pObj->IssM2mIspLinkID;
       pObj->Alg_IssAewbPrm.inQueParams.prevLinkQueId = 1;

       //IssM2mSimcop -> ISS M2M Resizer
       pObj->IssM2mSimcopPrm.outQueParams.nextLink = pObj->IssM2mRszLinkID;
       pObj->IssM2mRszPrm.inQueParams.prevLinkId = pObj->IssM2mSimcopLinkID;
       pObj->IssM2mRszPrm.inQueParams.prevLinkQueId = 0;

       //IssM2mRsz -> Dup_capture
       pObj->IssM2mRszPrm.outQueParams[0].nextLink = pObj->Dup_captureLinkID;
       pObj->Dup_capturePrm.inQueParams.prevLinkId = pObj->IssM2mRszLinkID;
       pObj->Dup_capturePrm.inQueParams.prevLinkQueId = 0;

       //Dup_capture -> Merge_display
       pObj->Dup_capturePrm.outQueParams[0].nextLink = pObj->Merge_displayLinkID;
       pObj->Merge_displayPrm.inQueParams[0].prevLinkId = pObj->Dup_captureLinkID;
       pObj->Merge_displayPrm.inQueParams[0].prevLinkQueId = 0;

       //Dup_capture -> Gate_algCapture
       pObj->Dup_capturePrm.outQueParams[1].nextLink = pObj->Gate_algCaptureLinkID;
       pObj->Gate_algCapturePrm.inQueParams.prevLinkId = pObj->Dup_captureLinkID;
       pObj->Gate_algCapturePrm.inQueParams.prevLinkQueId = 1;

       //Dup_capture -> Gate_algFeatureCompute
       pObj->Dup_capturePrm.outQueParams[2].nextLink = pObj->Gate_algFeatureComputeLinkID;
       pObj->Gate_algFeatureComputePrm.inQueParams.prevLinkId = pObj->Dup_captureLinkID;
       pObj->Gate_algFeatureComputePrm.inQueParams.prevLinkQueId = 2;

       //Gate_algFeatureCompute -> IPCOut_IPU1_0_EVE1_0
       pObj->Gate_algFeatureComputePrm.outQueParams.nextLink = pObj->IPCOut_IPU1_0_EVE1_0LinkID;
       pObj->IPCOut_IPU1_0_EVE1_0Prm.inQueParams.prevLinkId = pObj->Gate_algFeatureComputeLinkID;
       pObj->IPCOut_IPU1_0_EVE1_0Prm.inQueParams.prevLinkQueId = 0;

       //IPCOut_IPU1_0_EVE1_0 -> IPCIn_EVE1_IPU1_0_0
       pObj->IPCOut_IPU1_0_EVE1_0Prm.outQueParams.nextLink = pObj->IPCIn_EVE1_IPU1_0_0LinkID;
       pObj->IPCIn_EVE1_IPU1_0_0Prm.inQueParams.prevLinkId = pObj->IPCOut_IPU1_0_EVE1_0LinkID;
       pObj->IPCIn_EVE1_IPU1_0_0Prm.inQueParams.prevLinkQueId = 0;

       //IPCIn_EVE1_IPU1_0_0 -> Alg_FeaturePlaneComputation
       pObj->IPCIn_EVE1_IPU1_0_0Prm.outQueParams.nextLink = pObj->Alg_FeaturePlaneComputationLinkID;
       pObj->Alg_FeaturePlaneComputationPrm.inQueParams.prevLinkId = pObj->IPCIn_EVE1_IPU1_0_0LinkID;
       pObj->Alg_FeaturePlaneComputationPrm.inQueParams.prevLinkQueId = 0;

       //Alg_FeaturePlaneComputation -> IPCOut_EVE1_DSP1_0
       pObj->Alg_FeaturePlaneComputationPrm.outQueParams.nextLink = pObj->IPCOut_EVE1_DSP1_0LinkID;
       pObj->IPCOut_EVE1_DSP1_0Prm.inQueParams.prevLinkId = pObj->Alg_FeaturePlaneComputationLinkID;
       pObj->IPCOut_EVE1_DSP1_0Prm.inQueParams.prevLinkQueId = 0;

       //IPCOut_EVE1_DSP1_0 -> IPCIn_DSP1_EVE1_0
       pObj->IPCOut_EVE1_DSP1_0Prm.outQueParams.nextLink = pObj->IPCIn_DSP1_EVE1_0LinkID;
       pObj->IPCIn_DSP1_EVE1_0Prm.inQueParams.prevLinkId = pObj->IPCOut_EVE1_DSP1_0LinkID;
       pObj->IPCIn_DSP1_EVE1_0Prm.inQueParams.prevLinkQueId = 0;

       //IPCIn_DSP1_EVE1_0 -> Alg_ObjectDetection
       pObj->IPCIn_DSP1_EVE1_0Prm.outQueParams.nextLink = pObj->Alg_ObjectDetectionLinkID;
       pObj->Alg_ObjectDetectionPrm.inQueParams.prevLinkId = pObj->IPCIn_DSP1_EVE1_0LinkID;
       pObj->Alg_ObjectDetectionPrm.inQueParams.prevLinkQueId = 0;

       //Alg_ObjectDetection -> IPCOut_DSP1_IPU1_0_0
       pObj->Alg_ObjectDetectionPrm.outQueParams.nextLink = pObj->IPCOut_DSP1_IPU1_0_0LinkID;
       pObj->IPCOut_DSP1_IPU1_0_0Prm.inQueParams.prevLinkId = pObj->Alg_ObjectDetectionLinkID;
       pObj->IPCOut_DSP1_IPU1_0_0Prm.inQueParams.prevLinkQueId = 0;

       //IPCOut_DSP1_IPU1_0_0 -> IPCIn_IPU1_0_DSP1_0
       pObj->IPCOut_DSP1_IPU1_0_0Prm.outQueParams.nextLink = pObj->IPCIn_IPU1_0_DSP1_0LinkID;
       pObj->IPCIn_IPU1_0_DSP1_0Prm.inQueParams.prevLinkId = pObj->IPCOut_DSP1_IPU1_0_0LinkID;
       pObj->IPCIn_IPU1_0_DSP1_0Prm.inQueParams.prevLinkQueId = 0;

       //IPCIn_IPU1_0_DSP1_0 -> Merge_alg
       pObj->IPCIn_IPU1_0_DSP1_0Prm.outQueParams.nextLink = pObj->Merge_algLinkID;
       pObj->Merge_algPrm.inQueParams[1].prevLinkId = pObj->IPCIn_IPU1_0_DSP1_0LinkID;
       pObj->Merge_algPrm.inQueParams[1].prevLinkQueId = 0;

       //Gate_algCapture -> Merge_alg
       pObj->Gate_algCapturePrm.outQueParams.nextLink = pObj->Merge_algLinkID;
       pObj->Merge_algPrm.inQueParams[0].prevLinkId = pObj->Gate_algCaptureLinkID;
       pObj->Merge_algPrm.inQueParams[0].prevLinkQueId = 0;

       //Merge_alg -> Sync_alg
       pObj->Merge_algPrm.outQueParams.nextLink = pObj->Sync_algLinkID;
       pObj->Sync_algPrm.inQueParams.prevLinkId = pObj->Merge_algLinkID;
       pObj->Sync_algPrm.inQueParams.prevLinkQueId = 0;

       //Sync_alg -> Alg_ObjectDraw
       pObj->Sync_algPrm.outQueParams.nextLink = pObj->Alg_ObjectDrawLinkID;
       pObj->Alg_ObjectDrawPrm.inQueParams.prevLinkId = pObj->Sync_algLinkID;
       pObj->Alg_ObjectDrawPrm.inQueParams.prevLinkQueId = 0;

       //Alg_ObjectDraw -> Gate_algDraw
       pObj->Alg_ObjectDrawPrm.outQueParams.nextLink = pObj->Gate_algDrawLinkID;
       pObj->Gate_algDrawPrm.inQueParams.prevLinkId = pObj->Alg_ObjectDrawLinkID;
       pObj->Gate_algDrawPrm.inQueParams.prevLinkQueId = 0;

       //Gate_algDraw -> Merge_display
       pObj->Gate_algDrawPrm.outQueParams.nextLink = pObj->Merge_displayLinkID;
       pObj->Merge_displayPrm.inQueParams[1].prevLinkId = pObj->Gate_algDrawLinkID;
       pObj->Merge_displayPrm.inQueParams[1].prevLinkQueId = 0;

       //Merge_display -> Display_Video
       pObj->Merge_displayPrm.outQueParams.nextLink = pObj->Display_VideoLinkID;
       pObj->Display_VideoPrm.inQueParams.prevLinkId = pObj->Merge_displayLinkID;
       pObj->Display_VideoPrm.inQueParams.prevLinkQueId = 0;

       //GrpxSrc -> Display_Grpx
       pObj->GrpxSrcPrm.outQueParams.nextLink = pObj->Display_GrpxLinkID;
       pObj->Display_GrpxPrm.inQueParams.prevLinkId = pObj->GrpxSrcLinkID;
       pObj->Display_GrpxPrm.inQueParams.prevLinkQueId = 0;

}

Int32 chains_fastBoot_issIspSimcop_pd_Display_Create_UcEarly(chains_fastBoot_issIspSimcop_pd_DisplayObj *pObj, Void *appObj){

       Int32 status;

       chains_fastBoot_issIspSimcop_pd_Display_SetLinkId(pObj);
       chains_fastBoot_issIspSimcop_pd_Display_ResetLinkPrms(pObj);

       chains_fastBoot_issIspSimcop_pd_Display_SetPrms(pObj);
       chains_fastBoot_issIspSimcop_pd_Display_SetAppPrms(pObj, appObj);

       chains_fastBoot_issIspSimcop_pd_Display_ConnectLinks(pObj);
       status = System_linkCreate(pObj->IssCaptureLinkID, &pObj->IssCapturePrm, sizeof(pObj->IssCapturePrm));
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkCreate(pObj->IssM2mIspLinkID, &pObj->IssM2mIspPrm, sizeof(pObj->IssM2mIspPrm));
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkCreate(pObj->Alg_IssAewbLinkID, &pObj->Alg_IssAewbPrm, sizeof(pObj->Alg_IssAewbPrm));
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkCreate(pObj->IssM2mSimcopLinkID, &pObj->IssM2mSimcopPrm, sizeof(pObj->IssM2mSimcopPrm));
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkCreate(pObj->IssM2mRszLinkID, &pObj->IssM2mRszPrm, sizeof(pObj->IssM2mRszPrm));
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkCreate(pObj->Dup_captureLinkID, &pObj->Dup_capturePrm, sizeof(pObj->Dup_capturePrm));
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkCreate(pObj->Gate_algFeatureComputeLinkID, &pObj->Gate_algFeatureComputePrm, sizeof(pObj->Gate_algFeatureComputePrm));
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkCreate(pObj->Gate_algCaptureLinkID, &pObj->Gate_algCapturePrm, sizeof(pObj->Gate_algCapturePrm));
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkCreate(pObj->Gate_algDrawLinkID, &pObj->Gate_algDrawPrm, sizeof(pObj->Gate_algDrawPrm));
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkCreate(pObj->Merge_displayLinkID, &pObj->Merge_displayPrm, sizeof(pObj->Merge_displayPrm));
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkCreate(pObj->Display_VideoLinkID, &pObj->Display_VideoPrm, sizeof(pObj->Display_VideoPrm));
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);


       return status;
}

Int32 chains_fastBoot_issIspSimcop_pd_Display_Create_UcLate(chains_fastBoot_issIspSimcop_pd_DisplayObj *pObj, Void *appObj){

       Int32 status;

       status = System_linkCreate(pObj->IPCOut_IPU1_0_EVE1_0LinkID, &pObj->IPCOut_IPU1_0_EVE1_0Prm, sizeof(pObj->IPCOut_IPU1_0_EVE1_0Prm));
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkCreate(pObj->IPCIn_EVE1_IPU1_0_0LinkID, &pObj->IPCIn_EVE1_IPU1_0_0Prm, sizeof(pObj->IPCIn_EVE1_IPU1_0_0Prm));
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkCreate(pObj->Alg_FeaturePlaneComputationLinkID, &pObj->Alg_FeaturePlaneComputationPrm, sizeof(pObj->Alg_FeaturePlaneComputationPrm));
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkCreate(pObj->IPCOut_EVE1_DSP1_0LinkID, &pObj->IPCOut_EVE1_DSP1_0Prm, sizeof(pObj->IPCOut_EVE1_DSP1_0Prm));
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkCreate(pObj->IPCIn_DSP1_EVE1_0LinkID, &pObj->IPCIn_DSP1_EVE1_0Prm, sizeof(pObj->IPCIn_DSP1_EVE1_0Prm));
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkCreate(pObj->Alg_ObjectDetectionLinkID, &pObj->Alg_ObjectDetectionPrm, sizeof(pObj->Alg_ObjectDetectionPrm));
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkCreate(pObj->IPCOut_DSP1_IPU1_0_0LinkID, &pObj->IPCOut_DSP1_IPU1_0_0Prm, sizeof(pObj->IPCOut_DSP1_IPU1_0_0Prm));
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkCreate(pObj->IPCIn_IPU1_0_DSP1_0LinkID, &pObj->IPCIn_IPU1_0_DSP1_0Prm, sizeof(pObj->IPCIn_IPU1_0_DSP1_0Prm));
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkCreate(pObj->Merge_algLinkID, &pObj->Merge_algPrm, sizeof(pObj->Merge_algPrm));
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkCreate(pObj->Sync_algLinkID, &pObj->Sync_algPrm, sizeof(pObj->Sync_algPrm));
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkCreate(pObj->Alg_ObjectDrawLinkID, &pObj->Alg_ObjectDrawPrm, sizeof(pObj->Alg_ObjectDrawPrm));
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       return status;
}
Int32 chains_fastBoot_issIspSimcop_pd_Display_Delete_UcLate(chains_fastBoot_issIspSimcop_pd_DisplayObj *pObj)
{
       Int32 status;

       status = System_linkDelete(pObj->Alg_ObjectDrawLinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkDelete(pObj->Sync_algLinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkDelete(pObj->Merge_algLinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkDelete(pObj->IPCIn_IPU1_0_DSP1_0LinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkDelete(pObj->IPCOut_DSP1_IPU1_0_0LinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkDelete(pObj->Alg_ObjectDetectionLinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkDelete(pObj->IPCIn_DSP1_EVE1_0LinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkDelete(pObj->IPCOut_EVE1_DSP1_0LinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkDelete(pObj->Alg_FeaturePlaneComputationLinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkDelete(pObj->IPCIn_EVE1_IPU1_0_0LinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkDelete(pObj->IPCOut_IPU1_0_EVE1_0LinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       return status;
}
Int32 chains_fastBoot_issIspSimcop_pd_Display_CreateAndStart_GrpxSrc(chains_fastBoot_issIspSimcop_pd_DisplayObj *pObj)
{
       Int32 status;

       status = System_linkCreate(pObj->GrpxSrcLinkID, &pObj->GrpxSrcPrm, sizeof(pObj->GrpxSrcPrm));
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkCreate(pObj->Display_GrpxLinkID, &pObj->Display_GrpxPrm, sizeof(pObj->Display_GrpxPrm));
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkStart(pObj->Display_GrpxLinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkStart(pObj->GrpxSrcLinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       return status;
}

Int32 chains_fastBoot_issIspSimcop_pd_Display_Start_UcEarly(chains_fastBoot_issIspSimcop_pd_DisplayObj *pObj){

       Int32 status;


       status = System_linkStart(pObj->Display_VideoLinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkStart(pObj->Merge_displayLinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkStart(pObj->Gate_algDrawLinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkStart(pObj->Gate_algCaptureLinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkStart(pObj->Gate_algFeatureComputeLinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkStart(pObj->Dup_captureLinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkStart(pObj->IssM2mRszLinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkStart(pObj->IssM2mSimcopLinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkStart(pObj->Alg_IssAewbLinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkStart(pObj->IssM2mIspLinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkStart(pObj->IssCaptureLinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       return status;
}

Int32 chains_fastBoot_issIspSimcop_pd_Display_Start_UcLate(chains_fastBoot_issIspSimcop_pd_DisplayObj *pObj){

       Int32 status;

       status = System_linkStart(pObj->Alg_ObjectDrawLinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkStart(pObj->Sync_algLinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkStart(pObj->Merge_algLinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkStart(pObj->IPCIn_IPU1_0_DSP1_0LinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkStart(pObj->IPCOut_DSP1_IPU1_0_0LinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkStart(pObj->Alg_ObjectDetectionLinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkStart(pObj->IPCIn_DSP1_EVE1_0LinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkStart(pObj->IPCOut_EVE1_DSP1_0LinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkStart(pObj->Alg_FeaturePlaneComputationLinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkStart(pObj->IPCIn_EVE1_IPU1_0_0LinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkStart(pObj->IPCOut_IPU1_0_EVE1_0LinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       return status;
}

Int32 chains_fastBoot_issIspSimcop_pd_Display_Stop_UcLate(chains_fastBoot_issIspSimcop_pd_DisplayObj *pObj){

       Int32 status;

       status = System_linkStop(pObj->Alg_ObjectDrawLinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkStop(pObj->Sync_algLinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkStop(pObj->Merge_algLinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkStop(pObj->IPCIn_IPU1_0_DSP1_0LinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkStop(pObj->IPCOut_DSP1_IPU1_0_0LinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkStop(pObj->Alg_ObjectDetectionLinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkStop(pObj->IPCIn_DSP1_EVE1_0LinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkStop(pObj->IPCOut_EVE1_DSP1_0LinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkStop(pObj->Alg_FeaturePlaneComputationLinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkStop(pObj->IPCIn_EVE1_IPU1_0_0LinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkStop(pObj->IPCOut_IPU1_0_EVE1_0LinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       return status;
}


Int32 chains_fastBoot_issIspSimcop_pd_Display_Stop(chains_fastBoot_issIspSimcop_pd_DisplayObj *pObj){

       Int32 status;

       status = System_linkStop(pObj->Display_GrpxLinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkStop(pObj->GrpxSrcLinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkStop(pObj->Display_VideoLinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkStop(pObj->Merge_displayLinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkStop(pObj->Gate_algDrawLinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkStop(pObj->Gate_algCaptureLinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkStop(pObj->Gate_algFeatureComputeLinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkStop(pObj->Dup_captureLinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkStop(pObj->IssM2mRszLinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkStop(pObj->IssM2mSimcopLinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkStop(pObj->Alg_IssAewbLinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkStop(pObj->IssM2mIspLinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkStop(pObj->IssCaptureLinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       return status;
}

Int32 chains_fastBoot_issIspSimcop_pd_Display_Delete(chains_fastBoot_issIspSimcop_pd_DisplayObj *pObj){

       Int32 status;

       status = System_linkDelete(pObj->Display_GrpxLinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkDelete(pObj->GrpxSrcLinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkDelete(pObj->Display_VideoLinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkDelete(pObj->Merge_displayLinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkDelete(pObj->Gate_algDrawLinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkDelete(pObj->Gate_algCaptureLinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkDelete(pObj->Gate_algFeatureComputeLinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkDelete(pObj->Dup_captureLinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkDelete(pObj->IssM2mRszLinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkDelete(pObj->IssM2mSimcopLinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkDelete(pObj->Alg_IssAewbLinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkDelete(pObj->IssM2mIspLinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkDelete(pObj->IssCaptureLinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       return status;
}

Void chains_fastBoot_issIspSimcop_pd_Display_printBufferStatistics(chains_fastBoot_issIspSimcop_pd_DisplayObj *pObj){
       System_linkPrintBufferStatistics(pObj->IssCaptureLinkID);
       System_linkPrintBufferStatistics(pObj->IssM2mIspLinkID);
       System_linkPrintBufferStatistics(pObj->Alg_IssAewbLinkID);
       System_linkPrintBufferStatistics(pObj->IssM2mSimcopLinkID);
       System_linkPrintBufferStatistics(pObj->IssM2mRszLinkID);
       System_linkPrintBufferStatistics(pObj->Dup_captureLinkID);
       System_linkPrintBufferStatistics(pObj->Gate_algFeatureComputeLinkID);
       System_linkPrintBufferStatistics(pObj->IPCOut_IPU1_0_EVE1_0LinkID);
       Task_sleep(500);
       System_linkPrintBufferStatistics(pObj->IPCIn_EVE1_IPU1_0_0LinkID);
       System_linkPrintBufferStatistics(pObj->Alg_FeaturePlaneComputationLinkID);
       System_linkPrintBufferStatistics(pObj->IPCOut_EVE1_DSP1_0LinkID);
       Task_sleep(500);
       System_linkPrintBufferStatistics(pObj->IPCIn_DSP1_EVE1_0LinkID);
       System_linkPrintBufferStatistics(pObj->Alg_ObjectDetectionLinkID);
       System_linkPrintBufferStatistics(pObj->IPCOut_DSP1_IPU1_0_0LinkID);
       Task_sleep(500);
       System_linkPrintBufferStatistics(pObj->IPCIn_IPU1_0_DSP1_0LinkID);
       System_linkPrintBufferStatistics(pObj->Gate_algCaptureLinkID);
       System_linkPrintBufferStatistics(pObj->Merge_algLinkID);
       System_linkPrintBufferStatistics(pObj->Sync_algLinkID);
       System_linkPrintBufferStatistics(pObj->Alg_ObjectDrawLinkID);
       System_linkPrintBufferStatistics(pObj->Gate_algDrawLinkID);
       System_linkPrintBufferStatistics(pObj->Merge_displayLinkID);
       System_linkPrintBufferStatistics(pObj->Display_VideoLinkID);
       System_linkPrintBufferStatistics(pObj->GrpxSrcLinkID);
       System_linkPrintBufferStatistics(pObj->Display_GrpxLinkID);
       Task_sleep(500);
}

Void chains_fastBoot_issIspSimcop_pd_Display_printStatistics(chains_fastBoot_issIspSimcop_pd_DisplayObj *pObj){
       System_linkPrintStatistics(pObj->IssCaptureLinkID);
       System_linkPrintStatistics(pObj->IssM2mIspLinkID);
       System_linkPrintStatistics(pObj->Alg_IssAewbLinkID);
       System_linkPrintStatistics(pObj->IssM2mSimcopLinkID);
       System_linkPrintStatistics(pObj->IssM2mRszLinkID);
       System_linkPrintStatistics(pObj->Dup_captureLinkID);
       System_linkPrintStatistics(pObj->Gate_algFeatureComputeLinkID);
       System_linkPrintStatistics(pObj->IPCOut_IPU1_0_EVE1_0LinkID);
       Task_sleep(500);
       System_linkPrintStatistics(pObj->IPCIn_EVE1_IPU1_0_0LinkID);
       System_linkPrintStatistics(pObj->Alg_FeaturePlaneComputationLinkID);
       System_linkPrintStatistics(pObj->IPCOut_EVE1_DSP1_0LinkID);
       Task_sleep(500);
       System_linkPrintStatistics(pObj->IPCIn_DSP1_EVE1_0LinkID);
       System_linkPrintStatistics(pObj->Alg_ObjectDetectionLinkID);
       System_linkPrintStatistics(pObj->IPCOut_DSP1_IPU1_0_0LinkID);
       Task_sleep(500);
       System_linkPrintStatistics(pObj->IPCIn_IPU1_0_DSP1_0LinkID);
       System_linkPrintStatistics(pObj->Gate_algCaptureLinkID);
       System_linkPrintStatistics(pObj->Merge_algLinkID);
       System_linkPrintStatistics(pObj->Sync_algLinkID);
       System_linkPrintStatistics(pObj->Alg_ObjectDrawLinkID);
       System_linkPrintStatistics(pObj->Gate_algDrawLinkID);
       System_linkPrintStatistics(pObj->Merge_displayLinkID);
       System_linkPrintStatistics(pObj->Display_VideoLinkID);
       System_linkPrintStatistics(pObj->GrpxSrcLinkID);
       System_linkPrintStatistics(pObj->Display_GrpxLinkID);
       Task_sleep(500);
}

