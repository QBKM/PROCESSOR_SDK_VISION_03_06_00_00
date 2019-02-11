/*
 *  Copyright (C) 2016 Texas Instruments Incorporated - http://www.ti.com/
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
 *
 */

/**
 *  \file     sbl_tda3xx_priv.h
 *
 *  \brief    This file contains the platform specific private layer of
 *            Secondary Bootloader(SBL) for tda3xx.
 *            This also contains some related macros.
 */

#ifndef SBL_TDA3XX_PRIV_H_
#define SBL_TDA3XX_PRIV_H_

/* ========================================================================== */
/*                             Include Files                                  */
/* ========================================================================== */

#include <ti/boot/sbl_auto/sbl_lib/sbl_lib.h>

#ifdef __cplusplus
extern "C" {
#endif

/* ========================================================================== */
/*                           Macros & Typedefs                                */
/* ========================================================================== */

/**
 * \brief  This macro contains the IPU MBIST data address depending on the boot
 *         mode.
 */
#if defined (BOOTMODE_NOR)
#define SBL_IPU_MBIST_DATA_ADDRESS                      ((uint32_t) 0x08060000U)
#else
#define SBL_IPU_MBIST_DATA_ADDRESS                      ((uint32_t) 0x5C060000U)
#endif

/* ========================================================================== */
/*                         Structures and Enums                               */
/* ========================================================================== */

/* None */

/* ========================================================================== */
/*                 Internal Function Declarations                             */
/* ========================================================================== */

/* None */

/* ========================================================================== */
/*                            Global Variables                                */
/* ========================================================================== */

/* None */

/* ========================================================================== */
/*                          Function Declarations                             */
/* ========================================================================== */

/**
 * \brief   This function does the PAD configuration for TI EVM.
 *
 * \param   None.
 *
 * \return  None.
 */
void SBLConfigTIEVMPad(void);

/**
 * \brief   This function copies the App Image from corresponding source
 *          depending on Boot Mode.
 *
 * \param   imageParams  Multi-core Application Image Parse Parameters.
 *                       Refer struct #sbllibAppImageParseParams_t for
 *                       details.
 *
 * \return  status       Whether Image is copied correctly
 *                       SUCCESS : Success
 *                       FAIL : Failure
 */
int32_t SBLLoadAppImage(sbllibAppImageParseParams_t *imageParams);

/**
 * \brief   This function returns the OPP ID for which the SBL has been
 *          compiled for a given package type.
 *
 * \param   packageType Parameter indicates if this is a 15x15 or a 12x12
 *                      package.
 *
 * \return  oppId       The OPP ID for which the SBL has been compiled is
 *                      returned.
 *
 * \note    12x12 package supports only OPP_NOM currently.
 */
uint32_t SBLGetOppId(uint32_t packageType);

/**
 * \brief   This function prints a warning if the OPP given is OPP_HIGH but the
 *          SBL_LIB_CONFIG_DSP_OPP_HIGH_750MHZ macro is not set to 1 for the
 *          15x15 package type.
 *
 * \param   packageType Parameter indicates if this is a 15x15 or a 12x12
 *                      package.
 *
 * \return  None
 *
 * \note    12x12 package supports only OPP_NOM currently.
 */
void SBLPrintOppWarning(uint32_t packageType);

/**
 * \brief   This function tells whether TESOC is enabled by SBL. It checks if
 *          TESOC is supported for a particular Silicon Revision and enabled by
 *          user in SBL config options. It returns TRUE if both these conditions
 *          are true, FALSE otherwise
 *
 * \param   None
 *
 * \return  isTesocEnabled          TRUE:TESOC is enabled
 *                                  FALSE:TESOC is not enabled
 */
uint32_t SBLIsTesocEnabled(void);

#ifdef __cplusplus
}

#endif

#endif
