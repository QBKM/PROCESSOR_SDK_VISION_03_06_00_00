/*
 *  Do not modify this file; it is automatically 
 *  generated and any modifications will be overwritten.
 *
 * @(#) xdc-A71
 */

/*
 * ======== GENERATED SECTIONS ========
 *     
 *     PROLOGUE
 *     INCLUDES
 *     
 *     INTERNAL DEFINITIONS
 *     MODULE-WIDE CONFIGS
 *     FUNCTION DECLARATIONS
 *     SYSTEM FUNCTIONS
 *     
 *     EPILOGUE
 *     STATE STRUCTURES
 *     PREFIX ALIASES
 */


/*
 * ======== PROLOGUE ========
 */

#ifndef ti_sysbios_family_c64p_MemoryProtect__include
#define ti_sysbios_family_c64p_MemoryProtect__include

#ifndef __nested__
#define __nested__
#define ti_sysbios_family_c64p_MemoryProtect__top__
#endif

#ifdef __cplusplus
#define __extern extern "C"
#else
#define __extern extern
#endif

#define ti_sysbios_family_c64p_MemoryProtect___VERS 160


/*
 * ======== INCLUDES ========
 */

#include <xdc/std.h>

#include <xdc/runtime/xdc.h>
#include <xdc/runtime/Types.h>
#include <ti/sysbios/family/c64p/package/package.defs.h>

#include <xdc/runtime/IModule.h>


/*
 * ======== AUXILIARY DEFINITIONS ========
 */

/* MPPA_UX */
#define ti_sysbios_family_c64p_MemoryProtect_MPPA_UX (0x00000001)

/* MPPA_UW */
#define ti_sysbios_family_c64p_MemoryProtect_MPPA_UW (0x00000002)

/* MPPA_UR */
#define ti_sysbios_family_c64p_MemoryProtect_MPPA_UR (0x00000004)

/* MPPA_SX */
#define ti_sysbios_family_c64p_MemoryProtect_MPPA_SX (0x00000008)

/* MPPA_SW */
#define ti_sysbios_family_c64p_MemoryProtect_MPPA_SW (0x00000010)

/* MPPA_SR */
#define ti_sysbios_family_c64p_MemoryProtect_MPPA_SR (0x00000020)

/* MPPA_LOCAL */
#define ti_sysbios_family_c64p_MemoryProtect_MPPA_LOCAL (0x00000100)


/*
 * ======== INTERNAL DEFINITIONS ========
 */

/* BitRange */
struct ti_sysbios_family_c64p_MemoryProtect_BitRange {
    xdc_Char msb;
    xdc_Char lsb;
};

/* Lock */
struct ti_sysbios_family_c64p_MemoryProtect_Lock {
    volatile xdc_UInt32 mpLk0;
    volatile xdc_UInt32 mpLk1;
    volatile xdc_UInt32 mpLk2;
    volatile xdc_UInt32 mpLk3;
    volatile xdc_UInt32 mpLkCmd;
    volatile xdc_UInt32 mpLkStat;
};

/* Fault */
struct ti_sysbios_family_c64p_MemoryProtect_Fault {
    volatile xdc_UInt32 mpFar;
    volatile xdc_UInt32 mpFsr;
    volatile xdc_UInt32 mpFcr;
};

/* Key */
struct ti_sysbios_family_c64p_MemoryProtect_Key {
    xdc_UInt32 key0;
    xdc_UInt32 key1;
    xdc_UInt32 key2;
    xdc_UInt32 key3;
};

/* Controller */
struct ti_sysbios_family_c64p_MemoryProtect_Controller {
    ti_sysbios_family_c64p_MemoryProtect_Fault *mpFault;
    ti_sysbios_family_c64p_MemoryProtect_Lock *mpLck;
    xdc_UInt32 *mppaTab;
    xdc_UInt32 *mpCfg;
    xdc_UInt32 nPages;
    xdc_UInt32 evtNum;
};

/* NONE */
#define ti_sysbios_family_c64p_MemoryProtect_NONE (0)

/* UMAP0 */
#define ti_sysbios_family_c64p_MemoryProtect_UMAP0 (1)

/* UMAP1 */
#define ti_sysbios_family_c64p_MemoryProtect_UMAP1 (2)

