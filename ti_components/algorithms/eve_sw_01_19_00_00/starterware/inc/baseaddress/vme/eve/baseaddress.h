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
 *  @Component:   EVE
 *
 *  @Filename:    baseaddress.h
 *
 *  @Description: Generic header for CONFIG view of the EVE
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
  #define CRED_BASE_OFFSET     0x40000000ul
#endif

/*-------------------------------------------------------------------------*//**
 * @DEFINITION   CRED_NUM_INSTANCES
 *
 * @BRIEF        Number of instances.
 *
 * @DESCRIPTION  total number of EVE component instances.
 *
 *//*------------------------------------------------------------------------ */
#define CRED_NUM_INSTANCES          22

/*
 * This section contains definition of macros symbols in order to avoid
 * possible re-definition of the index enum CRED_index_t in SW components.
 */
#define DMEM                                DMEM
#define WBUF                                WBUF
#define IBUFLA                              IBUFLA
#define IBUFHA                              IBUFHA
#define IBUFLB                              IBUFLB
#define IBUFHB                              IBUFHB
#define EVE_CONTROL                         EVE_CONTROL
#define TESLASS_MMU0                        TESLASS_MMU0
#define TESLASS_MMU1                        TESLASS_MMU1
#define T16                                 T16
#define VCOP                                VCOP
#define CTM                                 CTM
#define TPTC0                               TPTC0
#define TPTC1                               TPTC1
#define SMSET_CONF                          SMSET_CONF
#define SMSET_SW                            SMSET_SW
#define L2_FNOC_EVE                         L2_FNOC_EVE
#define PCACHE_RAW                          PCACHE_RAW
#define PCACHE_TAGS                         PCACHE_TAGS
#define TPCC0                               TPCC0
#define OCMCRAM                             OCMCRAM
#define MAILBOX                             MAILBOX

/*
 * This section contains definition of simple macros for physical address
 * enabling minimum code size (no need to use any of the predefined arrays)
 */
#define DMEM_U_BASE                         (CRED_BASE_OFFSET + 0x20000ul)
#define WBUF_U_BASE                         (CRED_BASE_OFFSET + 0x40000ul)
#define IBUFLA_U_BASE                       (CRED_BASE_OFFSET + 0x50000ul)
#define IBUFHA_U_BASE                       (CRED_BASE_OFFSET + 0x54000ul)
#define IBUFLB_U_BASE                       (CRED_BASE_OFFSET + 0x70000ul)
#define IBUFHB_U_BASE                       (CRED_BASE_OFFSET + 0x74000ul)
#define EVE_CONTROL_U_BASE                  (CRED_BASE_OFFSET + 0x80000ul)
#define TESLASS_MMU0_U_BASE                 (CRED_BASE_OFFSET + 0x81000ul)
#define TESLASS_MMU1_U_BASE                 (CRED_BASE_OFFSET + 0x82000ul)
#define T16_U_BASE                          (CRED_BASE_OFFSET + 0x83000ul)
#define VCOP_U_BASE                         (CRED_BASE_OFFSET + 0x84000ul)
#define CTM_U_BASE                          (CRED_BASE_OFFSET + 0x85000ul)
#define TPTC0_U_BASE                        (CRED_BASE_OFFSET + 0x86000ul)
#define TPTC1_U_BASE                        (CRED_BASE_OFFSET + 0x87000ul)
#define SMSET_CONF_U_BASE                   (CRED_BASE_OFFSET + 0x88000ul)
#define SMSET_SW_U_BASE                     (CRED_BASE_OFFSET + 0x89000ul)
#define L2_FNOC_EVE_U_BASE                  (CRED_BASE_OFFSET + 0x8A000ul)
#define PCACHE_RAW_U_BASE                   (CRED_BASE_OFFSET + 0x90000ul)
#define PCACHE_TAGS_U_BASE                  (CRED_BASE_OFFSET + 0x98000ul)
#define TPCC0_U_BASE                        (CRED_BASE_OFFSET + 0xA0000ul)
#define OCMCRAM_U_BASE                      (CRED_BASE_OFFSET + 0x00300000ul)
#define MAILBOX_U_BASE                      (CRED_BASE_OFFSET + 0x8b000ul)

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
  DMEM,                                 /* 0 : 0x20000 : EVE_DMEM */
  WBUF,                                 /* 1 : 0x40000 : EVE_DMEM */
  IBUFLA,                               /* 2 : 0x50000 : EVE_IBUFHA */
  IBUFHA,                               /* 3 : 0x54000 : EVE_IBUFHA */
  IBUFLB,                               /* 4 : 0x70000 : EVE_IBUFHA */
  IBUFHB,                               /* 5 : 0x74000 : EVE_IBUFHA */
  EVE_CONTROL,                          /* 6 : 0x80000 : EVE_CONTROL */
  TESLASS_MMU0,                         /* 7 : 0x81000 : TESLASS_MMU */
  TESLASS_MMU1,                         /* 8 : 0x82000 : TESLASS_MMU */
  T16,                                  /* 9 : 0x83000 : T16 */
  VCOP,                                 /* 10 : 0x84000 : VCOP */
  CTM,                                  /* 11 : 0x85000 : CTM */
  TPTC0,                                /* 12 : 0x86000 : TPTC */
  TPTC1,                                /* 13 : 0x87000 : TPTC */
  SMSET_CONF,                           /* 14 : 0x88000 : SMSET_CONF */
  SMSET_SW,                             /* 15 : 0x89000 : SMSET_SW */
  L2_FNOC_EVE,                          /* 16 : 0x8A000 : L2_FNOC_EVE */
  PCACHE_RAW,                           /* 17 : 0x90000 : PCACHE_RAW */
  PCACHE_TAGS,                          /* 18 : 0x98000 : PCACHE_TAGS */
  TPCC0,                                /* 19 : 0xA0000 : TPCC */
  OCMCRAM,                              /* 20 : 0x00300000 : OCMCRAM */
  MAILBOX                               /* 21 : 0x8b000 : MAILBOX */
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

