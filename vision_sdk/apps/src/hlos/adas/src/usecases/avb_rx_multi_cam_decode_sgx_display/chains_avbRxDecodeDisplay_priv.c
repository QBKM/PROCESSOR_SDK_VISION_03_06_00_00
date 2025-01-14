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
#include "chains_avbRxDecodeDisplay_priv.h"
Void chains_avbRxDecodeDisplay_SetLinkId(chains_avbRxDecodeDisplayObj *pObj){
       pObj->AvbRxLinkID                    = IPU1_0_LINK (SYSTEM_LINK_ID_AVB_RX);
       pObj->DecodeLinkID                   = SYSTEM_LINK_ID_VDEC_0;
       pObj->Sync_svLinkID                  = IPU1_0_LINK (SYSTEM_LINK_ID_SYNC_0);
       pObj->IPCOut_IPU1_0_A15_0_0LinkID    = IPU1_0_LINK (SYSTEM_LINK_ID_IPC_OUT_0);
       pObj->IPCIn_A15_0_IPU1_0_0LinkID     = A15_0_LINK (SYSTEM_LINK_ID_IPC_IN_0);
       pObj->SgxFrmcpyLinkID                = SYSTEM_LINK_ID_SGXFRMCPY_0;
       pObj->IPCOut_A15_0_IPU1_0_0LinkID    = A15_0_LINK (SYSTEM_LINK_ID_IPC_OUT_0);
       pObj->IPCIn_IPU1_0_A15_0_0LinkID     = IPU1_0_LINK (SYSTEM_LINK_ID_IPC_IN_0);
       pObj->Display_M4LinkID               = SYSTEM_LINK_ID_DISPLAY_0;
       pObj->GrpxSrcLinkID                  = IPU1_0_LINK (SYSTEM_LINK_ID_GRPX_SRC_0);
       pObj->Display_GrpxLinkID             = SYSTEM_LINK_ID_DISPLAY_1;
}

Void chains_avbRxDecodeDisplay_ResetLinkPrms(chains_avbRxDecodeDisplayObj *pObj){
       AvbRxLink_CreateParams_Init(&pObj->AvbRxPrm);
       DecLink_CreateParams_Init(&pObj->DecodePrm);
       SyncLink_CreateParams_Init(&pObj->Sync_svPrm);
       IpcLink_CreateParams_Init(&pObj->IPCOut_IPU1_0_A15_0_0Prm);
       IpcLink_CreateParams_Init(&pObj->IPCIn_A15_0_IPU1_0_0Prm);
       SgxFrmcpyLink_CreateParams_Init(&pObj->SgxFrmcpyPrm);
       IpcLink_CreateParams_Init(&pObj->IPCOut_A15_0_IPU1_0_0Prm);
       IpcLink_CreateParams_Init(&pObj->IPCIn_IPU1_0_A15_0_0Prm);
       DisplayLink_CreateParams_Init(&pObj->Display_M4Prm);
       GrpxSrcLink_CreateParams_Init(&pObj->GrpxSrcPrm);
       DisplayLink_CreateParams_Init(&pObj->Display_GrpxPrm);
}

Void chains_avbRxDecodeDisplay_SetPrms(chains_avbRxDecodeDisplayObj *pObj){
}

