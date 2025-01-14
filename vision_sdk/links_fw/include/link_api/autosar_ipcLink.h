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
 *
 * \ingroup FRAMEWORK_MODULE_API
 * \defgroup AUTOSAR_IPC_LINK_API IPC Link API
 *
 * \brief  This module has the interface for using AUTOSAR IPC OUT and AUTOSAR IPC IN Link
 *
 * @{
 *
 *******************************************************************************
 */

/**
 *******************************************************************************
 *
 * \file autosar_ipcLink.h
 *
 * \brief Autosar IPC Link API
 *
 * \version 0.0 (August 2018) : [AKG] First version
 *
 *******************************************************************************
 */

#ifndef AUTOSAR_IPC_LINK_H_
#define AUTOSAR_IPC_LINK_H_

#ifdef __cplusplus
extern "C" {
#endif

/*******************************************************************************
 *  INCLUDE FILES
 *******************************************************************************
 */
#include <include/link_api/system.h>
#include <include/link_api/system_ipc_if.h>

/*******************************************************************************
 *  Defines
 *******************************************************************************
 */

#define AUTOSAR_IPC_IN_NEW_BUFF_IPC_EVENT_ID         (6U)   //A2V

#define AUTOSAR_IPC_IN_BUFF_FREE_IPC_EVENT_ID        (7U)   //V2A

#define AUTOSAR_IPC_OUT_NEW_BUFF_IPC_EVENT_ID        (9U)   //V2A

#define AUTOSAR_IPC_OUT_BUFF_FREE_IPC_EVENT_ID       (10U)  //A2V

#define IPC_INIT_DONE                                (777U)
/**
 *******************************************************************************
 *
 *   \ingroup LINK_API_CMD
 *   \addtogroup AUTOSAR_IPC_LINK_API_CMD IPC Link Control Commands
 *
 *   @{
 *
 *******************************************************************************
 */

/*******************************************************************************
 *  Enum's
 *******************************************************************************
 */


/*******************************************************************************
 *  Data structures
 *******************************************************************************
 */


/*******************************************************************************
 *  Functions
 *******************************************************************************
 */

/**
 *******************************************************************************
 *
 *   \brief Autosar IPC Out link register and init function
 *
 *          For each IPC instance
 *          - Creates link task
 *          - Registers as a link with the system API
 *
 *   \return  SYSTEM_LINK_STATUS_SOK on success
 *
 *******************************************************************************
*/
Int32 AutosarIpcOutLink_init(void);

/**
 *******************************************************************************
 *
 *   \brief Autosar IPC Out link de-register and de-init function
 *
 *          For each IPC instance
 *          - Deletes link task
 *          - De-registers as a link with the system API
 *
 *   \return  SYSTEM_LINK_STATUS_SOK on success
 *
 *******************************************************************************
*/
Int32 AutosarIpcOutLink_deInit(void);

/**
 *******************************************************************************
 *
 *   \brief Autosar IPC In link register and init function
 *
 *          For each IPC instance
 *          - Creates link task
 *          - Registers as a link with the system API
 *
 *   \return  SYSTEM_LINK_STATUS_SOK on success
 *
 *******************************************************************************
*/
Int32 AutosarIpcInLink_init(void);

/**
 *******************************************************************************
 *
 *   \brief Autosar IPC In link de-register and de-init function
 *
 *          For each IPC instance
 *          - Deletes link task
 *          - De-registers as a link with the system API
 *
 *   \return  SYSTEM_LINK_STATUS_SOK on success
 *
 *******************************************************************************
*/
Int32 AutosarIpcInLink_deInit(void);

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif

/* @} */

/* Nothing beyond this point */
