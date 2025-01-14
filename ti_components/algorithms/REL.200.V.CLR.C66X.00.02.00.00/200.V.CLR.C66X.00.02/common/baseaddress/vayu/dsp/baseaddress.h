/*
*
* Copyright (c) 2008-2017 Texas Instruments Incorporated
*
* All rights reserved not granted herein.
*
* Limited License.
*
* Texas Instruments Incorporated grants a world-wide, royalty-free, non-exclusive
* license under copyrights and patents it now or hereafter owns or controls to make,
* have made, use, import, offer to sell and sell ("Utilize") this software subject to the
* terms herein.  With respect to the foregoing patent license, such license is granted
* solely to the extent that any such patent is necessary to Utilize the software alone.
* The patent license shall not apply to any combinations which include this software,
* other than combinations with devices manufactured by or for TI ("TI Devices").
* No hardware patent is licensed hereunder.
*
* Redistributions must preserve existing copyright notices and reproduce this license
* (including the above copyright notice and the disclaimer and (if applicable) source
* code license limitations below) in the documentation and/or other materials provided
* with the distribution
*
* Redistribution and use in binary form, without modification, are permitted provided
* that the following conditions are met:
*
* *       No reverse engineering, decompilation, or disassembly of this software is
* permitted with respect to any software provided in binary form.
*
* *       any redistribution and use are licensed by TI for use only with TI Devices.
*
* *       Nothing shall obligate TI to provide you with source code for the software
* licensed and provided to you in object code.
*
* If software source code is provided to you, modification and redistribution of the
* source code are permitted provided that the following conditions are met:
*
* *       any redistribution and use of the source code, including any resulting derivative
* works, are licensed by TI for use only with TI Devices.
*
* *       any redistribution and use of any object code compiled from the source code
* and any resulting derivative works, are licensed by TI for use only with TI Devices.
*
* Neither the name of Texas Instruments Incorporated nor the names of its suppliers
*
* may be used to endorse or promote products derived from this software without
* specific prior written permission.
*
* DISCLAIMER.
*
* THIS SOFTWARE IS PROVIDED BY TI AND TI'S LICENSORS "AS IS" AND ANY EXPRESS
* OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
* OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
* IN NO EVENT SHALL TI AND TI'S LICENSORS BE LIABLE FOR ANY DIRECT, INDIRECT,
* INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
* BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
* DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY
* OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE
* OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED
* OF THE POSSIBILITY OF SUCH DAMAGE.
*
*/



/**
 *  @Component:   EDEN
 *
 *  @Filename:    baseaddress.h
 *
 *  @Description: Generic header for CONFIG view of the EDEN
 *
 *  Generated by: Socrates CRED generator 
 *
 *//* ====================================================================== */

#ifndef __BASEADDRESS_H
#define __BASEADDRESS_H

