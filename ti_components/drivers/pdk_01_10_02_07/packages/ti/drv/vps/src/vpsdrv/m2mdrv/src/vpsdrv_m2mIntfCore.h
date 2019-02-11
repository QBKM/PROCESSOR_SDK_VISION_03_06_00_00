/* =============================================================================
 *   Copyright (c) Texas Instruments Incorporated 2014-2015
 *
 *  Redistribution and use in source and binary forms, with or without
 *  modification, are permitted provided that the following conditions
 *  are met:
 *
 *    Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *
 *    Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the
 *    distribution.
 *
 *    Neither the name of Texas Instruments Incorporated nor the names of
 *    its contributors may be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 *  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 *  "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 *  LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
 *  A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
 *  OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 *  SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
 *  LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 *  DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 *  THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 *  (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 *  OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

/**
 *  \file vpsdrv_m2mIntfPriv.h
 *
 *  \brief VPS M2M driver internal header file.
 */

#ifndef VPSDRV_M2MINTFCORE_H_
#define VPSDRV_M2MINTFCORE_H_

/* ========================================================================== */
/*                             Include Files                                  */
/* ========================================================================== */

#include <ti/drv/vps/include/vps_m2mIntf.h>
#ifdef VPS_ISS_BUILD
#include <ti/drv/vps/include/iss/vps_m2mIss.h>
#endif
#include <vpsdrv_m2mIsscore.h>

#ifdef __cplusplus
extern "C" {
#endif

/* ========================================================================== */
/*                           Macros & Typedefs                                */
/* ========================================================================== */

/* ========================================================================== */
/*                         Structure Declarations                             */
/* ========================================================================== */

/** \brief Function pointer for submitting request */
typedef Int32 (*VpsMDrvSubmitReq)(VpsMDrv_IntfHandleObj *hObj,
                                  VpsMDrv_IntfQueueObj  *qObj);

/** \brief Function pointer for processing control commands */
typedef Int32 (*VpsMDrvControl)(VpsMDrv_IntfHandleObj *hObj,
                                UInt32                 cmd,
                                Ptr                    cmdArgs,
                                Ptr                    cmdStatusArgs);

typedef struct
{
    UInt32           drvInstId;
    /**< Driver Instance Id */
    VpsMDrvSubmitReq submitReq;
    /**< Function pointer for submitting the request */
    VpsMDrvControl   control;
    /**< Function pointer for processing control command */
} VpsMDrv_M2mCoreOps;

#ifdef __cplusplus
}
#endif

#endif /*  VPSDRV_M2MINTFCORE_H_ */