/* DMC */
#define ti_sysbios_family_c64p_MemoryProtect_DMC (3)

/* PMC */
#define ti_sysbios_family_c64p_MemoryProtect_PMC (4)

/* UMC */
#define ti_sysbios_family_c64p_MemoryProtect_UMC (1)

/* LCKUNLOCK */
#define ti_sysbios_family_c64p_MemoryProtect_LCKUNLOCK (0x00000001)

/* LCKLOCK */
#define ti_sysbios_family_c64p_MemoryProtect_LCKLOCK (0x00000002)

/* LCKKEYR */
#define ti_sysbios_family_c64p_MemoryProtect_LCKKEYR (0x00000004)

/* LKSTATLK */
#define ti_sysbios_family_c64p_MemoryProtect_LKSTATLK (0x00000001)

/* Module_State */
typedef ti_sysbios_family_c64p_MemoryProtect_Controller *__T1_ti_sysbios_family_c64p_MemoryProtect_Module_State__controllers;
typedef ti_sysbios_family_c64p_MemoryProtect_Controller **__ARRAY1_ti_sysbios_family_c64p_MemoryProtect_Module_State__controllers;
typedef __ARRAY1_ti_sysbios_family_c64p_MemoryProtect_Module_State__controllers __TA_ti_sysbios_family_c64p_MemoryProtect_Module_State__controllers;


/*
 * ======== MODULE-WIDE CONFIGS ========
 */

/* Module__diagsEnabled */
typedef xdc_Bits32 CT__ti_sysbios_family_c64p_MemoryProtect_Module__diagsEnabled;
__extern __FAR__ const CT__ti_sysbios_family_c64p_MemoryProtect_Module__diagsEnabled ti_sysbios_family_c64p_MemoryProtect_Module__diagsEnabled__C;

/* Module__diagsIncluded */
typedef xdc_Bits32 CT__ti_sysbios_family_c64p_MemoryProtect_Module__diagsIncluded;
__extern __FAR__ const CT__ti_sysbios_family_c64p_MemoryProtect_Module__diagsIncluded ti_sysbios_family_c64p_MemoryProtect_Module__diagsIncluded__C;

/* Module__diagsMask */
typedef xdc_Bits16 *CT__ti_sysbios_family_c64p_MemoryProtect_Module__diagsMask;
__extern __FAR__ const CT__ti_sysbios_family_c64p_MemoryProtect_Module__diagsMask ti_sysbios_family_c64p_MemoryProtect_Module__diagsMask__C;

/* Module__gateObj */
typedef xdc_Ptr CT__ti_sysbios_family_c64p_MemoryProtect_Module__gateObj;
__extern __FAR__ const CT__ti_sysbios_family_c64p_MemoryProtect_Module__gateObj ti_sysbios_family_c64p_MemoryProtect_Module__gateObj__C;

/* Module__gatePrms */
typedef xdc_Ptr CT__ti_sysbios_family_c64p_MemoryProtect_Module__gatePrms;
__extern __FAR__ const CT__ti_sysbios_family_c64p_MemoryProtect_Module__gatePrms ti_sysbios_family_c64p_MemoryProtect_Module__gatePrms__C;

/* Module__id */
typedef xdc_runtime_Types_ModuleId CT__ti_sysbios_family_c64p_MemoryProtect_Module__id;
__extern __FAR__ const CT__ti_sysbios_family_c64p_MemoryProtect_Module__id ti_sysbios_family_c64p_MemoryProtect_Module__id__C;

/* Module__loggerDefined */
typedef xdc_Bool CT__ti_sysbios_family_c64p_MemoryProtect_Module__loggerDefined;
__extern __FAR__ const CT__ti_sysbios_family_c64p_MemoryProtect_Module__loggerDefined ti_sysbios_family_c64p_MemoryProtect_Module__loggerDefined__C;

/* Module__loggerObj */
typedef xdc_Ptr CT__ti_sysbios_family_c64p_MemoryProtect_Module__loggerObj;
__extern __FAR__ const CT__ti_sysbios_family_c64p_MemoryProtect_Module__loggerObj ti_sysbios_family_c64p_MemoryProtect_Module__loggerObj__C;