Void chains_avbRxDecodeDisplay_ConnectLinks(chains_avbRxDecodeDisplayObj *pObj){

       //AvbRx -> Decode
       pObj->AvbRxPrm.outQueParams.nextLink = pObj->DecodeLinkID;
       pObj->DecodePrm.inQueParams.prevLinkId = pObj->AvbRxLinkID;
       pObj->DecodePrm.inQueParams.prevLinkQueId = 0;

       //Decode -> Sync_sv
       pObj->DecodePrm.outQueParams.nextLink = pObj->Sync_svLinkID;
       pObj->Sync_svPrm.inQueParams.prevLinkId = pObj->DecodeLinkID;
       pObj->Sync_svPrm.inQueParams.prevLinkQueId = 0;

       //Sync_sv -> IPCOut_IPU1_0_A15_0_0
       pObj->Sync_svPrm.outQueParams.nextLink = pObj->IPCOut_IPU1_0_A15_0_0LinkID;
       pObj->IPCOut_IPU1_0_A15_0_0Prm.inQueParams.prevLinkId = pObj->Sync_svLinkID;
       pObj->IPCOut_IPU1_0_A15_0_0Prm.inQueParams.prevLinkQueId = 0;

       //IPCOut_IPU1_0_A15_0_0 -> IPCIn_A15_0_IPU1_0_0
       pObj->IPCOut_IPU1_0_A15_0_0Prm.outQueParams.nextLink = pObj->IPCIn_A15_0_IPU1_0_0LinkID;
       pObj->IPCIn_A15_0_IPU1_0_0Prm.inQueParams.prevLinkId = pObj->IPCOut_IPU1_0_A15_0_0LinkID;
       pObj->IPCIn_A15_0_IPU1_0_0Prm.inQueParams.prevLinkQueId = 0;

       //IPCIn_A15_0_IPU1_0_0 -> SgxFrmcpy
       pObj->IPCIn_A15_0_IPU1_0_0Prm.outQueParams.nextLink = pObj->SgxFrmcpyLinkID;
       pObj->SgxFrmcpyPrm.inQueParams.prevLinkId = pObj->IPCIn_A15_0_IPU1_0_0LinkID;
       pObj->SgxFrmcpyPrm.inQueParams.prevLinkQueId = 0;

       //SgxFrmcpy -> IPCOut_A15_0_IPU1_0_0
       pObj->SgxFrmcpyPrm.outQueParams.nextLink = pObj->IPCOut_A15_0_IPU1_0_0LinkID;
       pObj->IPCOut_A15_0_IPU1_0_0Prm.inQueParams.prevLinkId = pObj->SgxFrmcpyLinkID;
       pObj->IPCOut_A15_0_IPU1_0_0Prm.inQueParams.prevLinkQueId = 0;

       //IPCOut_A15_0_IPU1_0_0 -> IPCIn_IPU1_0_A15_0_0
       pObj->IPCOut_A15_0_IPU1_0_0Prm.outQueParams.nextLink = pObj->IPCIn_IPU1_0_A15_0_0LinkID;
       pObj->IPCIn_IPU1_0_A15_0_0Prm.inQueParams.prevLinkId = pObj->IPCOut_A15_0_IPU1_0_0LinkID;
       pObj->IPCIn_IPU1_0_A15_0_0Prm.inQueParams.prevLinkQueId = 0;

       //IPCIn_IPU1_0_A15_0_0 -> Display_M4
       pObj->IPCIn_IPU1_0_A15_0_0Prm.outQueParams.nextLink = pObj->Display_M4LinkID;
       pObj->Display_M4Prm.inQueParams.prevLinkId = pObj->IPCIn_IPU1_0_A15_0_0LinkID;
       pObj->Display_M4Prm.inQueParams.prevLinkQueId = 0;

       //GrpxSrc -> Display_Grpx
       pObj->GrpxSrcPrm.outQueParams.nextLink = pObj->Display_GrpxLinkID;
       pObj->Display_GrpxPrm.inQueParams.prevLinkId = pObj->GrpxSrcLinkID;
       pObj->Display_GrpxPrm.inQueParams.prevLinkQueId = 0;

}

Int32 chains_avbRxDecodeDisplay_Create(chains_avbRxDecodeDisplayObj *pObj, Void *appObj){

       Int32 status;

       chains_avbRxDecodeDisplay_SetLinkId(pObj);
       chains_avbRxDecodeDisplay_ResetLinkPrms(pObj);

       chains_avbRxDecodeDisplay_SetPrms(pObj);
       chains_avbRxDecodeDisplay_SetAppPrms(pObj, appObj);

       chains_avbRxDecodeDisplay_ConnectLinks(pObj);
       status = System_linkCreate(pObj->AvbRxLinkID, &pObj->AvbRxPrm, sizeof(pObj->AvbRxPrm));
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkCreate(pObj->DecodeLinkID, &pObj->DecodePrm, sizeof(pObj->DecodePrm));
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkCreate(pObj->Sync_svLinkID, &pObj->Sync_svPrm, sizeof(pObj->Sync_svPrm));
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkCreate(pObj->IPCOut_IPU1_0_A15_0_0LinkID, &pObj->IPCOut_IPU1_0_A15_0_0Prm, sizeof(pObj->IPCOut_IPU1_0_A15_0_0Prm));
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkCreate(pObj->IPCIn_A15_0_IPU1_0_0LinkID, &pObj->IPCIn_A15_0_IPU1_0_0Prm, sizeof(pObj->IPCIn_A15_0_IPU1_0_0Prm));
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkCreate(pObj->SgxFrmcpyLinkID, &pObj->SgxFrmcpyPrm, sizeof(pObj->SgxFrmcpyPrm));
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkCreate(pObj->IPCOut_A15_0_IPU1_0_0LinkID, &pObj->IPCOut_A15_0_IPU1_0_0Prm, sizeof(pObj->IPCOut_A15_0_IPU1_0_0Prm));
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkCreate(pObj->IPCIn_IPU1_0_A15_0_0LinkID, &pObj->IPCIn_IPU1_0_A15_0_0Prm, sizeof(pObj->IPCIn_IPU1_0_A15_0_0Prm));
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkCreate(pObj->Display_M4LinkID, &pObj->Display_M4Prm, sizeof(pObj->Display_M4Prm));
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkCreate(pObj->GrpxSrcLinkID, &pObj->GrpxSrcPrm, sizeof(pObj->GrpxSrcPrm));
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkCreate(pObj->Display_GrpxLinkID, &pObj->Display_GrpxPrm, sizeof(pObj->Display_GrpxPrm));
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       return status;
}

