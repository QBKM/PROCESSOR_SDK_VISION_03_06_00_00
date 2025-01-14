/*
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
*/

/**
 *******************************************************************************
 * \file system_linkApi_local.c
 *
 * \brief  Utility function to call link callback functions on local core.
 *
 *         This file implements the utility function to call the link call
 *         back functions on local core only.
 *
 * \version 0.0 (Jun 2013) : [KC] First version taken from DVR RDK and
 *                                cleaned up for Vision_sdk
 * \version 0.1 (Jul 2013) : [HS] Commenting style update as per defined
 *                                format.
 *
 *******************************************************************************
 */

/*******************************************************************************
 *  INCLUDE FILES
 *******************************************************************************
 */
#include "system_priv_common.h"

/**
 *******************************************************************************
 *
 * \brief Function to call link control command. This is through mailboxes.
 *
 *
 * \param   linkId      [IN] linkID for which message is intended
 * \param   cmd         [IN] Control command
 * \param   pPrm        [IN] Command parameter
 * \param   prmSize     [IN] Size of parameter
 * \param   waitAck     [IN] Flag to wait for ack or not.
 *
 * \return  SYSTEM_LINK_STATUS_SOK on success.
 *
 *******************************************************************************
 */
Int32 System_linkControl_local(UInt32 linkId, UInt32 cmd, Void * pPrm,
                               UInt32 prmSize, Bool waitAck)
{
    Int32 status;
    Utils_MbxHndl *pToMbx;
    Utils_TskHndl *pTsk;
    UInt32 flags = 0;

    linkId = SYSTEM_GET_LINK_ID(linkId);

    UTILS_assert(linkId < SYSTEM_LINK_ID_MAX);

    pTsk   = (Utils_TskHndl*) gSystem_objCommon.linkObj[linkId].pTsk;
    if(pTsk==NULL)
    {
        Vps_printf(" SYSTEM: ERROR: No link registered at link ID [%d] !!!\n", linkId);
        status =  SYSTEM_LINK_STATUS_EFAIL;
    }
    else
    {
        pToMbx = &pTsk->mbx;

        if (waitAck)
        {
            flags = UTILS_MBX_FLAG_WAIT_ACK;
        }

        status = Utils_mbxSendMsg(&gSystem_objCommon.mbx, pToMbx, cmd, pPrm, flags);
    }
    return status;
}

/**
 *******************************************************************************
 *
 * \brief Function to send message to link. This is through mailboxes.
 *
 *
 * \param   linkId      [IN] linkID for which message is intended
 * \param   cmd         [IN] command
 * \param   payload     [IN] Payload of command
 *
 * \return  SYSTEM_LINK_STATUS_SOK on success.
 *
 *******************************************************************************
 */
Int32 System_sendLinkCmd_local(UInt32 linkId, UInt32 cmd, Void *payload)
{
    Utils_MbxHndl *pToMbx;
    Utils_TskHndl *pTsk;

    linkId = SYSTEM_GET_LINK_ID(linkId);

    UTILS_assert(linkId < SYSTEM_LINK_ID_MAX);

    pTsk   = (Utils_TskHndl*) gSystem_objCommon.linkObj[linkId].pTsk;
    pToMbx = &pTsk->mbx;

    return Utils_mbxSendCmd(pToMbx, cmd, payload);
}

/**
 *******************************************************************************
 *
 * \brief Function to get link information from remote link on local processor.
 *
 *
 * \param   linkId      [IN] Link Id for which message is intended.
 * \param   info        [OUT] Link information
 *
 * \return  SYSTEM_LINK_STATUS_SOK on success.
 *
 *******************************************************************************
 */
Int32 System_linkGetInfo_local(UInt32 linkId, System_LinkInfo * info)
{
    System_LinkObj *pLinkObj;
    Int32 retVal;
    linkId = SYSTEM_GET_LINK_ID(linkId);

    UTILS_assert(linkId < SYSTEM_LINK_ID_MAX);

    pLinkObj = &gSystem_objCommon.linkObj[linkId];

    if (pLinkObj->getLinkInfo != NULL)
    {
        retVal = pLinkObj->getLinkInfo(pLinkObj->pTsk, info);
    }
    else
    {
        retVal = FVID2_EFAIL;
    }
return retVal;
}