/* Module__loggerFxn0 */
typedef xdc_runtime_Types_LoggerFxn0 CT__ti_sysbios_family_c64p_MemoryProtect_Module__loggerFxn0;
__extern __FAR__ const CT__ti_sysbios_family_c64p_MemoryProtect_Module__loggerFxn0 ti_sysbios_family_c64p_MemoryProtect_Module__loggerFxn0__C;

/* Module__loggerFxn1 */
typedef xdc_runtime_Types_LoggerFxn1 CT__ti_sysbios_family_c64p_MemoryProtect_Module__loggerFxn1;
__extern __FAR__ const CT__ti_sysbios_family_c64p_MemoryProtect_Module__loggerFxn1 ti_sysbios_family_c64p_MemoryProtect_Module__loggerFxn1__C;

/* Module__loggerFxn2 */
typedef xdc_runtime_Types_LoggerFxn2 CT__ti_sysbios_family_c64p_MemoryProtect_Module__loggerFxn2;
__extern __FAR__ const CT__ti_sysbios_family_c64p_MemoryProtect_Module__loggerFxn2 ti_sysbios_family_c64p_MemoryProtect_Module__loggerFxn2__C;

/* Module__loggerFxn4 */
typedef xdc_runtime_Types_LoggerFxn4 CT__ti_sysbios_family_c64p_MemoryProtect_Module__loggerFxn4;
__extern __FAR__ const CT__ti_sysbios_family_c64p_MemoryProtect_Module__loggerFxn4 ti_sysbios_family_c64p_MemoryProtect_Module__loggerFxn4__C;

/* Module__loggerFxn8 */
typedef xdc_runtime_Types_LoggerFxn8 CT__ti_sysbios_family_c64p_MemoryProtect_Module__loggerFxn8;
__extern __FAR__ const CT__ti_sysbios_family_c64p_MemoryProtect_Module__loggerFxn8 ti_sysbios_family_c64p_MemoryProtect_Module__loggerFxn8__C;

/* Module__startupDoneFxn */
typedef xdc_Bool (*CT__ti_sysbios_family_c64p_MemoryProtect_Module__startupDoneFxn)(void);
__extern __FAR__ const CT__ti_sysbios_family_c64p_MemoryProtect_Module__startupDoneFxn ti_sysbios_family_c64p_MemoryProtect_Module__startupDoneFxn__C;

/* Object__count */
typedef xdc_Int CT__ti_sysbios_family_c64p_MemoryProtect_Object__count;
__extern __FAR__ const CT__ti_sysbios_family_c64p_MemoryProtect_Object__count ti_sysbios_family_c64p_MemoryProtect_Object__count__C;

/* Object__heap */
typedef xdc_runtime_IHeap_Handle CT__ti_sysbios_family_c64p_MemoryProtect_Object__heap;
__extern __FAR__ const CT__ti_sysbios_family_c64p_MemoryProtect_Object__heap ti_sysbios_family_c64p_MemoryProtect_Object__heap__C;

/* Object__sizeof */
typedef xdc_SizeT CT__ti_sysbios_family_c64p_MemoryProtect_Object__sizeof;
__extern __FAR__ const CT__ti_sysbios_family_c64p_MemoryProtect_Object__sizeof ti_sysbios_family_c64p_MemoryProtect_Object__sizeof__C;

/* Object__table */
typedef xdc_Ptr CT__ti_sysbios_family_c64p_MemoryProtect_Object__table;
__extern __FAR__ const CT__ti_sysbios_family_c64p_MemoryProtect_Object__table ti_sysbios_family_c64p_MemoryProtect_Object__table__C;

/* key */
#define ti_sysbios_family_c64p_MemoryProtect_key (ti_sysbios_family_c64p_MemoryProtect_key__C)
typedef ti_sysbios_family_c64p_MemoryProtect_Key CT__ti_sysbios_family_c64p_MemoryProtect_key;
__extern __FAR__ const CT__ti_sysbios_family_c64p_MemoryProtect_key ti_sysbios_family_c64p_MemoryProtect_key__C;

