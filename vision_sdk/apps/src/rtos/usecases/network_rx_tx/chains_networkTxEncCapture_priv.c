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
#include "chains_networkTxEncCapture_priv.h"
Void chains_networkTxEncCapture_SetLinkId(chains_networkTxEncCaptureObj *pObj){
       pObj->CaptureLinkID                  = SYSTEM_LINK_ID_CAPTURE_0;
       pObj->DupLinkID                      = IPU1_0_LINK (SYSTEM_LINK_ID_DUP_0);
       pObj->EncodeLinkID                   = SYSTEM_LINK_ID_VENC_0;
       pObj->IPCOut_IPU1_0_A15_0_0LinkID    = IPU1_0_LINK (SYSTEM_LINK_ID_IPC_OUT_0);
       pObj->IPCIn_A15_0_IPU1_0_0LinkID     = A15_0_LINK (SYSTEM_LINK_ID_IPC_IN_0);
       pObj->NetworkTxLinkID                = A15_0_LINK (SYSTEM_LINK_ID_NETWORK_TX_0);
       pObj->Display_VideoLinkID            = SYSTEM_LINK_ID_DISPLAY_0;
       pObj->GrpxSrcLinkID                  = IPU1_0_LINK (SYSTEM_LINK_ID_GRPX_SRC_0);
       pObj->Display_GrpxLinkID             = SYSTEM_LINK_ID_DISPLAY_1;
}

Void chains_networkTxEncCapture_ResetLinkPrms(chains_networkTxEncCaptureObj *pObj){
       CaptureLink_CreateParams_Init(&pObj->CapturePrm);
       DupLink_CreateParams_Init(&pObj->DupPrm);
       EncLink_CreateParams_Init(&pObj->EncodePrm);
       IpcLink_CreateParams_Init(&pObj->IPCOut_IPU1_0_A15_0_0Prm);
       IpcLink_CreateParams_Init(&pObj->IPCIn_A15_0_IPU1_0_0Prm);
       NetworkTxLink_CreateParams_Init (&pObj->NetworkTxPrm);
       DisplayLink_CreateParams_Init(&pObj->Display_VideoPrm);
       GrpxSrcLink_CreateParams_Init(&pObj->GrpxSrcPrm);
       DisplayLink_CreateParams_Init(&pObj->Display_GrpxPrm);
}

Void chains_networkTxEncCapture_SetPrms(chains_networkTxEncCaptureObj *pObj){
       (pObj->DupPrm).numOutQue = 2;
       (pObj->NetworkTxPrm).numInQue = 1;
}

Void chains_networkTxEncCapture_ConnectLinks(chains_networkTxEncCaptureObj *pObj){

       //Capture -> Dup
       pObj->CapturePrm.outQueParams.nextLink = pObj->DupLinkID;
       pObj->DupPrm.inQueParams.prevLinkId = pObj->CaptureLinkID;
       pObj->DupPrm.inQueParams.prevLinkQueId = 0;

       //Dup -> Display_Video
       pObj->DupPrm.outQueParams[0].nextLink = pObj->Display_VideoLinkID;
       pObj->Display_VideoPrm.inQueParams.prevLinkId = pObj->DupLinkID;
       pObj->Display_VideoPrm.inQueParams.prevLinkQueId = 0;

       //Dup -> Encode
       pObj->DupPrm.outQueParams[1].nextLink = pObj->EncodeLinkID;
       pObj->EncodePrm.inQueParams.prevLinkId = pObj->DupLinkID;
       pObj->EncodePrm.inQueParams.prevLinkQueId = 1;

       //Encode -> IPCOut_IPU1_0_A15_0_0
       pObj->EncodePrm.outQueParams.nextLink = pObj->IPCOut_IPU1_0_A15_0_0LinkID;
       pObj->IPCOut_IPU1_0_A15_0_0Prm.inQueParams.prevLinkId = pObj->EncodeLinkID;
       pObj->IPCOut_IPU1_0_A15_0_0Prm.inQueParams.prevLinkQueId = 0;

       //IPCOut_IPU1_0_A15_0_0 -> IPCIn_A15_0_IPU1_0_0
       pObj->IPCOut_IPU1_0_A15_0_0Prm.outQueParams.nextLink = pObj->IPCIn_A15_0_IPU1_0_0LinkID;
       pObj->IPCIn_A15_0_IPU1_0_0Prm.inQueParams.prevLinkId = pObj->IPCOut_IPU1_0_A15_0_0LinkID;
       pObj->IPCIn_A15_0_IPU1_0_0Prm.inQueParams.prevLinkQueId = 0;

       //IPCIn_A15_0_IPU1_0_0 -> NetworkTx
       pObj->IPCIn_A15_0_IPU1_0_0Prm.outQueParams.nextLink = pObj->NetworkTxLinkID;
       pObj->NetworkTxPrm.inQueParams[0].prevLinkId = pObj->IPCIn_A15_0_IPU1_0_0LinkID;
       pObj->NetworkTxPrm.inQueParams[0].prevLinkQueId = 0;

       //GrpxSrc -> Display_Grpx
       pObj->GrpxSrcPrm.outQueParams.nextLink = pObj->Display_GrpxLinkID;
       pObj->Display_GrpxPrm.inQueParams.prevLinkId = pObj->GrpxSrcLinkID;
       pObj->Display_GrpxPrm.inQueParams.prevLinkQueId = 0;

}

