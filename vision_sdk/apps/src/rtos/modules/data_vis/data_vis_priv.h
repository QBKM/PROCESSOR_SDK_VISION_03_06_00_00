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



#ifndef DATA_VIS_PRIV_H_
#define DATA_VIS_PRIV_H_

#ifdef __cplusplus
extern "C" {
#endif

/*******************************************************************************
 *  Include files
 *******************************************************************************
 */

#include "data_vis.h"
#include <ti/drv/vps/include/osal/bsp_osal.h>
#include <src/rtos/utils_common/include/utils_mem.h>

#define DATA_VIS_QUEUE_SIZE     (64*1000u)

typedef struct {

    UInt32 readIdx;
    UInt32 writeIdx;
    UInt32 count;
    DataVis_DataBwElement *data;

} DataVis_Queue;

typedef struct {

    UInt32 isSetPrmDone;

    DataVis_CreatePrm createPrm;

    DataVis_DataBwPrm userSetPrm;
    Bool resetDataCollector;
    Bool resetDraw;

    BspOsal_SemHandle lock;

    /* only used by drawing function's
     * Should not be used by data collection
     * and data logging function's
     */
    DataVis_DataBwPrm drawPrm;
    DataVis_DataBwElement *pDrawDataBwElements;
    UInt32 curDrawWrIdx;
    UInt32 curDrawNumElements;
    UInt64 startTimeInMsec;
    UInt16 x_prev[UTILS_STATCOLL_DATA_BW_MOD_MAX];
    UInt16 y_prev[UTILS_STATCOLL_DATA_BW_MOD_MAX];
    UInt16 x_cur[UTILS_STATCOLL_DATA_BW_MOD_MAX];
    UInt16 y_cur[UTILS_STATCOLL_DATA_BW_MOD_MAX];
    /* --- */

    DataVis_Queue queue;

} DataVis_Obj;


extern DataVis_Obj gDataVis_Obj;



Void DataVis_unlock();
Void DataVis_lock();

Void DataVis_queueDataBwCreate();
Void DataVis_queueDataBwDelete();

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif

/* @} */