/* regExtMasks */
#define ti_sysbios_family_c64p_MemoryProtect_regExtMasks (ti_sysbios_family_c64p_MemoryProtect_regExtMasks__C)
typedef ti_sysbios_family_c64p_MemoryProtect_BitRange __T1_ti_sysbios_family_c64p_MemoryProtect_regExtMasks;
typedef ti_sysbios_family_c64p_MemoryProtect_BitRange __ARRAY1_ti_sysbios_family_c64p_MemoryProtect_regExtMasks[2];
typedef __ARRAY1_ti_sysbios_family_c64p_MemoryProtect_regExtMasks __T2_ti_sysbios_family_c64p_MemoryProtect_regExtMasks;
typedef ti_sysbios_family_c64p_MemoryProtect_BitRange __ARRAY2_ti_sysbios_family_c64p_MemoryProtect_regExtMasks[4][2];
typedef __ARRAY2_ti_sysbios_family_c64p_MemoryProtect_regExtMasks __TA_ti_sysbios_family_c64p_MemoryProtect_regExtMasks;
typedef __TA_ti_sysbios_family_c64p_MemoryProtect_regExtMasks CT__ti_sysbios_family_c64p_MemoryProtect_regExtMasks;
__extern __FAR__ const CT__ti_sysbios_family_c64p_MemoryProtect_regExtMasks ti_sysbios_family_c64p_MemoryProtect_regExtMasks__C;

/* megaByte2MPC */
#define ti_sysbios_family_c64p_MemoryProtect_megaByte2MPC (ti_sysbios_family_c64p_MemoryProtect_megaByte2MPC__C)
typedef xdc_Char __T1_ti_sysbios_family_c64p_MemoryProtect_megaByte2MPC;
typedef xdc_Char __ARRAY1_ti_sysbios_family_c64p_MemoryProtect_megaByte2MPC[16];
typedef __ARRAY1_ti_sysbios_family_c64p_MemoryProtect_megaByte2MPC __TA_ti_sysbios_family_c64p_MemoryProtect_megaByte2MPC;
typedef __TA_ti_sysbios_family_c64p_MemoryProtect_megaByte2MPC CT__ti_sysbios_family_c64p_MemoryProtect_megaByte2MPC;
__extern __FAR__ const CT__ti_sysbios_family_c64p_MemoryProtect_megaByte2MPC ti_sysbios_family_c64p_MemoryProtect_megaByte2MPC__C;

/* regionCompare */
#define ti_sysbios_family_c64p_MemoryProtect_regionCompare (ti_sysbios_family_c64p_MemoryProtect_regionCompare__C)
typedef xdc_UInt __T1_ti_sysbios_family_c64p_MemoryProtect_regionCompare;
typedef xdc_UInt __ARRAY1_ti_sysbios_family_c64p_MemoryProtect_regionCompare[4];
typedef __ARRAY1_ti_sysbios_family_c64p_MemoryProtect_regionCompare __TA_ti_sysbios_family_c64p_MemoryProtect_regionCompare;
typedef __TA_ti_sysbios_family_c64p_MemoryProtect_regionCompare CT__ti_sysbios_family_c64p_MemoryProtect_regionCompare;
__extern __FAR__ const CT__ti_sysbios_family_c64p_MemoryProtect_regionCompare ti_sysbios_family_c64p_MemoryProtect_regionCompare__C;

/* regionEnd */
#define ti_sysbios_family_c64p_MemoryProtect_regionEnd (ti_sysbios_family_c64p_MemoryProtect_regionEnd__C)
typedef xdc_UInt __T1_ti_sysbios_family_c64p_MemoryProtect_regionEnd;
typedef xdc_UInt __ARRAY1_ti_sysbios_family_c64p_MemoryProtect_regionEnd[4];
typedef __ARRAY1_ti_sysbios_family_c64p_MemoryProtect_regionEnd __TA_ti_sysbios_family_c64p_MemoryProtect_regionEnd;
typedef __TA_ti_sysbios_family_c64p_MemoryProtect_regionEnd CT__ti_sysbios_family_c64p_MemoryProtect_regionEnd;
__extern __FAR__ const CT__ti_sysbios_family_c64p_MemoryProtect_regionEnd ti_sysbios_family_c64p_MemoryProtect_regionEnd__C;

/* pmcCtrl */
#define ti_sysbios_family_c64p_MemoryProtect_pmcCtrl (ti_sysbios_family_c64p_MemoryProtect_pmcCtrl__C)
typedef ti_sysbios_family_c64p_MemoryProtect_Controller CT__ti_sysbios_family_c64p_MemoryProtect_pmcCtrl;
__extern __FAR__ const CT__ti_sysbios_family_c64p_MemoryProtect_pmcCtrl ti_sysbios_family_c64p_MemoryProtect_pmcCtrl__C;

