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

#ifndef _chains_tidlOD_H_
#define _chains_tidlOD_H_

#include <include/link_api/system.h>
#include <include/link_api/nullSrcLink.h>
#include <include/link_api/decLink.h>
#include <include/link_api/vpeLink.h>
#include <include/link_api/dupLink.h>
#include <include/alglink_api/algorithmLink_tidlpreproc.h>
#include <include/alglink_api/algorithmLink_tidl.h>
#include <include/link_api/mergeLink.h>
#include <include/link_api/syncLink.h>
#include <include/alglink_api/algorithmLink_tiop.h>
#include <include/link_api/ipcLink.h>
#include <include/alglink_api/algorithmLink_objectDraw.h>
#include <include/link_api/grpxSrcLink.h>
#include <include/link_api/displayLink.h>

typedef struct {
       UInt32    NullSourceLinkID;
       UInt32    DecodeLinkID;
       UInt32    VPELinkID;
       UInt32    DupLinkID;
       UInt32    IPCOut_IPU1_0_A15_0_0LinkID;
       UInt32    IPCIn_A15_0_IPU1_0_0LinkID;
       UInt32    Alg_tidlpreprocLinkID;
       UInt32    IPCOut_A15_0_EVE4_3LinkID;
       UInt32    IPCIn_EVE4_A15_0_0LinkID;
       UInt32    Alg_tidl_Eve4LinkID;
       UInt32    IPCOut_EVE4_DSP1_0LinkID;
       UInt32    IPCIn_DSP1_EVE4_3LinkID;
       UInt32    IPCOut_A15_0_EVE3_2LinkID;
       UInt32    IPCIn_EVE3_A15_0_0LinkID;
       UInt32    Alg_tidl_Eve3LinkID;
       UInt32    IPCOut_EVE3_DSP1_0LinkID;
       UInt32    IPCIn_DSP1_EVE3_2LinkID;
       UInt32    IPCOut_A15_0_EVE2_1LinkID;
       UInt32    IPCIn_EVE2_A15_0_0LinkID;
       UInt32    Alg_tidl_Eve2LinkID;
       UInt32    IPCOut_EVE2_DSP1_0LinkID;
       UInt32    IPCIn_DSP1_EVE2_1LinkID;
       UInt32    IPCOut_A15_0_EVE1_0LinkID;
       UInt32    IPCIn_EVE1_A15_0_0LinkID;
       UInt32    Alg_tidl_Eve1LinkID;
       UInt32    IPCOut_EVE1_DSP1_0LinkID;
       UInt32    IPCIn_DSP1_EVE1_0LinkID;
       UInt32    Merge_ODLinkID;
       UInt32    Alg_tidl_DspLinkID;
       UInt32    IPCOut_DSP1_IPU1_0_0LinkID;
       UInt32    IPCIn_IPU1_0_DSP1_0LinkID;
       UInt32    MergeLinkID;
       UInt32    SyncLinkID;
       UInt32    IPCOut_IPU1_0_DSP1_1LinkID;
       UInt32    IPCIn_DSP1_IPU1_0_4LinkID;
       UInt32    Alg_tiopLinkID;
       UInt32    IPCOut_DSP1_IPU1_0_1LinkID;
       UInt32    IPCIn_IPU1_0_DSP1_1LinkID;
       UInt32    Alg_ObjectDrawLinkID;
       UInt32    DisplayLinkID;
       UInt32    GrpxSrcLinkID;
       UInt32    Display_GrpxLinkID;

       NullSrcLink_CreateParams                          NullSourcePrm;
       DecLink_CreateParams                              DecodePrm;
       VpeLink_CreateParams                              VPEPrm;
       DupLink_CreateParams                              DupPrm;
       IpcLink_CreateParams                              IPCOut_IPU1_0_A15_0_0Prm;
       IpcLink_CreateParams                              IPCIn_A15_0_IPU1_0_0Prm;
       AlgorithmLink_tidlpreprocCreateParams   Alg_tidlpreprocPrm;
       IpcLink_CreateParams                              IPCOut_A15_0_EVE4_3Prm;
       IpcLink_CreateParams                              IPCIn_EVE4_A15_0_0Prm;
       AlgorithmLink_tidlCreateParams          Alg_tidl_Eve4Prm;
       IpcLink_CreateParams                              IPCOut_EVE4_DSP1_0Prm;
       IpcLink_CreateParams                              IPCIn_DSP1_EVE4_3Prm;
       IpcLink_CreateParams                              IPCOut_A15_0_EVE3_2Prm;
       IpcLink_CreateParams                              IPCIn_EVE3_A15_0_0Prm;
       AlgorithmLink_tidlCreateParams          Alg_tidl_Eve3Prm;
       IpcLink_CreateParams                              IPCOut_EVE3_DSP1_0Prm;
       IpcLink_CreateParams                              IPCIn_DSP1_EVE3_2Prm;
       IpcLink_CreateParams                              IPCOut_A15_0_EVE2_1Prm;
       IpcLink_CreateParams                              IPCIn_EVE2_A15_0_0Prm;
       AlgorithmLink_tidlCreateParams          Alg_tidl_Eve2Prm;
       IpcLink_CreateParams                              IPCOut_EVE2_DSP1_0Prm;
       IpcLink_CreateParams                              IPCIn_DSP1_EVE2_1Prm;
       IpcLink_CreateParams                              IPCOut_A15_0_EVE1_0Prm;
       IpcLink_CreateParams                              IPCIn_EVE1_A15_0_0Prm;
       AlgorithmLink_tidlCreateParams          Alg_tidl_Eve1Prm;
       IpcLink_CreateParams                              IPCOut_EVE1_DSP1_0Prm;
       IpcLink_CreateParams                              IPCIn_DSP1_EVE1_0Prm;
       MergeLink_CreateParams                            Merge_ODPrm;
       AlgorithmLink_tidlCreateParams          Alg_tidl_DspPrm;
       IpcLink_CreateParams                              IPCOut_DSP1_IPU1_0_0Prm;
       IpcLink_CreateParams                              IPCIn_IPU1_0_DSP1_0Prm;
       MergeLink_CreateParams                            MergePrm;
       SyncLink_CreateParams                             SyncPrm;
       IpcLink_CreateParams                              IPCOut_IPU1_0_DSP1_1Prm;
       IpcLink_CreateParams                              IPCIn_DSP1_IPU1_0_4Prm;
       AlgorithmLink_tiopCreateParams          Alg_tiopPrm;
       IpcLink_CreateParams                              IPCOut_DSP1_IPU1_0_1Prm;
       IpcLink_CreateParams                              IPCIn_IPU1_0_DSP1_1Prm;
       AlgorithmLink_ObjectDrawCreateParams              Alg_ObjectDrawPrm;
       DisplayLink_CreateParams                          DisplayPrm;
       GrpxSrcLink_CreateParams                          GrpxSrcPrm;
       DisplayLink_CreateParams                          Display_GrpxPrm;
} chains_tidlODObj;

Void chains_tidlOD_SetLinkId(chains_tidlODObj *pObj);

Void chains_tidlOD_ResetLinkPrms(chains_tidlODObj *pObj);

Void chains_tidlOD_SetPrms(chains_tidlODObj *pObj);

Void chains_tidlOD_ConnectLinks(chains_tidlODObj *pObj);

Int32 chains_tidlOD_Create(chains_tidlODObj *pObj, Void *appObj);

Int32 chains_tidlOD_Start(chains_tidlODObj *pObj);

Int32 chains_tidlOD_Stop(chains_tidlODObj *pObj);

Int32 chains_tidlOD_Delete(chains_tidlODObj *pObj);

Void chains_tidlOD_printBufferStatistics(chains_tidlODObj *pObj);

Void chains_tidlOD_printStatistics(chains_tidlODObj *pObj);

Void chains_tidlOD_SetAppPrms(chains_tidlODObj *pObj, Void *appObj);

#endif /* _chains_tidlOD_H_ */