#ifdef __cplusplus
extern "C"
{
#endif

/* =============================================================================
 * EXPORTED DEFINITIONS
 * =============================================================================
 */


/*-------------------------------------------------------------------------*//**
 * @DEFINITION   CRED_BASE_OFFSET
 *
 * @BRIEF        Base address offset
 *
 * @DESCRIPTION  Base address offset enabling address shift when defining 
 *               non-zero value. Defaulted to 0x0 here.
 *
 *//*------------------------------------------------------------------------ */
#ifndef CRED_BASE_OFFSET
  #define CRED_BASE_OFFSET     0x0ul
#endif

/*-------------------------------------------------------------------------*//**
 * @DEFINITION   CRED_NUM_INSTANCES
 *
 * @BRIEF        Number of instances.
 *
 * @DESCRIPTION  total number of EDEN component instances.
 *
 *//*------------------------------------------------------------------------ */
#define CRED_NUM_INSTANCES          108

/*
 * This section contains definition of macros symbols in order to avoid
 * possible re-definition of the index enum CRED_index_t in SW components.
 */
#define EDEN_GPIO                           EDEN_GPIO
#define GEM_TEST_DONE                       GEM_TEST_DONE
#define EVE_TEST_DONE                       EVE_TEST_DONE
#define CLKRST                              CLKRST
#define OCMCRAM                             OCMCRAM
#define EVE1__DMEM                          EVE1__DMEM
#define EVE1__WBUF                          EVE1__WBUF
#define EVE1__IBUFLA                        EVE1__IBUFLA
#define EVE1__IBUFHA                        EVE1__IBUFHA
#define EVE1__IBUFLB                        EVE1__IBUFLB
#define EVE1__IBUFHB                        EVE1__IBUFHB
#define EVE1__EVE_CONTROL                   EVE1__EVE_CONTROL
#define EVE1__MMU0                          EVE1__MMU0
#define EVE1__MMU1                          EVE1__MMU1
#define EVE1__T16                           EVE1__T16
#define EVE1__VCOP                          EVE1__VCOP
#define EVE1__CTM                           EVE1__CTM
#define EVE1__TPTC0                         EVE1__TPTC0
#define EVE1__TPTC1                         EVE1__TPTC1
#define EVE1__SMSET_CONF                    EVE1__SMSET_CONF
#define EVE1__SMSET_SW                      EVE1__SMSET_SW
#define EVE1__L2_FNOC_EVE                   EVE1__L2_FNOC_EVE
#define EVE1__MLB0                          EVE1__MLB0
#define EVE1__MLB1                          EVE1__MLB1
#define EVE1__MLB2                          EVE1__MLB2
#define EVE1__MLB3                          EVE1__MLB3
#define EVE1__MLB4                          EVE1__MLB4
#define EVE1__PCACHE_RAW                    EVE1__PCACHE_RAW
#define EVE1__PCACHE_TAGS                   EVE1__PCACHE_TAGS
#define EVE1__TPCC0                         EVE1__TPCC0
#define EVE2__DMEM                          EVE2__DMEM
#define EVE2__WBUF                          EVE2__WBUF
#define EVE2__IBUFLA                        EVE2__IBUFLA
#define EVE2__IBUFHA                        EVE2__IBUFHA
#define EVE2__IBUFLB                        EVE2__IBUFLB
#define EVE2__IBUFHB                        EVE2__IBUFHB
#define EVE2__EVE_CONTROL                   EVE2__EVE_CONTROL
#define EVE2__MMU0                          EVE2__MMU0
#define EVE2__MMU1                          EVE2__MMU1
#define EVE2__T16                           EVE2__T16
#define EVE2__VCOP                          EVE2__VCOP
#define EVE2__CTM                           EVE2__CTM
#define EVE2__TPTC0                         EVE2__TPTC0
#define EVE2__TPTC1                         EVE2__TPTC1
#define EVE2__SMSET_CONF                    EVE2__SMSET_CONF
#define EVE2__SMSET_SW                      EVE2__SMSET_SW
#define EVE2__L2_FNOC_EVE                   EVE2__L2_FNOC_EVE
#define EVE2__MLB0                          EVE2__MLB0
#define EVE2__MLB1                          EVE2__MLB1
#define EVE2__MLB2                          EVE2__MLB2
#define EVE2__MLB3                          EVE2__MLB3
#define EVE2__MLB4                          EVE2__MLB4
#define EVE2__PCACHE_RAW                    EVE2__PCACHE_RAW
#define EVE2__PCACHE_TAGS                   EVE2__PCACHE_TAGS
#define EVE2__TPCC0                         EVE2__TPCC0
#define EVE3__DMEM                          EVE3__DMEM
#define EVE3__WBUF                          EVE3__WBUF
#define EVE3__IBUFLA                        EVE3__IBUFLA
#define EVE3__IBUFHA                        EVE3__IBUFHA
#define EVE3__IBUFLB                        EVE3__IBUFLB
#define EVE3__IBUFHB                        EVE3__IBUFHB
#define EVE3__EVE_CONTROL                   EVE3__EVE_CONTROL
#define EVE3__MMU0                          EVE3__MMU0
#define EVE3__MMU1                          EVE3__MMU1
#define EVE3__T16                           EVE3__T16
#define EVE3__VCOP                          EVE3__VCOP
#define EVE3__CTM                           EVE3__CTM
#define EVE3__TPTC0                         EVE3__TPTC0
#define EVE3__TPTC1                         EVE3__TPTC1
#define EVE3__SMSET_CONF                    EVE3__SMSET_CONF
#define EVE3__SMSET_SW                      EVE3__SMSET_SW
#define EVE3__L2_FNOC_EVE                   EVE3__L2_FNOC_EVE
#define EVE3__MLB0                          EVE3__MLB0
#define EVE3__MLB1                          EVE3__MLB1
#define EVE3__MLB2                          EVE3__MLB2
#define EVE3__MLB3                          EVE3__MLB3
#define EVE3__MLB4                          EVE3__MLB4
#define EVE3__PCACHE_RAW                    EVE3__PCACHE_RAW
#define EVE3__PCACHE_TAGS                   EVE3__PCACHE_TAGS
#define EVE3__TPCC0                         EVE3__TPCC0
#define EVE4__DMEM                          EVE4__DMEM
#define EVE4__WBUF                          EVE4__WBUF
#define EVE4__IBUFLA                        EVE4__IBUFLA
#define EVE4__IBUFHA                        EVE4__IBUFHA
#define EVE4__IBUFLB                        EVE4__IBUFLB
#define EVE4__IBUFHB                        EVE4__IBUFHB
#define EVE4__EVE_CONTROL                   EVE4__EVE_CONTROL
#define EVE4__MMU0                          EVE4__MMU0
#define EVE4__MMU1                          EVE4__MMU1
#define EVE4__T16                           EVE4__T16
#define EVE4__VCOP                          EVE4__VCOP
#define EVE4__CTM                           EVE4__CTM
#define EVE4__TPTC0                         EVE4__TPTC0
#define EVE4__TPTC1                         EVE4__TPTC1
#define EVE4__SMSET_CONF                    EVE4__SMSET_CONF
#define EVE4__SMSET_SW                      EVE4__SMSET_SW
#define EVE4__L2_FNOC_EVE                   EVE4__L2_FNOC_EVE
#define EVE4__MLB0                          EVE4__MLB0
#define EVE4__MLB1                          EVE4__MLB1
#define EVE4__MLB2                          EVE4__MLB2
#define EVE4__MLB3                          EVE4__MLB3
#define EVE4__MLB4                          EVE4__MLB4
#define EVE4__PCACHE_RAW                    EVE4__PCACHE_RAW
#define EVE4__PCACHE_TAGS                   EVE4__PCACHE_TAGS
#define EVE4__TPCC0                         EVE4__TPCC0
#define MAILBOX                             MAILBOX
#define SPINLOCK                            SPINLOCK
#define EMIF4D                              EMIF4D

/*
 * This section contains definition of simple macros for physical address
 * enabling minimum code size (no need to use any of the predefined arrays)
 */
#define IC_U_BASE		            0x01800000
#define EDEN_GPIO_U_BASE                    (CRED_BASE_OFFSET + 0x8032000ul)
#define GEM_TEST_DONE_U_BASE                (CRED_BASE_OFFSET + 0x8032200ul)
#define EVE_TEST_DONE_U_BASE                (CRED_BASE_OFFSET + 0x8032800ul)
#define CLKRST_U_BASE                       (CRED_BASE_OFFSET + 0x8181800ul)
#define OCMCRAM_U_BASE                      (CRED_BASE_OFFSET + 0x40300000ul)
#define EVE1__DMEM_U_BASE                   (CRED_BASE_OFFSET + 0x42020000ul)
#define EVE1__WBUF_U_BASE                   (CRED_BASE_OFFSET + 0x42040000ul)
#define EVE1__IBUFLA_U_BASE                 (CRED_BASE_OFFSET + 0x42050000ul)
#define EVE1__IBUFHA_U_BASE                 (CRED_BASE_OFFSET + 0x42054000ul)
#define EVE1__IBUFLB_U_BASE                 (CRED_BASE_OFFSET + 0x42070000ul)
#define EVE1__IBUFHB_U_BASE                 (CRED_BASE_OFFSET + 0x42074000ul)
#define EVE1__EVE_CONTROL_U_BASE            (CRED_BASE_OFFSET + 0x42080000ul)
#define EVE1__MMU0_U_BASE                   (CRED_BASE_OFFSET + 0x42081000ul)
#define EVE1__MMU1_U_BASE                   (CRED_BASE_OFFSET + 0x42082000ul)
#define EVE1__T16_U_BASE                    (CRED_BASE_OFFSET + 0x42083000ul)
#define EVE1__VCOP_U_BASE                   (CRED_BASE_OFFSET + 0x42084000ul)
#define EVE1__CTM_U_BASE                    (CRED_BASE_OFFSET + 0x42085000ul)
#define EVE1__TPTC0_U_BASE                  (CRED_BASE_OFFSET + 0x42086000ul)
#define EVE1__TPTC1_U_BASE                  (CRED_BASE_OFFSET + 0x42087000ul)
#define EVE1__SMSET_CONF_U_BASE             (CRED_BASE_OFFSET + 0x42088000ul)
#define EVE1__SMSET_SW_U_BASE               (CRED_BASE_OFFSET + 0x42089000ul)
#define EVE1__L2_FNOC_EVE_U_BASE            (CRED_BASE_OFFSET + 0x4208A000ul)
#define EVE1__MLB0_U_BASE                   (CRED_BASE_OFFSET + 0x4208B000ul)
#define EVE1__MLB1_U_BASE                   (CRED_BASE_OFFSET + 0x4208C000ul)
#define EVE1__MLB2_U_BASE                   (CRED_BASE_OFFSET + 0x4208D000ul)
#define EVE1__MLB3_U_BASE                   (CRED_BASE_OFFSET + 0x4208E000ul)
#define EVE1__MLB4_U_BASE                   (CRED_BASE_OFFSET + 0x4208F000ul)
#define EVE1__PCACHE_RAW_U_BASE             (CRED_BASE_OFFSET + 0x42090000ul)
#define EVE1__PCACHE_TAGS_U_BASE            (CRED_BASE_OFFSET + 0x42098000ul)
#define EVE1__TPCC0_U_BASE                  (CRED_BASE_OFFSET + 0x420A0000ul)
#define EVE2__DMEM_U_BASE                   (CRED_BASE_OFFSET + 0x42120000ul)
#define EVE2__WBUF_U_BASE                   (CRED_BASE_OFFSET + 0x42140000ul)
#define EVE2__IBUFLA_U_BASE                 (CRED_BASE_OFFSET + 0x42150000ul)
#define EVE2__IBUFHA_U_BASE                 (CRED_BASE_OFFSET + 0x42154000ul)
#define EVE2__IBUFLB_U_BASE                 (CRED_BASE_OFFSET + 0x42170000ul)
#define EVE2__IBUFHB_U_BASE                 (CRED_BASE_OFFSET + 0x42174000ul)
#define EVE2__EVE_CONTROL_U_BASE            (CRED_BASE_OFFSET + 0x42180000ul)
#define EVE2__MMU0_U_BASE                   (CRED_BASE_OFFSET + 0x42181000ul)
#define EVE2__MMU1_U_BASE                   (CRED_BASE_OFFSET + 0x42182000ul)
#define EVE2__T16_U_BASE                    (CRED_BASE_OFFSET + 0x42183000ul)
#define EVE2__VCOP_U_BASE                   (CRED_BASE_OFFSET + 0x42184000ul)
#define EVE2__CTM_U_BASE                    (CRED_BASE_OFFSET + 0x42185000ul)
#define EVE2__TPTC0_U_BASE                  (CRED_BASE_OFFSET + 0x42186000ul)
#define EVE2__TPTC1_U_BASE                  (CRED_BASE_OFFSET + 0x42187000ul)
#define EVE2__SMSET_CONF_U_BASE             (CRED_BASE_OFFSET + 0x42188000ul)
#define EVE2__SMSET_SW_U_BASE               (CRED_BASE_OFFSET + 0x42189000ul)
#define EVE2__L2_FNOC_EVE_U_BASE            (CRED_BASE_OFFSET + 0x4218A000ul)
#define EVE2__MLB0_U_BASE                   (CRED_BASE_OFFSET + 0x4218B000ul)
#define EVE2__MLB1_U_BASE                   (CRED_BASE_OFFSET + 0x4218C000ul)
#define EVE2__MLB2_U_BASE                   (CRED_BASE_OFFSET + 0x4218D000ul)
#define EVE2__MLB3_U_BASE                   (CRED_BASE_OFFSET + 0x4218E000ul)
#define EVE2__MLB4_U_BASE                   (CRED_BASE_OFFSET + 0x4218F000ul)
#define EVE2__PCACHE_RAW_U_BASE             (CRED_BASE_OFFSET + 0x42190000ul)
#define EVE2__PCACHE_TAGS_U_BASE            (CRED_BASE_OFFSET + 0x42198000ul)
#define EVE2__TPCC0_U_BASE                  (CRED_BASE_OFFSET + 0x421A0000ul)
#define EVE3__DMEM_U_BASE                   (CRED_BASE_OFFSET + 0x42220000ul)
#define EVE3__WBUF_U_BASE                   (CRED_BASE_OFFSET + 0x42240000ul)
#define EVE3__IBUFLA_U_BASE                 (CRED_BASE_OFFSET + 0x42250000ul)
#define EVE3__IBUFHA_U_BASE                 (CRED_BASE_OFFSET + 0x42254000ul)
#define EVE3__IBUFLB_U_BASE                 (CRED_BASE_OFFSET + 0x42270000ul)
#define EVE3__IBUFHB_U_BASE                 (CRED_BASE_OFFSET + 0x42274000ul)
#define EVE3__EVE_CONTROL_U_BASE            (CRED_BASE_OFFSET + 0x42280000ul)
#define EVE3__MMU0_U_BASE                   (CRED_BASE_OFFSET + 0x42281000ul)
#define EVE3__MMU1_U_BASE                   (CRED_BASE_OFFSET + 0x42282000ul)
#define EVE3__T16_U_BASE                    (CRED_BASE_OFFSET + 0x42283000ul)
#define EVE3__VCOP_U_BASE                   (CRED_BASE_OFFSET + 0x42284000ul)
#define EVE3__CTM_U_BASE                    (CRED_BASE_OFFSET + 0x42285000ul)
#define EVE3__TPTC0_U_BASE                  (CRED_BASE_OFFSET + 0x42286000ul)
#define EVE3__TPTC1_U_BASE                  (CRED_BASE_OFFSET + 0x42287000ul)
#define EVE3__SMSET_CONF_U_BASE             (CRED_BASE_OFFSET + 0x42288000ul)
#define EVE3__SMSET_SW_U_BASE               (CRED_BASE_OFFSET + 0x42289000ul)
#define EVE3__L2_FNOC_EVE_U_BASE            (CRED_BASE_OFFSET + 0x4228A000ul)
#define EVE3__MLB0_U_BASE                   (CRED_BASE_OFFSET + 0x4228B000ul)
#define EVE3__MLB1_U_BASE                   (CRED_BASE_OFFSET + 0x4228C000ul)
#define EVE3__MLB2_U_BASE                   (CRED_BASE_OFFSET + 0x4228D000ul)
#define EVE3__MLB3_U_BASE                   (CRED_BASE_OFFSET + 0x4228E000ul)
#define EVE3__MLB4_U_BASE                   (CRED_BASE_OFFSET + 0x4228F000ul)
#define EVE3__PCACHE_RAW_U_BASE             (CRED_BASE_OFFSET + 0x42290000ul)
#define EVE3__PCACHE_TAGS_U_BASE            (CRED_BASE_OFFSET + 0x42298000ul)
#define EVE3__TPCC0_U_BASE                  (CRED_BASE_OFFSET + 0x422A0000ul)
#define EVE4__DMEM_U_BASE                   (CRED_BASE_OFFSET + 0x42320000ul)
#define EVE4__WBUF_U_BASE                   (CRED_BASE_OFFSET + 0x42340000ul)
#define EVE4__IBUFLA_U_BASE                 (CRED_BASE_OFFSET + 0x42350000ul)
#define EVE4__IBUFHA_U_BASE                 (CRED_BASE_OFFSET + 0x42354000ul)
#define EVE4__IBUFLB_U_BASE                 (CRED_BASE_OFFSET + 0x42370000ul)
#define EVE4__IBUFHB_U_BASE                 (CRED_BASE_OFFSET + 0x42374000ul)
#define EVE4__EVE_CONTROL_U_BASE            (CRED_BASE_OFFSET + 0x42380000ul)
#define EVE4__MMU0_U_BASE                   (CRED_BASE_OFFSET + 0x42381000ul)
#define EVE4__MMU1_U_BASE                   (CRED_BASE_OFFSET + 0x42382000ul)
#define EVE4__T16_U_BASE                    (CRED_BASE_OFFSET + 0x42383000ul)
#define EVE4__VCOP_U_BASE                   (CRED_BASE_OFFSET + 0x42384000ul)
#define EVE4__CTM_U_BASE                    (CRED_BASE_OFFSET + 0x42385000ul)
#define EVE4__TPTC0_U_BASE                  (CRED_BASE_OFFSET + 0x42386000ul)
#define EVE4__TPTC1_U_BASE                  (CRED_BASE_OFFSET + 0x42387000ul)
#define EVE4__SMSET_CONF_U_BASE             (CRED_BASE_OFFSET + 0x42388000ul)
#define EVE4__SMSET_SW_U_BASE               (CRED_BASE_OFFSET + 0x42389000ul)
#define EVE4__L2_FNOC_EVE_U_BASE            (CRED_BASE_OFFSET + 0x4238A000ul)
#define EVE4__MLB0_U_BASE                   (CRED_BASE_OFFSET + 0x4238B000ul)
#define EVE4__MLB1_U_BASE                   (CRED_BASE_OFFSET + 0x4238C000ul)
#define EVE4__MLB2_U_BASE                   (CRED_BASE_OFFSET + 0x4238D000ul)
#define EVE4__MLB3_U_BASE                   (CRED_BASE_OFFSET + 0x4238E000ul)
#define EVE4__MLB4_U_BASE                   (CRED_BASE_OFFSET + 0x4238F000ul)
#define EVE4__PCACHE_RAW_U_BASE             (CRED_BASE_OFFSET + 0x42390000ul)
#define EVE4__PCACHE_TAGS_U_BASE            (CRED_BASE_OFFSET + 0x42398000ul)
#define EVE4__TPCC0_U_BASE                  (CRED_BASE_OFFSET + 0x423A0000ul)
#define MAILBOX_U_BASE                      (CRED_BASE_OFFSET + 0x480C8000ul)
#define SPINLOCK_U_BASE                     (CRED_BASE_OFFSET + 0x480CA000ul)
#define EMIF4D_U_BASE                       (CRED_BASE_OFFSET + 0x4C000000ul)

/* =============================================================================
 * EXPORTED TYPES
 * =============================================================================
 */

/*-------------------------------------------------------------------------*//**
 * @TYPE         CRED_instances_t
 *
 * @BRIEF        Component instance information.
 *
 * @DESCRIPTION  Variable of this type stores pointer to component instance 
 *               virtual address, physical address and its name string.
 *
 *//*------------------------------------------------------------------------ */

typedef struct t_CRED_instances_label
{
  REG_UWORD32       *virtAddr;  /** Virtual address - programmable */
  const REG_UWORD32 physAddr;   /** Physical address - fixed */
  UWORD32           size;       /** Size in Bytes */
  const char        *name;      /** Name string */
} CRED_instances_t;

/*-------------------------------------------------------------------------*//**
 * @TYPE         CRED_index_t
 *
 * @BRIEF        Index to component-instance arrays.
 *
 * @DESCRIPTION  This is enumeration of all the component instances which 
 *               allows indexing the component-instance arrays with instance
 *               name identifier.
 *
 *//*------------------------------------------------------------------------ */

typedef enum CRED_index_label
{
  EDEN_GPIO,                            /* 0 : 0x8032000 : EDEN_GPIO */
  GEM_TEST_DONE,                        /* 1 : 0x8032200 : EDEN_TEST_DONE */
  EVE_TEST_DONE,                        /* 2 : 0x8032800 : EDEN_TEST_DONE */
  CLKRST,                               /* 3 : 0x8181800 : EDEN_CLKRST */
  OCMCRAM,                              /* 4 : 0x40300000 : OCMCRAM */
  EVE1__DMEM,                           /* 5 : 0x42020000 : EVE_DMEM */
  EVE1__WBUF,                           /* 6 : 0x42040000 : EVE_DMEM */
  EVE1__IBUFLA,                         /* 7 : 0x42050000 : EVE_IBUFHA */
  EVE1__IBUFHA,                         /* 8 : 0x42054000 : EVE_IBUFHA */
  EVE1__IBUFLB,                         /* 9 : 0x42070000 : EVE_IBUFHA */
  EVE1__IBUFHB,                         /* 10 : 0x42074000 : EVE_IBUFHA */
  EVE1__EVE_CONTROL,                    /* 11 : 0x42080000 : EVE_CONTROL */
  EVE1__MMU0,                           /* 12 : 0x42081000 : MMU */
  EVE1__MMU1,                           /* 13 : 0x42082000 : MMU */
  EVE1__T16,                            /* 14 : 0x42083000 : T16 */
  EVE1__VCOP,                           /* 15 : 0x42084000 : VCOP */
  EVE1__CTM,                            /* 16 : 0x42085000 : CTM */
  EVE1__TPTC0,                          /* 17 : 0x42086000 : TPTC */
  EVE1__TPTC1,                          /* 18 : 0x42087000 : TPTC */
  EVE1__SMSET_CONF,                     /* 19 : 0x42088000 : SMSET_CONF */
  EVE1__SMSET_SW,                       /* 20 : 0x42089000 : SMSET_SW */
  EVE1__L2_FNOC_EVE,                    /* 21 : 0x4208A000 : L2_FNOC_EVE */
  EVE1__MLB0,                           /* 22 : 0x4208B000 : MLB */
  EVE1__MLB1,                           /* 23 : 0x4208C000 : MLB */
  EVE1__MLB2,                           /* 24 : 0x4208D000 : MLB */
  EVE1__MLB3,                           /* 25 : 0x4208E000 : MLB */
  EVE1__MLB4,                           /* 26 : 0x4208F000 : MLB */
  EVE1__PCACHE_RAW,                     /* 27 : 0x42090000 : PCACHE_RAW */
  EVE1__PCACHE_TAGS,                    /* 28 : 0x42098000 : PCACHE_TAGS */
  EVE1__TPCC0,                          /* 29 : 0x420A0000 : TPCC */
  EVE2__DMEM,                           /* 30 : 0x42120000 : EVE_DMEM */
  EVE2__WBUF,                           /* 31 : 0x42140000 : EVE_DMEM */
  EVE2__IBUFLA,                         /* 32 : 0x42150000 : EVE_IBUFHA */
  EVE2__IBUFHA,                         /* 33 : 0x42154000 : EVE_IBUFHA */
  EVE2__IBUFLB,                         /* 34 : 0x42170000 : EVE_IBUFHA */
  EVE2__IBUFHB,                         /* 35 : 0x42174000 : EVE_IBUFHA */
  EVE2__EVE_CONTROL,                    /* 36 : 0x42180000 : EVE_CONTROL */
  EVE2__MMU0,                           /* 37 : 0x42181000 : MMU */
  EVE2__MMU1,                           /* 38 : 0x42182000 : MMU */
  EVE2__T16,                            /* 39 : 0x42183000 : T16 */
  EVE2__VCOP,                           /* 40 : 0x42184000 : VCOP */
  EVE2__CTM,                            /* 41 : 0x42185000 : CTM */
  EVE2__TPTC0,                          /* 42 : 0x42186000 : TPTC */
  EVE2__TPTC1,                          /* 43 : 0x42187000 : TPTC */
  EVE2__SMSET_CONF,                     /* 44 : 0x42188000 : SMSET_CONF */
  EVE2__SMSET_SW,                       /* 45 : 0x42189000 : SMSET_SW */
  EVE2__L2_FNOC_EVE,                    /* 46 : 0x4218A000 : L2_FNOC_EVE */
  EVE2__MLB0,                           /* 47 : 0x4218B000 : MLB */
  EVE2__MLB1,                           /* 48 : 0x4218C000 : MLB */
  EVE2__MLB2,                           /* 49 : 0x4218D000 : MLB */
  EVE2__MLB3,                           /* 50 : 0x4218E000 : MLB */
  EVE2__MLB4,                           /* 51 : 0x4218F000 : MLB */
  EVE2__PCACHE_RAW,                     /* 52 : 0x42190000 : PCACHE_RAW */
  EVE2__PCACHE_TAGS,                    /* 53 : 0x42198000 : PCACHE_TAGS */
  EVE2__TPCC0,                          /* 54 : 0x421A0000 : TPCC */
  EVE3__DMEM,                           /* 55 : 0x42220000 : EVE_DMEM */
  EVE3__WBUF,                           /* 56 : 0x42240000 : EVE_DMEM */
  EVE3__IBUFLA,                         /* 57 : 0x42250000 : EVE_IBUFHA */
  EVE3__IBUFHA,                         /* 58 : 0x42254000 : EVE_IBUFHA */
  EVE3__IBUFLB,                         /* 59 : 0x42270000 : EVE_IBUFHA */
  EVE3__IBUFHB,                         /* 60 : 0x42274000 : EVE_IBUFHA */
  EVE3__EVE_CONTROL,                    /* 61 : 0x42280000 : EVE_CONTROL */
  EVE3__MMU0,                           /* 62 : 0x42281000 : MMU */
  EVE3__MMU1,                           /* 63 : 0x42282000 : MMU */
  EVE3__T16,                            /* 64 : 0x42283000 : T16 */
  EVE3__VCOP,                           /* 65 : 0x42284000 : VCOP */
  EVE3__CTM,                            /* 66 : 0x42285000 : CTM */
  EVE3__TPTC0,                          /* 67 : 0x42286000 : TPTC */
  EVE3__TPTC1,                          /* 68 : 0x42287000 : TPTC */
  EVE3__SMSET_CONF,                     /* 69 : 0x42288000 : SMSET_CONF */
  EVE3__SMSET_SW,                       /* 70 : 0x42289000 : SMSET_SW */
  EVE3__L2_FNOC_EVE,                    /* 71 : 0x4228A000 : L2_FNOC_EVE */
  EVE3__MLB0,                           /* 72 : 0x4228B000 : MLB */
  EVE3__MLB1,                           /* 73 : 0x4228C000 : MLB */
  EVE3__MLB2,                           /* 74 : 0x4228D000 : MLB */
  EVE3__MLB3,                           /* 75 : 0x4228E000 : MLB */
  EVE3__MLB4,                           /* 76 : 0x4228F000 : MLB */
  EVE3__PCACHE_RAW,                     /* 77 : 0x42290000 : PCACHE_RAW */
  EVE3__PCACHE_TAGS,                    /* 78 : 0x42298000 : PCACHE_TAGS */
  EVE3__TPCC0,                          /* 79 : 0x422A0000 : TPCC */
  EVE4__DMEM,                           /* 80 : 0x42320000 : EVE_DMEM */
  EVE4__WBUF,                           /* 81 : 0x42340000 : EVE_DMEM */
  EVE4__IBUFLA,                         /* 82 : 0x42350000 : EVE_IBUFHA */
  EVE4__IBUFHA,                         /* 83 : 0x42354000 : EVE_IBUFHA */
  EVE4__IBUFLB,                         /* 84 : 0x42370000 : EVE_IBUFHA */
  EVE4__IBUFHB,                         /* 85 : 0x42374000 : EVE_IBUFHA */
  EVE4__EVE_CONTROL,                    /* 86 : 0x42380000 : EVE_CONTROL */
  EVE4__MMU0,                           /* 87 : 0x42381000 : MMU */
  EVE4__MMU1,                           /* 88 : 0x42382000 : MMU */
  EVE4__T16,                            /* 89 : 0x42383000 : T16 */
  EVE4__VCOP,                           /* 90 : 0x42384000 : VCOP */
  EVE4__CTM,                            /* 91 : 0x42385000 : CTM */
  EVE4__TPTC0,                          /* 92 : 0x42386000 : TPTC */
  EVE4__TPTC1,                          /* 93 : 0x42387000 : TPTC */
  EVE4__SMSET_CONF,                     /* 94 : 0x42388000 : SMSET_CONF */
  EVE4__SMSET_SW,                       /* 95 : 0x42389000 : SMSET_SW */
  EVE4__L2_FNOC_EVE,                    /* 96 : 0x4238A000 : L2_FNOC_EVE */
  EVE4__MLB0,                           /* 97 : 0x4238B000 : MLB */
  EVE4__MLB1,                           /* 98 : 0x4238C000 : MLB */
  EVE4__MLB2,                           /* 99 : 0x4238D000 : MLB */
  EVE4__MLB3,                           /* 100 : 0x4238E000 : MLB */
  EVE4__MLB4,                           /* 101 : 0x4238F000 : MLB */
  EVE4__PCACHE_RAW,                     /* 102 : 0x42390000 : PCACHE_RAW */
  EVE4__PCACHE_TAGS,                    /* 103 : 0x42398000 : PCACHE_TAGS */
  EVE4__TPCC0,                          /* 104 : 0x423A0000 : TPCC */
  MAILBOX,                              /* 105 : 0x480C8000 : MAILBOX */
  SPINLOCK,                             /* 106 : 0x480CA000 : SPINLOCK */
  EMIF4D                                /* 107 : 0x4C000000 : EMIF4D */
} CRED_index_t;

/* =============================================================================
 * EXPORTED VARIABLES
 * =============================================================================
 */

/*-------------------------------------------------------------------------*//**
 * @VARIABLE     CRED_instVirtAddr
 *
 * @BRIEF        Component-instance virtual address array.
 *
 * @DESCRIPTION  Array of virual addresses of all component instances.
 *               The array is initialized with physical addresses, it is
 *               supposed to be changed according to MMU programming.
 *
 *//*------------------------------------------------------------------------ */
extern REG_UWORD32 CRED_instVirtAddr[CRED_NUM_INSTANCES];

/*-------------------------------------------------------------------------*//**
 * @VARIABLE     CRED_instPhysAddr
 *
 * @BRIEF        Component-instance physical address array.
 *
 * @DESCRIPTION  Array of physical addresses of all component instances.
 *               The array is having const members therefore it cannot be
 *               changed by the SW.
 *
 *//*------------------------------------------------------------------------ */
extern const REG_UWORD32 CRED_instPhysAddr[CRED_NUM_INSTANCES];

/*-------------------------------------------------------------------------*//**
 * @VARIABLE     CRED_instName
 *
 * @BRIEF        Component-instance name array.
 *
 * @DESCRIPTION  Array of all component instance names.
 *               The array can be used for debug purpose.
 *
 *//*------------------------------------------------------------------------ */
extern const char* CRED_instName[CRED_NUM_INSTANCES];

/*-------------------------------------------------------------------------*//**
 * @VARIABLE     CRED_instances
 *
 * @BRIEF        Component-instances array.
 *
 * @DESCRIPTION  Array of structures of all component instance information - 
 *               virtual & physical addresses, size and name.
 *               The virtual address is a pointer initialized as corresponding
 *               member in CRED_instVirtAddr array. This mechanism makes sure
 *               the addresses are synchronized between the two arrays and stored
 *               in one place only.
 *
 *//*------------------------------------------------------------------------ */
extern const CRED_instances_t CRED_instances[CRED_NUM_INSTANCES];

#ifdef __cplusplus
}
#endif
#endif  /* __BASEADDRESS_H */