/* dmcCtrl */
#define ti_sysbios_family_c64p_MemoryProtect_dmcCtrl (ti_sysbios_family_c64p_MemoryProtect_dmcCtrl__C)
typedef ti_sysbios_family_c64p_MemoryProtect_Controller CT__ti_sysbios_family_c64p_MemoryProtect_dmcCtrl;
__extern __FAR__ const CT__ti_sysbios_family_c64p_MemoryProtect_dmcCtrl ti_sysbios_family_c64p_MemoryProtect_dmcCtrl__C;

/* umcCtrl */
#define ti_sysbios_family_c64p_MemoryProtect_umcCtrl (ti_sysbios_family_c64p_MemoryProtect_umcCtrl__C)
typedef ti_sysbios_family_c64p_MemoryProtect_Controller CT__ti_sysbios_family_c64p_MemoryProtect_umcCtrl;
__extern __FAR__ const CT__ti_sysbios_family_c64p_MemoryProtect_umcCtrl ti_sysbios_family_c64p_MemoryProtect_umcCtrl__C;


/*
 * ======== FUNCTION DECLARATIONS ========
 */

/* Module_startup */
#define ti_sysbios_family_c64p_MemoryProtect_Module_startup ti_sysbios_family_c64p_MemoryProtect_Module_startup__E
xdc__CODESECT(ti_sysbios_family_c64p_MemoryProtect_Module_startup__E, "ti_sysbios_family_c64p_MemoryProtect_Module_startup")
__extern xdc_Int ti_sysbios_family_c64p_MemoryProtect_Module_startup__E( xdc_Int state );
xdc__CODESECT(ti_sysbios_family_c64p_MemoryProtect_Module_startup__F, "ti_sysbios_family_c64p_MemoryProtect_Module_startup")
__extern xdc_Int ti_sysbios_family_c64p_MemoryProtect_Module_startup__F( xdc_Int state );

/* Module__startupDone__S */
xdc__CODESECT(ti_sysbios_family_c64p_MemoryProtect_Module__startupDone__S, "ti_sysbios_family_c64p_MemoryProtect_Module__startupDone__S")
__extern xdc_Bool ti_sysbios_family_c64p_MemoryProtect_Module__startupDone__S( void );

/* getPA__E */
#define ti_sysbios_family_c64p_MemoryProtect_getPA ti_sysbios_family_c64p_MemoryProtect_getPA__E
xdc__CODESECT(ti_sysbios_family_c64p_MemoryProtect_getPA__E, "ti_sysbios_family_c64p_MemoryProtect_getPA")
__extern xdc_Bool ti_sysbios_family_c64p_MemoryProtect_getPA__E( xdc_Ptr addr, xdc_UInt32 *paMask );

/* setPA__E */
#define ti_sysbios_family_c64p_MemoryProtect_setPA ti_sysbios_family_c64p_MemoryProtect_setPA__E
xdc__CODESECT(ti_sysbios_family_c64p_MemoryProtect_setPA__E, "ti_sysbios_family_c64p_MemoryProtect_setPA")
__extern xdc_Bool ti_sysbios_family_c64p_MemoryProtect_setPA__E( xdc_Ptr addr, xdc_SizeT size, xdc_UInt32 paMask );

/* getPageSize__E */
#define ti_sysbios_family_c64p_MemoryProtect_getPageSize ti_sysbios_family_c64p_MemoryProtect_getPageSize__E
xdc__CODESECT(ti_sysbios_family_c64p_MemoryProtect_getPageSize__E, "ti_sysbios_family_c64p_MemoryProtect_getPageSize")
__extern xdc_Bool ti_sysbios_family_c64p_MemoryProtect_getPageSize__E( xdc_Ptr addr, xdc_UInt *pageSize );

/* getPrivMode__E */
#define ti_sysbios_family_c64p_MemoryProtect_getPrivMode ti_sysbios_family_c64p_MemoryProtect_getPrivMode__E
xdc__CODESECT(ti_sysbios_family_c64p_MemoryProtect_getPrivMode__E, "ti_sysbios_family_c64p_MemoryProtect_getPrivMode")
__extern xdc_UInt ti_sysbios_family_c64p_MemoryProtect_getPrivMode__E( void );