Int32 chains_avbRxDecodeDisplay_Start(chains_avbRxDecodeDisplayObj *pObj){

       Int32 status;

       status = System_linkStart(pObj->Display_GrpxLinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkStart(pObj->GrpxSrcLinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkStart(pObj->Display_M4LinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkStart(pObj->IPCIn_IPU1_0_A15_0_0LinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkStart(pObj->IPCOut_A15_0_IPU1_0_0LinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkStart(pObj->SgxFrmcpyLinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkStart(pObj->IPCIn_A15_0_IPU1_0_0LinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkStart(pObj->IPCOut_IPU1_0_A15_0_0LinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkStart(pObj->Sync_svLinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkStart(pObj->DecodeLinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkStart(pObj->AvbRxLinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       return status;
}

Int32 chains_avbRxDecodeDisplay_Stop(chains_avbRxDecodeDisplayObj *pObj){

       Int32 status;

       status = System_linkStop(pObj->Display_GrpxLinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkStop(pObj->GrpxSrcLinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkStop(pObj->Display_M4LinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkStop(pObj->IPCIn_IPU1_0_A15_0_0LinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkStop(pObj->IPCOut_A15_0_IPU1_0_0LinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkStop(pObj->SgxFrmcpyLinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkStop(pObj->IPCIn_A15_0_IPU1_0_0LinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkStop(pObj->IPCOut_IPU1_0_A15_0_0LinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkStop(pObj->Sync_svLinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkStop(pObj->DecodeLinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkStop(pObj->AvbRxLinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       return status;
}

Int32 chains_avbRxDecodeDisplay_Delete(chains_avbRxDecodeDisplayObj *pObj){

       Int32 status;

       status = System_linkDelete(pObj->Display_GrpxLinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkDelete(pObj->GrpxSrcLinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkDelete(pObj->Display_M4LinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkDelete(pObj->IPCIn_IPU1_0_A15_0_0LinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkDelete(pObj->IPCOut_A15_0_IPU1_0_0LinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkDelete(pObj->SgxFrmcpyLinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkDelete(pObj->IPCIn_A15_0_IPU1_0_0LinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkDelete(pObj->IPCOut_IPU1_0_A15_0_0LinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkDelete(pObj->Sync_svLinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkDelete(pObj->DecodeLinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       status = System_linkDelete(pObj->AvbRxLinkID);
       UTILS_assert(status == SYSTEM_LINK_STATUS_SOK);

       return status;
}

Void chains_avbRxDecodeDisplay_printBufferStatistics(chains_avbRxDecodeDisplayObj *pObj){
       System_linkPrintBufferStatistics(pObj->AvbRxLinkID);
       System_linkPrintBufferStatistics(pObj->DecodeLinkID);
       System_linkPrintBufferStatistics(pObj->Sync_svLinkID);
       System_linkPrintBufferStatistics(pObj->IPCOut_IPU1_0_A15_0_0LinkID);
       Task_sleep(500);
       System_linkPrintBufferStatistics(pObj->IPCIn_A15_0_IPU1_0_0LinkID);
       System_linkPrintBufferStatistics(pObj->SgxFrmcpyLinkID);
       System_linkPrintBufferStatistics(pObj->IPCOut_A15_0_IPU1_0_0LinkID);
       Task_sleep(500);
       System_linkPrintBufferStatistics(pObj->IPCIn_IPU1_0_A15_0_0LinkID);
       System_linkPrintBufferStatistics(pObj->Display_M4LinkID);
       System_linkPrintBufferStatistics(pObj->GrpxSrcLinkID);
       System_linkPrintBufferStatistics(pObj->Display_GrpxLinkID);
       Task_sleep(500);
}

Void chains_avbRxDecodeDisplay_printStatistics(chains_avbRxDecodeDisplayObj *pObj){
       System_linkPrintStatistics(pObj->AvbRxLinkID);
       System_linkPrintStatistics(pObj->DecodeLinkID);
       System_linkPrintStatistics(pObj->Sync_svLinkID);
       System_linkPrintStatistics(pObj->IPCOut_IPU1_0_A15_0_0LinkID);
       Task_sleep(500);
       System_linkPrintStatistics(pObj->IPCIn_A15_0_IPU1_0_0LinkID);
       System_linkPrintStatistics(pObj->SgxFrmcpyLinkID);
       System_linkPrintStatistics(pObj->IPCOut_A15_0_IPU1_0_0LinkID);
       Task_sleep(500);
       System_linkPrintStatistics(pObj->IPCIn_IPU1_0_A15_0_0LinkID);
       System_linkPrintStatistics(pObj->Display_M4LinkID);
       System_linkPrintStatistics(pObj->GrpxSrcLinkID);
       System_linkPrintStatistics(pObj->Display_GrpxLinkID);
       Task_sleep(500);
}