Int32 chains_networkTxEncCapture_Create(chains_networkTxEncCaptureObj *pObj, Void *appObj){

       Int32 status;

       chains_networkTxEncCapture_SetLinkId(pObj);
       chains_networkTxEncCapture_ResetLinkPrms(pObj);

       chains_networkTxEncCapture_SetPrms(pObj);
       chains_networkTxEncCapture_SetAppPrms(pObj, appObj);

       chains_networkTxEncCapture_ConnectLinks(pObj);
       status = System_linkCreate(pObj->CaptureLinkID, &pObj->CapturePrm, sizeof(pObj->CapturePrm));
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkCreate(pObj->DupLinkID, &pObj->DupPrm, sizeof(pObj->DupPrm));
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkCreate(pObj->EncodeLinkID, &pObj->EncodePrm, sizeof(pObj->EncodePrm));
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkCreate(pObj->IPCOut_IPU1_0_A15_0_0LinkID, &pObj->IPCOut_IPU1_0_A15_0_0Prm, sizeof(pObj->IPCOut_IPU1_0_A15_0_0Prm));
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkCreate(pObj->IPCIn_A15_0_IPU1_0_0LinkID, &pObj->IPCIn_A15_0_IPU1_0_0Prm, sizeof(pObj->IPCIn_A15_0_IPU1_0_0Prm));
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkCreate(pObj->NetworkTxLinkID, &pObj->NetworkTxPrm, sizeof(pObj->NetworkTxPrm));
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkCreate(pObj->Display_VideoLinkID, &pObj->Display_VideoPrm, sizeof(pObj->Display_VideoPrm));
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkCreate(pObj->GrpxSrcLinkID, &pObj->GrpxSrcPrm, sizeof(pObj->GrpxSrcPrm));
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkCreate(pObj->Display_GrpxLinkID, &pObj->Display_GrpxPrm, sizeof(pObj->Display_GrpxPrm));
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       return status;
}

Int32 chains_networkTxEncCapture_Start(chains_networkTxEncCaptureObj *pObj){

       Int32 status;

       status = System_linkStart(pObj->Display_GrpxLinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkStart(pObj->GrpxSrcLinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkStart(pObj->Display_VideoLinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkStart(pObj->NetworkTxLinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkStart(pObj->IPCIn_A15_0_IPU1_0_0LinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkStart(pObj->IPCOut_IPU1_0_A15_0_0LinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkStart(pObj->EncodeLinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkStart(pObj->DupLinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkStart(pObj->CaptureLinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       return status;
}

Int32 chains_networkTxEncCapture_Stop(chains_networkTxEncCaptureObj *pObj){

       Int32 status;

       status = System_linkStop(pObj->Display_GrpxLinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkStop(pObj->GrpxSrcLinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkStop(pObj->Display_VideoLinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkStop(pObj->NetworkTxLinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkStop(pObj->IPCIn_A15_0_IPU1_0_0LinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkStop(pObj->IPCOut_IPU1_0_A15_0_0LinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkStop(pObj->EncodeLinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkStop(pObj->DupLinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkStop(pObj->CaptureLinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       return status;
}

Int32 chains_networkTxEncCapture_Delete(chains_networkTxEncCaptureObj *pObj){

       Int32 status;

       status = System_linkDelete(pObj->Display_GrpxLinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkDelete(pObj->GrpxSrcLinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkDelete(pObj->Display_VideoLinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkDelete(pObj->NetworkTxLinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkDelete(pObj->IPCIn_A15_0_IPU1_0_0LinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkDelete(pObj->IPCOut_IPU1_0_A15_0_0LinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkDelete(pObj->EncodeLinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkDelete(pObj->DupLinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkDelete(pObj->CaptureLinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       return status;
}

Void chains_networkTxEncCapture_printBufferStatistics(chains_networkTxEncCaptureObj *pObj){
       System_linkPrintBufferStatistics(pObj->CaptureLinkID);
       System_linkPrintBufferStatistics(pObj->DupLinkID);
       System_linkPrintBufferStatistics(pObj->EncodeLinkID);
       System_linkPrintBufferStatistics(pObj->IPCOut_IPU1_0_A15_0_0LinkID);
       Task_sleep(500);
       System_linkPrintBufferStatistics(pObj->IPCIn_A15_0_IPU1_0_0LinkID);
       System_linkPrintBufferStatistics(pObj->NetworkTxLinkID);
       Task_sleep(500);
       System_linkPrintBufferStatistics(pObj->Display_VideoLinkID);
       System_linkPrintBufferStatistics(pObj->GrpxSrcLinkID);
       System_linkPrintBufferStatistics(pObj->Display_GrpxLinkID);
       Task_sleep(500);
}

Void chains_networkTxEncCapture_printStatistics(chains_networkTxEncCaptureObj *pObj){
       System_linkPrintStatistics(pObj->CaptureLinkID);
       System_linkPrintStatistics(pObj->DupLinkID);
       System_linkPrintStatistics(pObj->EncodeLinkID);
       System_linkPrintStatistics(pObj->IPCOut_IPU1_0_A15_0_0LinkID);
       Task_sleep(500);
       System_linkPrintStatistics(pObj->IPCIn_A15_0_IPU1_0_0LinkID);
       System_linkPrintStatistics(pObj->NetworkTxLinkID);
       Task_sleep(500);
       System_linkPrintStatistics(pObj->Display_VideoLinkID);
       System_linkPrintStatistics(pObj->GrpxSrcLinkID);
       System_linkPrintStatistics(pObj->Display_GrpxLinkID);
       Task_sleep(500);
}