/* setPrivMode__E */
#define ti_sysbios_family_c64p_MemoryProtect_setPrivMode ti_sysbios_family_c64p_MemoryProtect_setPrivMode__E
xdc__CODESECT(ti_sysbios_family_c64p_MemoryProtect_setPrivMode__E, "ti_sysbios_family_c64p_MemoryProtect_setPrivMode")
__extern xdc_Void ti_sysbios_family_c64p_MemoryProtect_setPrivMode__E( xdc_UInt mode );

/* decodeRegion__I */
#define ti_sysbios_family_c64p_MemoryProtect_decodeRegion ti_sysbios_family_c64p_MemoryProtect_decodeRegion__I
xdc__CODESECT(ti_sysbios_family_c64p_MemoryProtect_decodeRegion__I, "ti_sysbios_family_c64p_MemoryProtect_decodeRegion")
__extern xdc_Int ti_sysbios_family_c64p_MemoryProtect_decodeRegion__I( xdc_UInt32 begAddr, xdc_UInt32 endAddr, xdc_UInt32 *begPage, xdc_UInt32 *endPage );

/* getAddrPageSize__I */
#define ti_sysbios_family_c64p_MemoryProtect_getAddrPageSize ti_sysbios_family_c64p_MemoryProtect_getAddrPageSize__I
xdc__CODESECT(ti_sysbios_family_c64p_MemoryProtect_getAddrPageSize__I, "ti_sysbios_family_c64p_MemoryProtect_getAddrPageSize")
__extern xdc_Int ti_sysbios_family_c64p_MemoryProtect_getAddrPageSize__I( xdc_Ptr addr );

/* lock__I */
#define ti_sysbios_family_c64p_MemoryProtect_lock ti_sysbios_family_c64p_MemoryProtect_lock__I
xdc__CODESECT(ti_sysbios_family_c64p_MemoryProtect_lock__I, "ti_sysbios_family_c64p_MemoryProtect_lock")
__extern xdc_Void ti_sysbios_family_c64p_MemoryProtect_lock__I( ti_sysbios_family_c64p_MemoryProtect_Controller *ctrl, ti_sysbios_family_c64p_MemoryProtect_Key *key );

/* makeLocal__I */
#define ti_sysbios_family_c64p_MemoryProtect_makeLocal ti_sysbios_family_c64p_MemoryProtect_makeLocal__I
xdc__CODESECT(ti_sysbios_family_c64p_MemoryProtect_makeLocal__I, "ti_sysbios_family_c64p_MemoryProtect_makeLocal")
__extern xdc_Bool ti_sysbios_family_c64p_MemoryProtect_makeLocal__I( xdc_UInt *addr, xdc_UInt *space );

/* readPA__I */
#define ti_sysbios_family_c64p_MemoryProtect_readPA ti_sysbios_family_c64p_MemoryProtect_readPA__I
xdc__CODESECT(ti_sysbios_family_c64p_MemoryProtect_readPA__I, "ti_sysbios_family_c64p_MemoryProtect_readPA")
__extern xdc_UInt32 ti_sysbios_family_c64p_MemoryProtect_readPA__I( ti_sysbios_family_c64p_MemoryProtect_Controller *ctrl, xdc_UInt page );

/* unlock__I */
#define ti_sysbios_family_c64p_MemoryProtect_unlock ti_sysbios_family_c64p_MemoryProtect_unlock__I
xdc__CODESECT(ti_sysbios_family_c64p_MemoryProtect_unlock__I, "ti_sysbios_family_c64p_MemoryProtect_unlock")
__extern xdc_Void ti_sysbios_family_c64p_MemoryProtect_unlock__I( ti_sysbios_family_c64p_MemoryProtect_Controller *ctrl, ti_sysbios_family_c64p_MemoryProtect_Key *key );

/* writePA__I */
#define ti_sysbios_family_c64p_MemoryProtect_writePA ti_sysbios_family_c64p_MemoryProtect_writePA__I
xdc__CODESECT(ti_sysbios_family_c64p_MemoryProtect_writePA__I, "ti_sysbios_family_c64p_MemoryProtect_writePA")
__extern xdc_Void ti_sysbios_family_c64p_MemoryProtect_writePA__I( ti_sysbios_family_c64p_MemoryProtect_Controller *ctrl, xdc_UInt page, xdc_UInt32 perm );


