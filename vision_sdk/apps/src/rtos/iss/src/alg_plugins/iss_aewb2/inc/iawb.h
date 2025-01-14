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

/**
 *  @file       ti/xdais/dm/iawb.h
 *
 *  @brief      This header defines all types, constants, and functions
 *              shared by all implementations of the auto white balance 
 *              algorithms.
 */
/**
 *  @defgroup   ti_xdais_dm_IAWB   xDM 1.0 extention Auto White Balance 
 *                                 Interface
 *
 *  This is the xDM 1.0 extention Auto White Balance Interface.
 */

#ifndef ti_xdais_dm_IAWB_
#define ti_xdais_dm_IAWB_

#include <xdc/std.h>
#include <ti/xdais/ialg.h>
#include <ti/xdais/xdas.h>
#include <ti/xdais/dm/xdm.h>
#include <iaewb.h>

#ifdef __cplusplus
extern "C" {
#endif

/** @ingroup    ti_xdais_dm_IAWB */
/*@{*/

#define IAWB_ERUNTIME  XDM_ERUNTIME        /**< @copydoc XDM_ERUNTIME */
#define IAWB_EOK       XDM_EOK             /**< @copydoc XDM_EOK */
#define IAWB_EFAIL     XDM_EFAIL           /**< @copydoc XDM_EFAIL */
#define IAWB_EUNSUPPORTED XDM_EUNSUPPORTED /**< @copydoc XDM_EUNSUPPORTED */

typedef enum IAWB_Mode{
  IAWB_MODE_AUTO,   /**< Automatic mode */
  IAWB_MODE_MANUAL, /**< Manual Mode, Algorithm try to find the nearest values
                     *   with given values in this mode 
		     */
  IAWB_MODE_NUM     /**< number of mode of Auto White Balance Algorithm 
                     *   Runing Mechanism
		     */
} IAWB_Mode;

/**
 *  @brief      This must be the first field of all IAWB
 *              instance objects.
 */
typedef struct IAWB_Obj {
    struct IAWB_Fxns *fxns;
} IAWB_Obj;

/**
 *  @brief      Opaque handle to an IAWB objects.
 */
typedef struct IAWB_Obj  *IAWB_Handle;

/**
 *  @brief      Defines the creation time parameters for
 *              all IAWB instance objects.
 *
 *  @extensibleStruct
 */

typedef struct IAWB_Params{
    XDAS_Int32 size;            /**< @sizeField */

    XDAS_UInt32 numHistory;     /**< number of history results used
                                 *   in calculating the current result 
                                 */
    XDAS_UInt32 numSmoothSteps; /**< number of steps taken to make the
                                 *   transition smooth
                                 */

} IAWB_Params;

/**
 *  @brief      This structure defines the algorithm parameters that can be
 *              modified after creation via control() calls.
 *
 *  @remarks    It is not necessary that given implementation support all
 *              dynamic parameters to be configurable at run time.  If a
 *              particular algorithm does not support run-time updates to
 *              a parameter that the application is attempting to change
 *              at runtime, it may indicate this as an error.
 *
 *  @extensibleStruct
 *
 *  @sa         IAWB_Fxns::control()
 */
typedef struct IAWB_DynamicParams {
    XDAS_Int32 	size;                 /**< @sizeField */
    XDAS_Bool 	strobeOn;         /**< strobe is on/off,Boolean 0: off, 1: on */
    XDAS_Bool 	antiFlickerOn;    /**< Anti Flickering mechanism on/off, 
                                 *   Boolean 0: off, 1: on
				 */
    IAWB_Mode 	mode;             /**< Auto White Balance Algorithm Running Mode
                                 *
				 */
    IAEWB_Wb  	target;           /**< Target value. It has meaning only
                                 *   in Manual mode, can be NULL in auto mode 
				 *   but cannot be NULL in manual mode
				 */
}IAWB_DynamicParams;


/**
 *  @brief      Defines the input arguments for all IAWB instance
 *              process function.
 *
 *  @extensibleStruct
 *
 *  @sa         IAWB_Fxns::process()
 */
typedef struct IAWB_InArgs {
    XDAS_Int32 		size;       /**< @sizeField */
    IAEWB_StatMat 	statMat;   	/**< Statistics Matrix */
    IAEWB_Ae 		curAe;      /**< Auto Exposure setting for the current frame */
    IAEWB_Wb 		curWb;     /**< AWB setting for the current frame */
} IAWB_InArgs;

/**
 *  @brief      Defines instance status parameters.
 *
 *  @extensibleStruct
 *
 *  @sa         IAWB_Fxns::control()
 */
typedef struct IAWB_Status {
    XDAS_Int32 size;          /**< @sizeField */
} IAWB_Status;


/**
 *  @brief      Defines the run time output arguments for all IAWB
 *              instance objects.
 *
 *  @extensibleStruct
 *
 *  @sa         IAWB_Fxns::process()
 */
typedef struct IAWB_OutArgs {
    XDAS_Int32 size;            /**< @sizeField */
    IAEWB_Wb nextWb;        /**< White Blance gain setting for the current frame */
} IAWB_OutArgs;


/**
 *  @brief      Defines the control commands for the IAWB module.
 *
 *  @remarks    This ID can be extended in IMOD interface for
 *              additional controls.
 *
 *  @sa         XDM_CmdId
 *
 *  @sa         IAWB_Fxns::control()
 */
typedef  IALG_Cmd IAWB_Cmd;

#define IAWB_CMD_SET_CONFIG		0x1
#define IAWB_CMD_GET_CONFIG		0x2


/**
 *  @brief      Defines all of the operations on IAWB objects.
 */
typedef struct IAWB_Fxns {
    IALG_Fxns   ialg;             /**< Traditional xDAIS algorithm interface. */

/**
 *  @brief      Basic auto exposure run call.
 *
 *  @param[in]  handle          Handle to an algorithm instance.
 *  @param[in]  inArgs          Input arguments.  This is a required
 *                              parameter.
 *  @param[out] outArgs         Ouput results.  This is a required parameter.
 *
 *  @pre        @c inArgs must not be NULL, and must point to a valid
 *              IAWB_InArgs structure.
 *
 *  @pre        @c outArgs must not be NULL, and must point to a valid
 *              IAWB_OutArgs structure.
 *
 *  @post       The algorithm <b>must not</b> modify the contents of
 *              @c inArgs.
 *              That is, the data and buffers pointed to by this parameter
 *              must be treated as read-only.
 *
 *
 *  @retval     IALG_EOK        Success.
 *  @retval     IALG_EFAIL      Failure.  See IAWB_OutArgs#extendedError
 *                              for more detailed further error conditions.
 */
    XDAS_Int32 (*process)(IAWB_Handle handle, IAWB_InArgs *inArgs,
        IAWB_OutArgs *outArgs, IAEWB_Rgb *rgbData, 
		void *customData);

/**
 *  @brief      Control behaviour of an algorithm.
 *
 *  @param[in]  handle          Handle to an algorithm instance.
 *  @param[in]  id              Command id.  See #XDM_CmdId.
 *  @param[in]  params          Dynamic parameters.  This is a required
 *                              parameter.
 *  @param[out] status          Output results.  This is a required parameter.
 *
 *  @pre        @c params must not be NULL, and must point to a valid
 *              IAWB_DynamicParams structure.
 *
 *  @pre        @c status must not be NULL, and must point to a valid
 *              IAWB_Status structure.
 *
 *  @post       The algorithm <b>must not</b> modify the contents of @c params.
 *              That is, the data pointed to by this parameter must be
 *              treated as read-only.
 *
 *  @retval     IALG_EOK        Success.
 *  @retval     IALG_EFAIL      Failure.  See IAWB_Status#extendedError
 *                              for more detailed further error conditions.
 */
    XDAS_Int32 (*control)(IAWB_Handle handle, IAWB_Cmd id,
        IAWB_DynamicParams *params, IAWB_Status *status);

} IAWB_Fxns;


/*@}*/

#ifdef __cplusplus
}
#endif

#endif  /* ti_xdais_dm_IAWB_ */