/*
 * ======== SYSTEM FUNCTIONS ========
 */

/* Module_startupDone */
#define ti_sysbios_family_c64p_MemoryProtect_Module_startupDone() ti_sysbios_family_c64p_MemoryProtect_Module__startupDone__S()

/* Object_heap */
#define ti_sysbios_family_c64p_MemoryProtect_Object_heap() ti_sysbios_family_c64p_MemoryProtect_Object__heap__C

/* Module_heap */
#define ti_sysbios_family_c64p_MemoryProtect_Module_heap() ti_sysbios_family_c64p_MemoryProtect_Object__heap__C

/* Module_id */
static inline CT__ti_sysbios_family_c64p_MemoryProtect_Module__id ti_sysbios_family_c64p_MemoryProtect_Module_id( void ) 
{
    return ti_sysbios_family_c64p_MemoryProtect_Module__id__C;
}

/* Module_hasMask */
static inline xdc_Bool ti_sysbios_family_c64p_MemoryProtect_Module_hasMask( void ) 
{
    return ti_sysbios_family_c64p_MemoryProtect_Module__diagsMask__C != NULL;
}

/* Module_getMask */
static inline xdc_Bits16 ti_sysbios_family_c64p_MemoryProtect_Module_getMask( void ) 
{
    return ti_sysbios_family_c64p_MemoryProtect_Module__diagsMask__C != NULL ? *ti_sysbios_family_c64p_MemoryProtect_Module__diagsMask__C : 0;
}

/* Module_setMask */
static inline xdc_Void ti_sysbios_family_c64p_MemoryProtect_Module_setMask( xdc_Bits16 mask ) 
{
    if (ti_sysbios_family_c64p_MemoryProtect_Module__diagsMask__C != NULL) *ti_sysbios_family_c64p_MemoryProtect_Module__diagsMask__C = mask;
}


/*
 * ======== EPILOGUE ========
 */

#ifdef ti_sysbios_family_c64p_MemoryProtect__top__
#undef __nested__
#endif

#endif /* ti_sysbios_family_c64p_MemoryProtect__include */


/*
 * ======== STATE STRUCTURES ========
 */

#if defined(__config__) || (!defined(__nested__) && defined(ti_sysbios_family_c64p_MemoryProtect__internalaccess))

#ifndef ti_sysbios_family_c64p_MemoryProtect__include_state
#define ti_sysbios_family_c64p_MemoryProtect__include_state

/* Module_State */
struct ti_sysbios_family_c64p_MemoryProtect_Module_State {
    __TA_ti_sysbios_family_c64p_MemoryProtect_Module_State__controllers controllers;
};

/* Module__state__V */
extern struct ti_sysbios_family_c64p_MemoryProtect_Module_State__ ti_sysbios_family_c64p_MemoryProtect_Module__state__V;

#endif /* ti_sysbios_family_c64p_MemoryProtect__include_state */

#endif


/*
 * ======== PREFIX ALIASES ========
 */

#if !defined(__nested__) && !defined(ti_sysbios_family_c64p_MemoryProtect__nolocalnames)

#ifndef ti_sysbios_family_c64p_MemoryProtect__localnames__done
#define ti_sysbios_family_c64p_MemoryProtect__localnames__done

/* module prefix */
#define MemoryProtect_MPPA_UX ti_sysbios_family_c64p_MemoryProtect_MPPA_UX
#define MemoryProtect_MPPA_UW ti_sysbios_family_c64p_MemoryProtect_MPPA_UW
#define MemoryProtect_MPPA_UR ti_sysbios_family_c64p_MemoryProtect_MPPA_UR
#define MemoryProtect_MPPA_SX ti_sysbios_family_c64p_MemoryProtect_MPPA_SX
#define MemoryProtect_MPPA_SW ti_sysbios_family_c64p_MemoryProtect_MPPA_SW
#define MemoryProtect_MPPA_SR ti_sysbios_family_c64p_MemoryProtect_MPPA_SR
#define MemoryProtect_MPPA_LOCAL ti_sysbios_family_c64p_MemoryProtect_MPPA_LOCAL
#define MemoryProtect_BitRange ti_sysbios_family_c64p_MemoryProtect_BitRange
#define MemoryProtect_Lock ti_sysbios_family_c64p_MemoryProtect_Lock
#define MemoryProtect_Fault ti_sysbios_family_c64p_MemoryProtect_Fault
#define MemoryProtect_Key ti_sysbios_family_c64p_MemoryProtect_Key
#define MemoryProtect_Controller ti_sysbios_family_c64p_MemoryProtect_Controller
#define MemoryProtect_NONE ti_sysbios_family_c64p_MemoryProtect_NONE
#define MemoryProtect_UMAP0 ti_sysbios_family_c64p_MemoryProtect_UMAP0
#define MemoryProtect_UMAP1 ti_sysbios_family_c64p_MemoryProtect_UMAP1
#define MemoryProtect_DMC ti_sysbios_family_c64p_MemoryProtect_DMC
#define MemoryProtect_PMC ti_sysbios_family_c64p_MemoryProtect_PMC
#define MemoryProtect_UMC ti_sysbios_family_c64p_MemoryProtect_UMC
#define MemoryProtect_LCKUNLOCK ti_sysbios_family_c64p_MemoryProtect_LCKUNLOCK
#define MemoryProtect_LCKLOCK ti_sysbios_family_c64p_MemoryProtect_LCKLOCK
#define MemoryProtect_LCKKEYR ti_sysbios_family_c64p_MemoryProtect_LCKKEYR
#define MemoryProtect_LKSTATLK ti_sysbios_family_c64p_MemoryProtect_LKSTATLK
#define MemoryProtect_Module_State ti_sysbios_family_c64p_MemoryProtect_Module_State
#define MemoryProtect_key ti_sysbios_family_c64p_MemoryProtect_key
#define MemoryProtect_regExtMasks ti_sysbios_family_c64p_MemoryProtect_regExtMasks
#define MemoryProtect_megaByte2MPC ti_sysbios_family_c64p_MemoryProtect_megaByte2MPC
#define MemoryProtect_regionCompare ti_sysbios_family_c64p_MemoryProtect_regionCompare
#define MemoryProtect_regionEnd ti_sysbios_family_c64p_MemoryProtect_regionEnd
#define MemoryProtect_pmcCtrl ti_sysbios_family_c64p_MemoryProtect_pmcCtrl
#define MemoryProtect_dmcCtrl ti_sysbios_family_c64p_MemoryProtect_dmcCtrl
#define MemoryProtect_umcCtrl ti_sysbios_family_c64p_MemoryProtect_umcCtrl
#define MemoryProtect_getPA ti_sysbios_family_c64p_MemoryProtect_getPA
#define MemoryProtect_setPA ti_sysbios_family_c64p_MemoryProtect_setPA
#define MemoryProtect_getPageSize ti_sysbios_family_c64p_MemoryProtect_getPageSize
#define MemoryProtect_getPrivMode ti_sysbios_family_c64p_MemoryProtect_getPrivMode
#define MemoryProtect_setPrivMode ti_sysbios_family_c64p_MemoryProtect_setPrivMode
#define MemoryProtect_Module_name ti_sysbios_family_c64p_MemoryProtect_Module_name
#define MemoryProtect_Module_id ti_sysbios_family_c64p_MemoryProtect_Module_id
#define MemoryProtect_Module_startup ti_sysbios_family_c64p_MemoryProtect_Module_startup
#define MemoryProtect_Module_startupDone ti_sysbios_family_c64p_MemoryProtect_Module_startupDone
#define MemoryProtect_Module_hasMask ti_sysbios_family_c64p_MemoryProtect_Module_hasMask
#define MemoryProtect_Module_getMask ti_sysbios_family_c64p_MemoryProtect_Module_getMask
#define MemoryProtect_Module_setMask ti_sysbios_family_c64p_MemoryProtect_Module_setMask
#define MemoryProtect_Object_heap ti_sysbios_family_c64p_MemoryProtect_Object_heap
#define MemoryProtect_Module_heap ti_sysbios_family_c64p_MemoryProtect_Module_heap

#endif /* ti_sysbios_family_c64p_MemoryProtect__localnames__done */
#endif
