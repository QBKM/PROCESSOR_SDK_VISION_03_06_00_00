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
 *     CREATE ARGS
 *     INTERNAL DEFINITIONS
 *     MODULE-WIDE CONFIGS
 *     PER-INSTANCE TYPES
 *     VIRTUAL FUNCTIONS
 *     FUNCTION DECLARATIONS
 *     CONVERTORS
 *     SYSTEM FUNCTIONS
 *     
 *     EPILOGUE
 *     STATE STRUCTURES
 *     PREFIX ALIASES
 */


/*
 * ======== PROLOGUE ========
 */

#ifndef ti_sysbios_family_arm_gic_Hwi__include
#define ti_sysbios_family_arm_gic_Hwi__include

#ifndef __nested__
#define __nested__
#define ti_sysbios_family_arm_gic_Hwi__top__
#endif

#ifdef __cplusplus
#define __extern extern "C"
#else
#define __extern extern
#endif

#define ti_sysbios_family_arm_gic_Hwi___VERS 160


/*
 * ======== INCLUDES ========
 */

#include <xdc/std.h>

#include <xdc/runtime/xdc.h>
#include <xdc/runtime/Types.h>
#include <xdc/runtime/IInstance.h>
#include <ti/sysbios/family/arm/gic/Hwi__prologue.h>
#include <ti/sysbios/family/arm/gic/package/package.defs.h>

#include <xdc/runtime/Diags.h>
#include <xdc/runtime/Log.h>
#include <xdc/runtime/Error.h>
#include <ti/sysbios/BIOS.h>
#include <ti/sysbios/interfaces/IHwi.h>
#include <xdc/runtime/Assert.h>


/*
 * ======== AUXILIARY DEFINITIONS ========
 */

/* FuncPtr */
typedef ti_sysbios_interfaces_IHwi_FuncPtr ti_sysbios_family_arm_gic_Hwi_FuncPtr;

/* Irp */
typedef ti_sysbios_interfaces_IHwi_Irp ti_sysbios_family_arm_gic_Hwi_Irp;

/* HookSet */
typedef ti_sysbios_interfaces_IHwi_HookSet ti_sysbios_family_arm_gic_Hwi_HookSet;

/* MaskingOption */
typedef ti_sysbios_interfaces_IHwi_MaskingOption ti_sysbios_family_arm_gic_Hwi_MaskingOption;

/* StackInfo */
typedef ti_sysbios_interfaces_IHwi_StackInfo ti_sysbios_family_arm_gic_Hwi_StackInfo;

/* Type */
enum ti_sysbios_family_arm_gic_Hwi_Type {
    ti_sysbios_family_arm_gic_Hwi_Type_IRQ,
    ti_sysbios_family_arm_gic_Hwi_Type_FIQ
};
typedef enum ti_sysbios_family_arm_gic_Hwi_Type ti_sysbios_family_arm_gic_Hwi_Type;

/* VectorFuncPtr */
typedef xdc_Void (*ti_sysbios_family_arm_gic_Hwi_VectorFuncPtr)(xdc_Void);

/* Gicd */
typedef xdc_UInt32 __T1_ti_sysbios_family_arm_gic_Hwi_Gicd__hole0;
typedef xdc_UInt32 __ARRAY1_ti_sysbios_family_arm_gic_Hwi_Gicd__hole0[29];
typedef __ARRAY1_ti_sysbios_family_arm_gic_Hwi_Gicd__hole0 __TA_ti_sysbios_family_arm_gic_Hwi_Gicd__hole0;
typedef xdc_UInt32 __T1_ti_sysbios_family_arm_gic_Hwi_Gicd__IGROUPR;
typedef xdc_UInt32 __ARRAY1_ti_sysbios_family_arm_gic_Hwi_Gicd__IGROUPR[32];
typedef __ARRAY1_ti_sysbios_family_arm_gic_Hwi_Gicd__IGROUPR __TA_ti_sysbios_family_arm_gic_Hwi_Gicd__IGROUPR;
typedef xdc_UInt32 __T1_ti_sysbios_family_arm_gic_Hwi_Gicd__ISENABLER;
typedef xdc_UInt32 __ARRAY1_ti_sysbios_family_arm_gic_Hwi_Gicd__ISENABLER[32];
typedef __ARRAY1_ti_sysbios_family_arm_gic_Hwi_Gicd__ISENABLER __TA_ti_sysbios_family_arm_gic_Hwi_Gicd__ISENABLER;
typedef xdc_UInt32 __T1_ti_sysbios_family_arm_gic_Hwi_Gicd__ICENABLER;
typedef xdc_UInt32 __ARRAY1_ti_sysbios_family_arm_gic_Hwi_Gicd__ICENABLER[32];
typedef __ARRAY1_ti_sysbios_family_arm_gic_Hwi_Gicd__ICENABLER __TA_ti_sysbios_family_arm_gic_Hwi_Gicd__ICENABLER;
typedef xdc_UInt32 __T1_ti_sysbios_family_arm_gic_Hwi_Gicd__ISPENDR;
typedef xdc_UInt32 __ARRAY1_ti_sysbios_family_arm_gic_Hwi_Gicd__ISPENDR[32];
typedef __ARRAY1_ti_sysbios_family_arm_gic_Hwi_Gicd__ISPENDR __TA_ti_sysbios_family_arm_gic_Hwi_Gicd__ISPENDR;
typedef xdc_UInt32 __T1_ti_sysbios_family_arm_gic_Hwi_Gicd__ICPENDR;
typedef xdc_UInt32 __ARRAY1_ti_sysbios_family_arm_gic_Hwi_Gicd__ICPENDR[32];
typedef __ARRAY1_ti_sysbios_family_arm_gic_Hwi_Gicd__ICPENDR __TA_ti_sysbios_family_arm_gic_Hwi_Gicd__ICPENDR;
typedef xdc_UInt32 __T1_ti_sysbios_family_arm_gic_Hwi_Gicd__ISACTIVER;
typedef xdc_UInt32 __ARRAY1_ti_sysbios_family_arm_gic_Hwi_Gicd__ISACTIVER[32];
typedef __ARRAY1_ti_sysbios_family_arm_gic_Hwi_Gicd__ISACTIVER __TA_ti_sysbios_family_arm_gic_Hwi_Gicd__ISACTIVER;
typedef xdc_UInt32 __T1_ti_sysbios_family_arm_gic_Hwi_Gicd__ICACTIVER;
typedef xdc_UInt32 __ARRAY1_ti_sysbios_family_arm_gic_Hwi_Gicd__ICACTIVER[32];
typedef __ARRAY1_ti_sysbios_family_arm_gic_Hwi_Gicd__ICACTIVER __TA_ti_sysbios_family_arm_gic_Hwi_Gicd__ICACTIVER;
typedef xdc_UInt32 __T1_ti_sysbios_family_arm_gic_Hwi_Gicd__IPRIORITYR;
typedef xdc_UInt32 __ARRAY1_ti_sysbios_family_arm_gic_Hwi_Gicd__IPRIORITYR[255];
typedef __ARRAY1_ti_sysbios_family_arm_gic_Hwi_Gicd__IPRIORITYR __TA_ti_sysbios_family_arm_gic_Hwi_Gicd__IPRIORITYR;
typedef xdc_UInt32 __T1_ti_sysbios_family_arm_gic_Hwi_Gicd__hole1;
typedef xdc_UInt32 __ARRAY1_ti_sysbios_family_arm_gic_Hwi_Gicd__hole1[1];
typedef __ARRAY1_ti_sysbios_family_arm_gic_Hwi_Gicd__hole1 __TA_ti_sysbios_family_arm_gic_Hwi_Gicd__hole1;
typedef xdc_UInt32 __T1_ti_sysbios_family_arm_gic_Hwi_Gicd__ITARGETSR;
typedef xdc_UInt32 __ARRAY1_ti_sysbios_family_arm_gic_Hwi_Gicd__ITARGETSR[255];
typedef __ARRAY1_ti_sysbios_family_arm_gic_Hwi_Gicd__ITARGETSR __TA_ti_sysbios_family_arm_gic_Hwi_Gicd__ITARGETSR;
typedef xdc_UInt32 __T1_ti_sysbios_family_arm_gic_Hwi_Gicd__hole2;
typedef xdc_UInt32 __ARRAY1_ti_sysbios_family_arm_gic_Hwi_Gicd__hole2[1];
typedef __ARRAY1_ti_sysbios_family_arm_gic_Hwi_Gicd__hole2 __TA_ti_sysbios_family_arm_gic_Hwi_Gicd__hole2;
typedef xdc_UInt32 __T1_ti_sysbios_family_arm_gic_Hwi_Gicd__ICFGR;
typedef xdc_UInt32 __ARRAY1_ti_sysbios_family_arm_gic_Hwi_Gicd__ICFGR[64];
typedef __ARRAY1_ti_sysbios_family_arm_gic_Hwi_Gicd__ICFGR __TA_ti_sysbios_family_arm_gic_Hwi_Gicd__ICFGR;
typedef xdc_UInt32 __T1_ti_sysbios_family_arm_gic_Hwi_Gicd__SPISR;
typedef xdc_UInt32 __ARRAY1_ti_sysbios_family_arm_gic_Hwi_Gicd__SPISR[7];
typedef __ARRAY1_ti_sysbios_family_arm_gic_Hwi_Gicd__SPISR __TA_ti_sysbios_family_arm_gic_Hwi_Gicd__SPISR;
typedef xdc_UInt32 __T1_ti_sysbios_family_arm_gic_Hwi_Gicd__hole3;
typedef xdc_UInt32 __ARRAY1_ti_sysbios_family_arm_gic_Hwi_Gicd__hole3[120];
typedef __ARRAY1_ti_sysbios_family_arm_gic_Hwi_Gicd__hole3 __TA_ti_sysbios_family_arm_gic_Hwi_Gicd__hole3;
typedef xdc_UInt32 __T1_ti_sysbios_family_arm_gic_Hwi_Gicd__hole4;
typedef xdc_UInt32 __ARRAY1_ti_sysbios_family_arm_gic_Hwi_Gicd__hole4[3];
typedef __ARRAY1_ti_sysbios_family_arm_gic_Hwi_Gicd__hole4 __TA_ti_sysbios_family_arm_gic_Hwi_Gicd__hole4;
typedef xdc_UInt32 __T1_ti_sysbios_family_arm_gic_Hwi_Gicd__CPENDSGIR;
typedef xdc_UInt32 __ARRAY1_ti_sysbios_family_arm_gic_Hwi_Gicd__CPENDSGIR[4];
typedef __ARRAY1_ti_sysbios_family_arm_gic_Hwi_Gicd__CPENDSGIR __TA_ti_sysbios_family_arm_gic_Hwi_Gicd__CPENDSGIR;
typedef xdc_UInt32 __T1_ti_sysbios_family_arm_gic_Hwi_Gicd__SPENDSGIR;
typedef xdc_UInt32 __ARRAY1_ti_sysbios_family_arm_gic_Hwi_Gicd__SPENDSGIR[4];
typedef __ARRAY1_ti_sysbios_family_arm_gic_Hwi_Gicd__SPENDSGIR __TA_ti_sysbios_family_arm_gic_Hwi_Gicd__SPENDSGIR;
typedef xdc_UInt32 __T1_ti_sysbios_family_arm_gic_Hwi_Gicd__hole5;
typedef xdc_UInt32 __ARRAY1_ti_sysbios_family_arm_gic_Hwi_Gicd__hole5[40];
typedef __ARRAY1_ti_sysbios_family_arm_gic_Hwi_Gicd__hole5 __TA_ti_sysbios_family_arm_gic_Hwi_Gicd__hole5;
struct ti_sysbios_family_arm_gic_Hwi_Gicd {
    xdc_UInt32 CTLR;
    xdc_UInt32 TYPER;
    xdc_UInt32 IIDR;
    __TA_ti_sysbios_family_arm_gic_Hwi_Gicd__hole0 hole0;
    __TA_ti_sysbios_family_arm_gic_Hwi_Gicd__IGROUPR IGROUPR;
    __TA_ti_sysbios_family_arm_gic_Hwi_Gicd__ISENABLER ISENABLER;
    __TA_ti_sysbios_family_arm_gic_Hwi_Gicd__ICENABLER ICENABLER;
    __TA_ti_sysbios_family_arm_gic_Hwi_Gicd__ISPENDR ISPENDR;
    __TA_ti_sysbios_family_arm_gic_Hwi_Gicd__ICPENDR ICPENDR;
    __TA_ti_sysbios_family_arm_gic_Hwi_Gicd__ISACTIVER ISACTIVER;
    __TA_ti_sysbios_family_arm_gic_Hwi_Gicd__ICACTIVER ICACTIVER;
    __TA_ti_sysbios_family_arm_gic_Hwi_Gicd__IPRIORITYR IPRIORITYR;
    __TA_ti_sysbios_family_arm_gic_Hwi_Gicd__hole1 hole1;
    __TA_ti_sysbios_family_arm_gic_Hwi_Gicd__ITARGETSR ITARGETSR;
    __TA_ti_sysbios_family_arm_gic_Hwi_Gicd__hole2 hole2;
    __TA_ti_sysbios_family_arm_gic_Hwi_Gicd__ICFGR ICFGR;
    xdc_UInt32 PPISR;
    __TA_ti_sysbios_family_arm_gic_Hwi_Gicd__SPISR SPISR;
    __TA_ti_sysbios_family_arm_gic_Hwi_Gicd__hole3 hole3;
    xdc_UInt32 SGIR;
    __TA_ti_sysbios_family_arm_gic_Hwi_Gicd__hole4 hole4;
    __TA_ti_sysbios_family_arm_gic_Hwi_Gicd__CPENDSGIR CPENDSGIR;
    __TA_ti_sysbios_family_arm_gic_Hwi_Gicd__SPENDSGIR SPENDSGIR;
    __TA_ti_sysbios_family_arm_gic_Hwi_Gicd__hole5 hole5;
    xdc_UInt32 PIDR4;
    xdc_UInt32 PIDR5;
    xdc_UInt32 PIDR6;
    xdc_UInt32 PIDR7;
    xdc_UInt32 PIDR0;
    xdc_UInt32 PIDR1;
    xdc_UInt32 PIDR2;
    xdc_UInt32 PIDR3;
    xdc_UInt32 CIDR0;
    xdc_UInt32 CIDR1;
    xdc_UInt32 CIDR2;
    xdc_UInt32 CIDR3;
};

/* gicd */
#define ti_sysbios_family_arm_gic_Hwi_gicd ti_sysbios_family_arm_gic_Hwi_gicd
__extern volatile ti_sysbios_family_arm_gic_Hwi_Gicd ti_sysbios_family_arm_gic_Hwi_gicd;

/* Gicc */
typedef xdc_UInt32 __T1_ti_sysbios_family_arm_gic_Hwi_Gicc__hole0;
typedef xdc_UInt32 __ARRAY1_ti_sysbios_family_arm_gic_Hwi_Gicc__hole0[41];
typedef __ARRAY1_ti_sysbios_family_arm_gic_Hwi_Gicc__hole0 __TA_ti_sysbios_family_arm_gic_Hwi_Gicc__hole0;
typedef xdc_UInt32 __T1_ti_sysbios_family_arm_gic_Hwi_Gicc__hole1;
typedef xdc_UInt32 __ARRAY1_ti_sysbios_family_arm_gic_Hwi_Gicc__hole1[3];
typedef __ARRAY1_ti_sysbios_family_arm_gic_Hwi_Gicc__hole1 __TA_ti_sysbios_family_arm_gic_Hwi_Gicc__hole1;
typedef xdc_UInt32 __T1_ti_sysbios_family_arm_gic_Hwi_Gicc__hole2;
typedef xdc_UInt32 __ARRAY1_ti_sysbios_family_arm_gic_Hwi_Gicc__hole2[6];
typedef __ARRAY1_ti_sysbios_family_arm_gic_Hwi_Gicc__hole2 __TA_ti_sysbios_family_arm_gic_Hwi_Gicc__hole2;
typedef xdc_UInt32 __T1_ti_sysbios_family_arm_gic_Hwi_Gicc__hole3;
typedef xdc_UInt32 __ARRAY1_ti_sysbios_family_arm_gic_Hwi_Gicc__hole3[960];
typedef __ARRAY1_ti_sysbios_family_arm_gic_Hwi_Gicc__hole3 __TA_ti_sysbios_family_arm_gic_Hwi_Gicc__hole3;
struct ti_sysbios_family_arm_gic_Hwi_Gicc {
    xdc_UInt32 CTLR;
    xdc_UInt32 PMR;
    xdc_UInt32 BPR;
    xdc_UInt32 IAR;
    xdc_UInt32 EOIR;
    xdc_UInt32 RPR;
    xdc_UInt32 HPPIR;
    xdc_UInt32 ABPR;
    xdc_UInt32 AIAR;
    xdc_UInt32 AEOIR;
    xdc_UInt32 AHPPIR;
    __TA_ti_sysbios_family_arm_gic_Hwi_Gicc__hole0 hole0;
    xdc_UInt32 APR0;
    __TA_ti_sysbios_family_arm_gic_Hwi_Gicc__hole1 hole1;
    xdc_UInt32 NSAPR0;
    __TA_ti_sysbios_family_arm_gic_Hwi_Gicc__hole2 hole2;
    xdc_UInt32 IIDR;
    __TA_ti_sysbios_family_arm_gic_Hwi_Gicc__hole3 hole3;
    xdc_UInt32 DIR;
};

/* gicc */
#define ti_sysbios_family_arm_gic_Hwi_gicc ti_sysbios_family_arm_gic_Hwi_gicc
__extern volatile ti_sysbios_family_arm_gic_Hwi_Gicc ti_sysbios_family_arm_gic_Hwi_gicc;

/* MaskingOption_NONE */
#define ti_sysbios_family_arm_gic_Hwi_MaskingOption_NONE ti_sysbios_interfaces_IHwi_MaskingOption_NONE

/* MaskingOption_ALL */
#define ti_sysbios_family_arm_gic_Hwi_MaskingOption_ALL ti_sysbios_interfaces_IHwi_MaskingOption_ALL

/* MaskingOption_SELF */
#define ti_sysbios_family_arm_gic_Hwi_MaskingOption_SELF ti_sysbios_interfaces_IHwi_MaskingOption_SELF

/* MaskingOption_BITMASK */
#define ti_sysbios_family_arm_gic_Hwi_MaskingOption_BITMASK ti_sysbios_interfaces_IHwi_MaskingOption_BITMASK

/* MaskingOption_LOWER */
#define ti_sysbios_family_arm_gic_Hwi_MaskingOption_LOWER ti_sysbios_interfaces_IHwi_MaskingOption_LOWER


/*
 * ======== CREATE ARGS ========
 */

/* Args__create */
typedef struct ti_sysbios_family_arm_gic_Hwi_Args__create {
    xdc_Int intNum;
    ti_sysbios_interfaces_IHwi_FuncPtr hwiFxn;
} ti_sysbios_family_arm_gic_Hwi_Args__create;


/*
 * ======== INTERNAL DEFINITIONS ========
 */

/* Instance_State */
typedef xdc_Ptr __T1_ti_sysbios_family_arm_gic_Hwi_Instance_State__hookEnv;
typedef xdc_Ptr *__ARRAY1_ti_sysbios_family_arm_gic_Hwi_Instance_State__hookEnv;
typedef __ARRAY1_ti_sysbios_family_arm_gic_Hwi_Instance_State__hookEnv __TA_ti_sysbios_family_arm_gic_Hwi_Instance_State__hookEnv;

/* Module_State */
typedef xdc_Char *__T1_ti_sysbios_family_arm_gic_Hwi_Module_State__taskSP;
typedef xdc_Char **__ARRAY1_ti_sysbios_family_arm_gic_Hwi_Module_State__taskSP;
typedef __ARRAY1_ti_sysbios_family_arm_gic_Hwi_Module_State__taskSP __TA_ti_sysbios_family_arm_gic_Hwi_Module_State__taskSP;
typedef xdc_Char *__T1_ti_sysbios_family_arm_gic_Hwi_Module_State__isrStack;
typedef xdc_Char **__ARRAY1_ti_sysbios_family_arm_gic_Hwi_Module_State__isrStack;
typedef __ARRAY1_ti_sysbios_family_arm_gic_Hwi_Module_State__isrStack __TA_ti_sysbios_family_arm_gic_Hwi_Module_State__isrStack;
typedef xdc_Char __T1_ti_sysbios_family_arm_gic_Hwi_Module_State__hwiStack;
typedef xdc_Char *__ARRAY1_ti_sysbios_family_arm_gic_Hwi_Module_State__hwiStack;
typedef __ARRAY1_ti_sysbios_family_arm_gic_Hwi_Module_State__hwiStack __T2_ti_sysbios_family_arm_gic_Hwi_Module_State__hwiStack;
typedef xdc_Char **__ARRAY2_ti_sysbios_family_arm_gic_Hwi_Module_State__hwiStack;
typedef __ARRAY2_ti_sysbios_family_arm_gic_Hwi_Module_State__hwiStack __TA_ti_sysbios_family_arm_gic_Hwi_Module_State__hwiStack;
typedef xdc_UInt32 __T1_ti_sysbios_family_arm_gic_Hwi_Module_State__iser;
typedef xdc_UInt32 __ARRAY1_ti_sysbios_family_arm_gic_Hwi_Module_State__iser[32];
typedef __ARRAY1_ti_sysbios_family_arm_gic_Hwi_Module_State__iser __TA_ti_sysbios_family_arm_gic_Hwi_Module_State__iser;
typedef xdc_UInt32 __T1_ti_sysbios_family_arm_gic_Hwi_Module_State__icfgr;
typedef xdc_UInt32 *__ARRAY1_ti_sysbios_family_arm_gic_Hwi_Module_State__icfgr;
typedef __ARRAY1_ti_sysbios_family_arm_gic_Hwi_Module_State__icfgr __TA_ti_sysbios_family_arm_gic_Hwi_Module_State__icfgr;
typedef xdc_UInt32 __T1_ti_sysbios_family_arm_gic_Hwi_Module_State__itargetsr;
typedef xdc_UInt32 *__ARRAY1_ti_sysbios_family_arm_gic_Hwi_Module_State__itargetsr;
typedef __ARRAY1_ti_sysbios_family_arm_gic_Hwi_Module_State__itargetsr __TA_ti_sysbios_family_arm_gic_Hwi_Module_State__itargetsr;
typedef ti_sysbios_family_arm_gic_Hwi_Handle __T1_ti_sysbios_family_arm_gic_Hwi_Module_State__dispatchTable;
typedef ti_sysbios_family_arm_gic_Hwi_Handle *__ARRAY1_ti_sysbios_family_arm_gic_Hwi_Module_State__dispatchTable;
typedef __ARRAY1_ti_sysbios_family_arm_gic_Hwi_Module_State__dispatchTable __TA_ti_sysbios_family_arm_gic_Hwi_Module_State__dispatchTable;
typedef xdc_UInt32 __T1_ti_sysbios_family_arm_gic_Hwi_Module_State__igroupr;
typedef xdc_UInt32 *__ARRAY1_ti_sysbios_family_arm_gic_Hwi_Module_State__igroupr;
typedef __ARRAY1_ti_sysbios_family_arm_gic_Hwi_Module_State__igroupr __TA_ti_sysbios_family_arm_gic_Hwi_Module_State__igroupr;
typedef xdc_Char __T1_ti_sysbios_family_arm_gic_Hwi_Module_State__fiqStack;
typedef xdc_Char *__ARRAY1_ti_sysbios_family_arm_gic_Hwi_Module_State__fiqStack;
typedef __ARRAY1_ti_sysbios_family_arm_gic_Hwi_Module_State__fiqStack __T2_ti_sysbios_family_arm_gic_Hwi_Module_State__fiqStack;
typedef xdc_Char **__ARRAY2_ti_sysbios_family_arm_gic_Hwi_Module_State__fiqStack;
typedef __ARRAY2_ti_sysbios_family_arm_gic_Hwi_Module_State__fiqStack __TA_ti_sysbios_family_arm_gic_Hwi_Module_State__fiqStack;
typedef xdc_UInt8 __T1_ti_sysbios_family_arm_gic_Hwi_Module_State__intAffinity;
typedef xdc_UInt8 *__ARRAY1_ti_sysbios_family_arm_gic_Hwi_Module_State__intAffinity;
typedef __ARRAY1_ti_sysbios_family_arm_gic_Hwi_Module_State__intAffinity __TA_ti_sysbios_family_arm_gic_Hwi_Module_State__intAffinity;


/*
 * ======== MODULE-WIDE CONFIGS ========
 */

/* Module__diagsEnabled */
typedef xdc_Bits32 CT__ti_sysbios_family_arm_gic_Hwi_Module__diagsEnabled;
__extern __FAR__ const CT__ti_sysbios_family_arm_gic_Hwi_Module__diagsEnabled ti_sysbios_family_arm_gic_Hwi_Module__diagsEnabled__C;

/* Module__diagsIncluded */
typedef xdc_Bits32 CT__ti_sysbios_family_arm_gic_Hwi_Module__diagsIncluded;
__extern __FAR__ const CT__ti_sysbios_family_arm_gic_Hwi_Module__diagsIncluded ti_sysbios_family_arm_gic_Hwi_Module__diagsIncluded__C;

/* Module__diagsMask */
typedef xdc_Bits16 *CT__ti_sysbios_family_arm_gic_Hwi_Module__diagsMask;
__extern __FAR__ const CT__ti_sysbios_family_arm_gic_Hwi_Module__diagsMask ti_sysbios_family_arm_gic_Hwi_Module__diagsMask__C;

/* Module__gateObj */
typedef xdc_Ptr CT__ti_sysbios_family_arm_gic_Hwi_Module__gateObj;
__extern __FAR__ const CT__ti_sysbios_family_arm_gic_Hwi_Module__gateObj ti_sysbios_family_arm_gic_Hwi_Module__gateObj__C;

/* Module__gatePrms */
typedef xdc_Ptr CT__ti_sysbios_family_arm_gic_Hwi_Module__gatePrms;
__extern __FAR__ const CT__ti_sysbios_family_arm_gic_Hwi_Module__gatePrms ti_sysbios_family_arm_gic_Hwi_Module__gatePrms__C;

/* Module__id */
typedef xdc_runtime_Types_ModuleId CT__ti_sysbios_family_arm_gic_Hwi_Module__id;
__extern __FAR__ const CT__ti_sysbios_family_arm_gic_Hwi_Module__id ti_sysbios_family_arm_gic_Hwi_Module__id__C;

/* Module__loggerDefined */
typedef xdc_Bool CT__ti_sysbios_family_arm_gic_Hwi_Module__loggerDefined;
__extern __FAR__ const CT__ti_sysbios_family_arm_gic_Hwi_Module__loggerDefined ti_sysbios_family_arm_gic_Hwi_Module__loggerDefined__C;

/* Module__loggerObj */
typedef xdc_Ptr CT__ti_sysbios_family_arm_gic_Hwi_Module__loggerObj;
__extern __FAR__ const CT__ti_sysbios_family_arm_gic_Hwi_Module__loggerObj ti_sysbios_family_arm_gic_Hwi_Module__loggerObj__C;

/* Module__loggerFxn0 */
typedef xdc_runtime_Types_LoggerFxn0 CT__ti_sysbios_family_arm_gic_Hwi_Module__loggerFxn0;
__extern __FAR__ const CT__ti_sysbios_family_arm_gic_Hwi_Module__loggerFxn0 ti_sysbios_family_arm_gic_Hwi_Module__loggerFxn0__C;

/* Module__loggerFxn1 */
typedef xdc_runtime_Types_LoggerFxn1 CT__ti_sysbios_family_arm_gic_Hwi_Module__loggerFxn1;
__extern __FAR__ const CT__ti_sysbios_family_arm_gic_Hwi_Module__loggerFxn1 ti_sysbios_family_arm_gic_Hwi_Module__loggerFxn1__C;

/* Module__loggerFxn2 */
typedef xdc_runtime_Types_LoggerFxn2 CT__ti_sysbios_family_arm_gic_Hwi_Module__loggerFxn2;
__extern __FAR__ const CT__ti_sysbios_family_arm_gic_Hwi_Module__loggerFxn2 ti_sysbios_family_arm_gic_Hwi_Module__loggerFxn2__C;

/* Module__loggerFxn4 */
typedef xdc_runtime_Types_LoggerFxn4 CT__ti_sysbios_family_arm_gic_Hwi_Module__loggerFxn4;
__extern __FAR__ const CT__ti_sysbios_family_arm_gic_Hwi_Module__loggerFxn4 ti_sysbios_family_arm_gic_Hwi_Module__loggerFxn4__C;

/* Module__loggerFxn8 */
typedef xdc_runtime_Types_LoggerFxn8 CT__ti_sysbios_family_arm_gic_Hwi_Module__loggerFxn8;
__extern __FAR__ const CT__ti_sysbios_family_arm_gic_Hwi_Module__loggerFxn8 ti_sysbios_family_arm_gic_Hwi_Module__loggerFxn8__C;

/* Module__startupDoneFxn */
typedef xdc_Bool (*CT__ti_sysbios_family_arm_gic_Hwi_Module__startupDoneFxn)(void);
__extern __FAR__ const CT__ti_sysbios_family_arm_gic_Hwi_Module__startupDoneFxn ti_sysbios_family_arm_gic_Hwi_Module__startupDoneFxn__C;

/* Object__count */
typedef xdc_Int CT__ti_sysbios_family_arm_gic_Hwi_Object__count;
__extern __FAR__ const CT__ti_sysbios_family_arm_gic_Hwi_Object__count ti_sysbios_family_arm_gic_Hwi_Object__count__C;

/* Object__heap */
typedef xdc_runtime_IHeap_Handle CT__ti_sysbios_family_arm_gic_Hwi_Object__heap;
__extern __FAR__ const CT__ti_sysbios_family_arm_gic_Hwi_Object__heap ti_sysbios_family_arm_gic_Hwi_Object__heap__C;

/* Object__sizeof */
typedef xdc_SizeT CT__ti_sysbios_family_arm_gic_Hwi_Object__sizeof;
__extern __FAR__ const CT__ti_sysbios_family_arm_gic_Hwi_Object__sizeof ti_sysbios_family_arm_gic_Hwi_Object__sizeof__C;

/* Object__table */
typedef xdc_Ptr CT__ti_sysbios_family_arm_gic_Hwi_Object__table;
__extern __FAR__ const CT__ti_sysbios_family_arm_gic_Hwi_Object__table ti_sysbios_family_arm_gic_Hwi_Object__table__C;

/* dispatcherAutoNestingSupport */
#ifdef ti_sysbios_family_arm_gic_Hwi_dispatcherAutoNestingSupport__D
#define ti_sysbios_family_arm_gic_Hwi_dispatcherAutoNestingSupport (ti_sysbios_family_arm_gic_Hwi_dispatcherAutoNestingSupport__D)
#else
#define ti_sysbios_family_arm_gic_Hwi_dispatcherAutoNestingSupport (ti_sysbios_family_arm_gic_Hwi_dispatcherAutoNestingSupport__C)
typedef xdc_Bool CT__ti_sysbios_family_arm_gic_Hwi_dispatcherAutoNestingSupport;
__extern __FAR__ const CT__ti_sysbios_family_arm_gic_Hwi_dispatcherAutoNestingSupport ti_sysbios_family_arm_gic_Hwi_dispatcherAutoNestingSupport__C;
#endif

/* dispatcherSwiSupport */
#ifdef ti_sysbios_family_arm_gic_Hwi_dispatcherSwiSupport__D
#define ti_sysbios_family_arm_gic_Hwi_dispatcherSwiSupport (ti_sysbios_family_arm_gic_Hwi_dispatcherSwiSupport__D)
#else
#define ti_sysbios_family_arm_gic_Hwi_dispatcherSwiSupport (ti_sysbios_family_arm_gic_Hwi_dispatcherSwiSupport__C)
typedef xdc_Bool CT__ti_sysbios_family_arm_gic_Hwi_dispatcherSwiSupport;
__extern __FAR__ const CT__ti_sysbios_family_arm_gic_Hwi_dispatcherSwiSupport ti_sysbios_family_arm_gic_Hwi_dispatcherSwiSupport__C;
#endif

/* dispatcherTaskSupport */
#ifdef ti_sysbios_family_arm_gic_Hwi_dispatcherTaskSupport__D
#define ti_sysbios_family_arm_gic_Hwi_dispatcherTaskSupport (ti_sysbios_family_arm_gic_Hwi_dispatcherTaskSupport__D)
#else
#define ti_sysbios_family_arm_gic_Hwi_dispatcherTaskSupport (ti_sysbios_family_arm_gic_Hwi_dispatcherTaskSupport__C)
typedef xdc_Bool CT__ti_sysbios_family_arm_gic_Hwi_dispatcherTaskSupport;
__extern __FAR__ const CT__ti_sysbios_family_arm_gic_Hwi_dispatcherTaskSupport ti_sysbios_family_arm_gic_Hwi_dispatcherTaskSupport__C;
#endif

/* dispatcherIrpTrackingSupport */
#ifdef ti_sysbios_family_arm_gic_Hwi_dispatcherIrpTrackingSupport__D
#define ti_sysbios_family_arm_gic_Hwi_dispatcherIrpTrackingSupport (ti_sysbios_family_arm_gic_Hwi_dispatcherIrpTrackingSupport__D)
#else
#define ti_sysbios_family_arm_gic_Hwi_dispatcherIrpTrackingSupport (ti_sysbios_family_arm_gic_Hwi_dispatcherIrpTrackingSupport__C)
typedef xdc_Bool CT__ti_sysbios_family_arm_gic_Hwi_dispatcherIrpTrackingSupport;
__extern __FAR__ const CT__ti_sysbios_family_arm_gic_Hwi_dispatcherIrpTrackingSupport ti_sysbios_family_arm_gic_Hwi_dispatcherIrpTrackingSupport__C;
#endif

/* enableSecureMode */
#ifdef ti_sysbios_family_arm_gic_Hwi_enableSecureMode__D
#define ti_sysbios_family_arm_gic_Hwi_enableSecureMode (ti_sysbios_family_arm_gic_Hwi_enableSecureMode__D)
#else
#define ti_sysbios_family_arm_gic_Hwi_enableSecureMode (ti_sysbios_family_arm_gic_Hwi_enableSecureMode__C)
typedef xdc_Bool CT__ti_sysbios_family_arm_gic_Hwi_enableSecureMode;
__extern __FAR__ const CT__ti_sysbios_family_arm_gic_Hwi_enableSecureMode ti_sysbios_family_arm_gic_Hwi_enableSecureMode__C;
#endif

/* NUM_INTERRUPTS */
#ifdef ti_sysbios_family_arm_gic_Hwi_NUM_INTERRUPTS__D
#define ti_sysbios_family_arm_gic_Hwi_NUM_INTERRUPTS (ti_sysbios_family_arm_gic_Hwi_NUM_INTERRUPTS__D)
#else
#define ti_sysbios_family_arm_gic_Hwi_NUM_INTERRUPTS (ti_sysbios_family_arm_gic_Hwi_NUM_INTERRUPTS__C)
typedef xdc_UInt CT__ti_sysbios_family_arm_gic_Hwi_NUM_INTERRUPTS;
__extern __FAR__ const CT__ti_sysbios_family_arm_gic_Hwi_NUM_INTERRUPTS ti_sysbios_family_arm_gic_Hwi_NUM_INTERRUPTS__C;
#endif

/* NUM_PRIORITY_BITS */
#ifdef ti_sysbios_family_arm_gic_Hwi_NUM_PRIORITY_BITS__D
#define ti_sysbios_family_arm_gic_Hwi_NUM_PRIORITY_BITS (ti_sysbios_family_arm_gic_Hwi_NUM_PRIORITY_BITS__D)
#else
#define ti_sysbios_family_arm_gic_Hwi_NUM_PRIORITY_BITS (ti_sysbios_family_arm_gic_Hwi_NUM_PRIORITY_BITS__C)
typedef xdc_UInt CT__ti_sysbios_family_arm_gic_Hwi_NUM_PRIORITY_BITS;
__extern __FAR__ const CT__ti_sysbios_family_arm_gic_Hwi_NUM_PRIORITY_BITS ti_sysbios_family_arm_gic_Hwi_NUM_PRIORITY_BITS__C;
#endif

/* MIN_INT_PRIORITY */
#ifdef ti_sysbios_family_arm_gic_Hwi_MIN_INT_PRIORITY__D
#define ti_sysbios_family_arm_gic_Hwi_MIN_INT_PRIORITY (ti_sysbios_family_arm_gic_Hwi_MIN_INT_PRIORITY__D)
#else
#define ti_sysbios_family_arm_gic_Hwi_MIN_INT_PRIORITY (ti_sysbios_family_arm_gic_Hwi_MIN_INT_PRIORITY__C)
typedef xdc_UInt CT__ti_sysbios_family_arm_gic_Hwi_MIN_INT_PRIORITY;
__extern __FAR__ const CT__ti_sysbios_family_arm_gic_Hwi_MIN_INT_PRIORITY ti_sysbios_family_arm_gic_Hwi_MIN_INT_PRIORITY__C;
#endif

/* DEFAULT_INT_PRIORITY */
#ifdef ti_sysbios_family_arm_gic_Hwi_DEFAULT_INT_PRIORITY__D
#define ti_sysbios_family_arm_gic_Hwi_DEFAULT_INT_PRIORITY (ti_sysbios_family_arm_gic_Hwi_DEFAULT_INT_PRIORITY__D)
#else
#define ti_sysbios_family_arm_gic_Hwi_DEFAULT_INT_PRIORITY (ti_sysbios_family_arm_gic_Hwi_DEFAULT_INT_PRIORITY__C)
typedef xdc_UInt CT__ti_sysbios_family_arm_gic_Hwi_DEFAULT_INT_PRIORITY;
__extern __FAR__ const CT__ti_sysbios_family_arm_gic_Hwi_DEFAULT_INT_PRIORITY ti_sysbios_family_arm_gic_Hwi_DEFAULT_INT_PRIORITY__C;
#endif

/* BPR */
#ifdef ti_sysbios_family_arm_gic_Hwi_BPR__D
#define ti_sysbios_family_arm_gic_Hwi_BPR (ti_sysbios_family_arm_gic_Hwi_BPR__D)
#else
#define ti_sysbios_family_arm_gic_Hwi_BPR (ti_sysbios_family_arm_gic_Hwi_BPR__C)
typedef xdc_UInt CT__ti_sysbios_family_arm_gic_Hwi_BPR;
__extern __FAR__ const CT__ti_sysbios_family_arm_gic_Hwi_BPR ti_sysbios_family_arm_gic_Hwi_BPR__C;
#endif

/* ABPR */
#ifdef ti_sysbios_family_arm_gic_Hwi_ABPR__D
#define ti_sysbios_family_arm_gic_Hwi_ABPR (ti_sysbios_family_arm_gic_Hwi_ABPR__D)
#else
#define ti_sysbios_family_arm_gic_Hwi_ABPR (ti_sysbios_family_arm_gic_Hwi_ABPR__C)
typedef xdc_UInt CT__ti_sysbios_family_arm_gic_Hwi_ABPR;
__extern __FAR__ const CT__ti_sysbios_family_arm_gic_Hwi_ABPR ti_sysbios_family_arm_gic_Hwi_ABPR__C;
#endif

/* enableAsidTagging */
#ifdef ti_sysbios_family_arm_gic_Hwi_enableAsidTagging__D
#define ti_sysbios_family_arm_gic_Hwi_enableAsidTagging (ti_sysbios_family_arm_gic_Hwi_enableAsidTagging__D)
#else
#define ti_sysbios_family_arm_gic_Hwi_enableAsidTagging (ti_sysbios_family_arm_gic_Hwi_enableAsidTagging__C)
typedef xdc_Bool CT__ti_sysbios_family_arm_gic_Hwi_enableAsidTagging;
__extern __FAR__ const CT__ti_sysbios_family_arm_gic_Hwi_enableAsidTagging ti_sysbios_family_arm_gic_Hwi_enableAsidTagging__C;
#endif

/* initGicd */
#ifdef ti_sysbios_family_arm_gic_Hwi_initGicd__D
#define ti_sysbios_family_arm_gic_Hwi_initGicd (ti_sysbios_family_arm_gic_Hwi_initGicd__D)
#else
#define ti_sysbios_family_arm_gic_Hwi_initGicd (ti_sysbios_family_arm_gic_Hwi_initGicd__C)
typedef xdc_Bool CT__ti_sysbios_family_arm_gic_Hwi_initGicd;
__extern __FAR__ const CT__ti_sysbios_family_arm_gic_Hwi_initGicd ti_sysbios_family_arm_gic_Hwi_initGicd__C;
#endif

/* A_badSGIIntNum */
#define ti_sysbios_family_arm_gic_Hwi_A_badSGIIntNum (ti_sysbios_family_arm_gic_Hwi_A_badSGIIntNum__C)
typedef xdc_runtime_Assert_Id CT__ti_sysbios_family_arm_gic_Hwi_A_badSGIIntNum;
__extern __FAR__ const CT__ti_sysbios_family_arm_gic_Hwi_A_badSGIIntNum ti_sysbios_family_arm_gic_Hwi_A_badSGIIntNum__C;

/* E_alreadyDefined */
#define ti_sysbios_family_arm_gic_Hwi_E_alreadyDefined (ti_sysbios_family_arm_gic_Hwi_E_alreadyDefined__C)
typedef xdc_runtime_Error_Id CT__ti_sysbios_family_arm_gic_Hwi_E_alreadyDefined;
__extern __FAR__ const CT__ti_sysbios_family_arm_gic_Hwi_E_alreadyDefined ti_sysbios_family_arm_gic_Hwi_E_alreadyDefined__C;

/* E_handleNotFound */
#define ti_sysbios_family_arm_gic_Hwi_E_handleNotFound (ti_sysbios_family_arm_gic_Hwi_E_handleNotFound__C)
typedef xdc_runtime_Error_Id CT__ti_sysbios_family_arm_gic_Hwi_E_handleNotFound;
__extern __FAR__ const CT__ti_sysbios_family_arm_gic_Hwi_E_handleNotFound ti_sysbios_family_arm_gic_Hwi_E_handleNotFound__C;

/* E_undefined */
#define ti_sysbios_family_arm_gic_Hwi_E_undefined (ti_sysbios_family_arm_gic_Hwi_E_undefined__C)
typedef xdc_runtime_Error_Id CT__ti_sysbios_family_arm_gic_Hwi_E_undefined;
__extern __FAR__ const CT__ti_sysbios_family_arm_gic_Hwi_E_undefined ti_sysbios_family_arm_gic_Hwi_E_undefined__C;

/* E_badIntNum */
#define ti_sysbios_family_arm_gic_Hwi_E_badIntNum (ti_sysbios_family_arm_gic_Hwi_E_badIntNum__C)
typedef xdc_runtime_Error_Id CT__ti_sysbios_family_arm_gic_Hwi_E_badIntNum;
__extern __FAR__ const CT__ti_sysbios_family_arm_gic_Hwi_E_badIntNum ti_sysbios_family_arm_gic_Hwi_E_badIntNum__C;

/* LM_begin */
#define ti_sysbios_family_arm_gic_Hwi_LM_begin (ti_sysbios_family_arm_gic_Hwi_LM_begin__C)
typedef xdc_runtime_Log_Event CT__ti_sysbios_family_arm_gic_Hwi_LM_begin;
__extern __FAR__ const CT__ti_sysbios_family_arm_gic_Hwi_LM_begin ti_sysbios_family_arm_gic_Hwi_LM_begin__C;

/* LD_end */
#define ti_sysbios_family_arm_gic_Hwi_LD_end (ti_sysbios_family_arm_gic_Hwi_LD_end__C)
typedef xdc_runtime_Log_Event CT__ti_sysbios_family_arm_gic_Hwi_LD_end;
__extern __FAR__ const CT__ti_sysbios_family_arm_gic_Hwi_LD_end ti_sysbios_family_arm_gic_Hwi_LD_end__C;

/* swiDisable */
#define ti_sysbios_family_arm_gic_Hwi_swiDisable (ti_sysbios_family_arm_gic_Hwi_swiDisable__C)
typedef xdc_UInt (*CT__ti_sysbios_family_arm_gic_Hwi_swiDisable)(void);
__extern __FAR__ const CT__ti_sysbios_family_arm_gic_Hwi_swiDisable ti_sysbios_family_arm_gic_Hwi_swiDisable__C;

/* swiRestoreHwi */
#define ti_sysbios_family_arm_gic_Hwi_swiRestoreHwi (ti_sysbios_family_arm_gic_Hwi_swiRestoreHwi__C)
typedef xdc_Void (*CT__ti_sysbios_family_arm_gic_Hwi_swiRestoreHwi)(xdc_UInt);
__extern __FAR__ const CT__ti_sysbios_family_arm_gic_Hwi_swiRestoreHwi ti_sysbios_family_arm_gic_Hwi_swiRestoreHwi__C;

/* taskDisable */
#define ti_sysbios_family_arm_gic_Hwi_taskDisable (ti_sysbios_family_arm_gic_Hwi_taskDisable__C)
typedef xdc_UInt (*CT__ti_sysbios_family_arm_gic_Hwi_taskDisable)(void);
__extern __FAR__ const CT__ti_sysbios_family_arm_gic_Hwi_taskDisable ti_sysbios_family_arm_gic_Hwi_taskDisable__C;

/* taskRestoreHwi */
#define ti_sysbios_family_arm_gic_Hwi_taskRestoreHwi (ti_sysbios_family_arm_gic_Hwi_taskRestoreHwi__C)
typedef xdc_Void (*CT__ti_sysbios_family_arm_gic_Hwi_taskRestoreHwi)(xdc_UInt);
__extern __FAR__ const CT__ti_sysbios_family_arm_gic_Hwi_taskRestoreHwi ti_sysbios_family_arm_gic_Hwi_taskRestoreHwi__C;

/* hooks */
#define ti_sysbios_family_arm_gic_Hwi_hooks (ti_sysbios_family_arm_gic_Hwi_hooks__C)
typedef ti_sysbios_family_arm_gic_Hwi_HookSet __T1_ti_sysbios_family_arm_gic_Hwi_hooks;
typedef struct { int length; ti_sysbios_family_arm_gic_Hwi_HookSet *elem; } __ARRAY1_ti_sysbios_family_arm_gic_Hwi_hooks;
typedef __ARRAY1_ti_sysbios_family_arm_gic_Hwi_hooks __TA_ti_sysbios_family_arm_gic_Hwi_hooks;
typedef __TA_ti_sysbios_family_arm_gic_Hwi_hooks CT__ti_sysbios_family_arm_gic_Hwi_hooks;
__extern __FAR__ const CT__ti_sysbios_family_arm_gic_Hwi_hooks ti_sysbios_family_arm_gic_Hwi_hooks__C;


/*
 * ======== PER-INSTANCE TYPES ========
 */

/* Params */
struct ti_sysbios_family_arm_gic_Hwi_Params {
    size_t __size;
    const void *__self;
    void *__fxns;
    xdc_runtime_IInstance_Params *instance;
    ti_sysbios_interfaces_IHwi_MaskingOption maskSetting;
    xdc_UArg arg;
    xdc_Bool enableInt;
    xdc_Int eventId;
    xdc_Int priority;
    ti_sysbios_family_arm_gic_Hwi_Type type;
    xdc_UInt triggerSensitivity;
    xdc_UInt targetProcList;
    xdc_runtime_IInstance_Params __iprms;
};

/* Struct */
struct ti_sysbios_family_arm_gic_Hwi_Struct {
    const ti_sysbios_family_arm_gic_Hwi_Fxns__ *__fxns;
    ti_sysbios_family_arm_gic_Hwi_Type __f0;
    xdc_UInt __f1;
    xdc_UArg __f2;
    ti_sysbios_family_arm_gic_Hwi_FuncPtr __f3;
    ti_sysbios_family_arm_gic_Hwi_Irp __f4;
    __TA_ti_sysbios_family_arm_gic_Hwi_Instance_State__hookEnv __f5;
    xdc_UInt __f6;
    xdc_UInt __f7;
    xdc_runtime_Types_CordAddr __name;
};


/*
 * ======== VIRTUAL FUNCTIONS ========
 */

/* Fxns__ */
struct ti_sysbios_family_arm_gic_Hwi_Fxns__ {
    xdc_runtime_Types_Base* __base;
    const xdc_runtime_Types_SysFxns2 *__sysp;
    xdc_Bool (*getStackInfo)(ti_sysbios_interfaces_IHwi_StackInfo*, xdc_Bool);
    xdc_Bool (*getCoreStackInfo)(ti_sysbios_interfaces_IHwi_StackInfo*, xdc_Bool, xdc_UInt);
    xdc_Void (*startup)(void);
    xdc_UInt (*disable)(void);
    xdc_UInt (*enable)(void);
    xdc_Void (*restore)(xdc_UInt);
    xdc_Void (*switchFromBootStack)(void);
    xdc_Void (*post)(xdc_UInt);
    xdc_Char *(*getTaskSP)(void);
    xdc_UInt (*disableInterrupt)(xdc_UInt);
    xdc_UInt (*enableInterrupt)(xdc_UInt);
    xdc_Void (*restoreInterrupt)(xdc_UInt, xdc_UInt);
    xdc_Void (*clearInterrupt)(xdc_UInt);
    ti_sysbios_interfaces_IHwi_FuncPtr (*getFunc)(ti_sysbios_family_arm_gic_Hwi_Handle, xdc_UArg*);
    xdc_Void (*setFunc)(ti_sysbios_family_arm_gic_Hwi_Handle, ti_sysbios_interfaces_IHwi_FuncPtr, xdc_UArg);
    xdc_Ptr (*getHookContext)(ti_sysbios_family_arm_gic_Hwi_Handle, xdc_Int);
    xdc_Void (*setHookContext)(ti_sysbios_family_arm_gic_Hwi_Handle, xdc_Int, xdc_Ptr);
    ti_sysbios_interfaces_IHwi_Irp (*getIrp)(ti_sysbios_family_arm_gic_Hwi_Handle);
    xdc_runtime_Types_SysFxns2 __sfxns;
};

/* Module__FXNS__C */
__extern const ti_sysbios_family_arm_gic_Hwi_Fxns__ ti_sysbios_family_arm_gic_Hwi_Module__FXNS__C;


/*
 * ======== FUNCTION DECLARATIONS ========
 */

/* Module_startup */
#define ti_sysbios_family_arm_gic_Hwi_Module_startup ti_sysbios_family_arm_gic_Hwi_Module_startup__E
xdc__CODESECT(ti_sysbios_family_arm_gic_Hwi_Module_startup__E, "ti_sysbios_family_arm_gic_Hwi_Module_startup")
__extern xdc_Int ti_sysbios_family_arm_gic_Hwi_Module_startup__E( xdc_Int state );
xdc__CODESECT(ti_sysbios_family_arm_gic_Hwi_Module_startup__F, "ti_sysbios_family_arm_gic_Hwi_Module_startup")
__extern xdc_Int ti_sysbios_family_arm_gic_Hwi_Module_startup__F( xdc_Int state );

/* Instance_init__E */
xdc__CODESECT(ti_sysbios_family_arm_gic_Hwi_Instance_init__E, "ti_sysbios_family_arm_gic_Hwi_Instance_init")
__extern xdc_Int ti_sysbios_family_arm_gic_Hwi_Instance_init__E(ti_sysbios_family_arm_gic_Hwi_Object *, xdc_Int intNum, ti_sysbios_interfaces_IHwi_FuncPtr hwiFxn, const ti_sysbios_family_arm_gic_Hwi_Params *, xdc_runtime_Error_Block *);

/* Instance_finalize__E */
xdc__CODESECT(ti_sysbios_family_arm_gic_Hwi_Instance_finalize__E, "ti_sysbios_family_arm_gic_Hwi_Instance_finalize")
__extern void ti_sysbios_family_arm_gic_Hwi_Instance_finalize__E( ti_sysbios_family_arm_gic_Hwi_Object* , int );

/* Handle__label__S */
xdc__CODESECT(ti_sysbios_family_arm_gic_Hwi_Handle__label__S, "ti_sysbios_family_arm_gic_Hwi_Handle__label__S")
__extern xdc_runtime_Types_Label *ti_sysbios_family_arm_gic_Hwi_Handle__label__S( xdc_Ptr obj, xdc_runtime_Types_Label *lab );

/* Module__startupDone__S */
xdc__CODESECT(ti_sysbios_family_arm_gic_Hwi_Module__startupDone__S, "ti_sysbios_family_arm_gic_Hwi_Module__startupDone__S")
__extern xdc_Bool ti_sysbios_family_arm_gic_Hwi_Module__startupDone__S( void );

/* Object__create__S */
xdc__CODESECT(ti_sysbios_family_arm_gic_Hwi_Object__create__S, "ti_sysbios_family_arm_gic_Hwi_Object__create__S")
__extern xdc_Ptr ti_sysbios_family_arm_gic_Hwi_Object__create__S( xdc_Ptr __oa, xdc_SizeT __osz, xdc_Ptr __aa, const xdc_UChar *__pa, xdc_SizeT __psz, xdc_runtime_Error_Block *__eb );

/* create */
xdc__CODESECT(ti_sysbios_family_arm_gic_Hwi_create, "ti_sysbios_family_arm_gic_Hwi_create")
__extern ti_sysbios_family_arm_gic_Hwi_Handle ti_sysbios_family_arm_gic_Hwi_create( xdc_Int intNum, ti_sysbios_interfaces_IHwi_FuncPtr hwiFxn, const ti_sysbios_family_arm_gic_Hwi_Params *__prms, xdc_runtime_Error_Block *__eb );

/* construct */
xdc__CODESECT(ti_sysbios_family_arm_gic_Hwi_construct, "ti_sysbios_family_arm_gic_Hwi_construct")
__extern void ti_sysbios_family_arm_gic_Hwi_construct( ti_sysbios_family_arm_gic_Hwi_Struct *__obj, xdc_Int intNum, ti_sysbios_interfaces_IHwi_FuncPtr hwiFxn, const ti_sysbios_family_arm_gic_Hwi_Params *__prms, xdc_runtime_Error_Block *__eb );

/* Object__delete__S */
xdc__CODESECT(ti_sysbios_family_arm_gic_Hwi_Object__delete__S, "ti_sysbios_family_arm_gic_Hwi_Object__delete__S")
__extern xdc_Void ti_sysbios_family_arm_gic_Hwi_Object__delete__S( xdc_Ptr instp );

/* delete */
xdc__CODESECT(ti_sysbios_family_arm_gic_Hwi_delete, "ti_sysbios_family_arm_gic_Hwi_delete")
__extern void ti_sysbios_family_arm_gic_Hwi_delete(ti_sysbios_family_arm_gic_Hwi_Handle *instp);

/* Object__destruct__S */
xdc__CODESECT(ti_sysbios_family_arm_gic_Hwi_Object__destruct__S, "ti_sysbios_family_arm_gic_Hwi_Object__destruct__S")
__extern xdc_Void ti_sysbios_family_arm_gic_Hwi_Object__destruct__S( xdc_Ptr objp );

/* destruct */
xdc__CODESECT(ti_sysbios_family_arm_gic_Hwi_destruct, "ti_sysbios_family_arm_gic_Hwi_destruct")
__extern void ti_sysbios_family_arm_gic_Hwi_destruct(ti_sysbios_family_arm_gic_Hwi_Struct *obj);

/* Object__get__S */
xdc__CODESECT(ti_sysbios_family_arm_gic_Hwi_Object__get__S, "ti_sysbios_family_arm_gic_Hwi_Object__get__S")
__extern xdc_Ptr ti_sysbios_family_arm_gic_Hwi_Object__get__S( xdc_Ptr oarr, xdc_Int i );

/* Object__first__S */
xdc__CODESECT(ti_sysbios_family_arm_gic_Hwi_Object__first__S, "ti_sysbios_family_arm_gic_Hwi_Object__first__S")
__extern xdc_Ptr ti_sysbios_family_arm_gic_Hwi_Object__first__S( void );

/* Object__next__S */
xdc__CODESECT(ti_sysbios_family_arm_gic_Hwi_Object__next__S, "ti_sysbios_family_arm_gic_Hwi_Object__next__S")
__extern xdc_Ptr ti_sysbios_family_arm_gic_Hwi_Object__next__S( xdc_Ptr obj );

/* Params__init__S */
xdc__CODESECT(ti_sysbios_family_arm_gic_Hwi_Params__init__S, "ti_sysbios_family_arm_gic_Hwi_Params__init__S")
__extern xdc_Void ti_sysbios_family_arm_gic_Hwi_Params__init__S( xdc_Ptr dst, const xdc_Void *src, xdc_SizeT psz, xdc_SizeT isz );

/* getStackInfo__E */
#define ti_sysbios_family_arm_gic_Hwi_getStackInfo ti_sysbios_family_arm_gic_Hwi_getStackInfo__E
xdc__CODESECT(ti_sysbios_family_arm_gic_Hwi_getStackInfo__E, "ti_sysbios_family_arm_gic_Hwi_getStackInfo")
__extern xdc_Bool ti_sysbios_family_arm_gic_Hwi_getStackInfo__E( ti_sysbios_interfaces_IHwi_StackInfo *stkInfo, xdc_Bool computeStackDepth );

/* getCoreStackInfo__E */
#define ti_sysbios_family_arm_gic_Hwi_getCoreStackInfo ti_sysbios_family_arm_gic_Hwi_getCoreStackInfo__E
xdc__CODESECT(ti_sysbios_family_arm_gic_Hwi_getCoreStackInfo__E, "ti_sysbios_family_arm_gic_Hwi_getCoreStackInfo")
__extern xdc_Bool ti_sysbios_family_arm_gic_Hwi_getCoreStackInfo__E( ti_sysbios_interfaces_IHwi_StackInfo *stkInfo, xdc_Bool computeStackDepth, xdc_UInt coreId );

/* startup__E */
#define ti_sysbios_family_arm_gic_Hwi_startup ti_sysbios_family_arm_gic_Hwi_startup__E
xdc__CODESECT(ti_sysbios_family_arm_gic_Hwi_startup__E, "ti_sysbios_family_arm_gic_Hwi_startup")
__extern xdc_Void ti_sysbios_family_arm_gic_Hwi_startup__E( void );

/* switchFromBootStack__E */
#define ti_sysbios_family_arm_gic_Hwi_switchFromBootStack ti_sysbios_family_arm_gic_Hwi_switchFromBootStack__E
xdc__CODESECT(ti_sysbios_family_arm_gic_Hwi_switchFromBootStack__E, "ti_sysbios_family_arm_gic_Hwi_switchFromBootStack")
__extern xdc_Void ti_sysbios_family_arm_gic_Hwi_switchFromBootStack__E( void );

/* post__E */
#define ti_sysbios_family_arm_gic_Hwi_post ti_sysbios_family_arm_gic_Hwi_post__E
xdc__CODESECT(ti_sysbios_family_arm_gic_Hwi_post__E, "ti_sysbios_family_arm_gic_Hwi_post")
__extern xdc_Void ti_sysbios_family_arm_gic_Hwi_post__E( xdc_UInt intNum );

/* getTaskSP__E */
#define ti_sysbios_family_arm_gic_Hwi_getTaskSP ti_sysbios_family_arm_gic_Hwi_getTaskSP__E
xdc__CODESECT(ti_sysbios_family_arm_gic_Hwi_getTaskSP__E, "ti_sysbios_family_arm_gic_Hwi_getTaskSP")
__extern xdc_Char *ti_sysbios_family_arm_gic_Hwi_getTaskSP__E( void );

/* disableInterrupt__E */
#define ti_sysbios_family_arm_gic_Hwi_disableInterrupt ti_sysbios_family_arm_gic_Hwi_disableInterrupt__E
xdc__CODESECT(ti_sysbios_family_arm_gic_Hwi_disableInterrupt__E, "ti_sysbios_family_arm_gic_Hwi_disableInterrupt")
__extern xdc_UInt ti_sysbios_family_arm_gic_Hwi_disableInterrupt__E( xdc_UInt intNum );

/* enableInterrupt__E */
#define ti_sysbios_family_arm_gic_Hwi_enableInterrupt ti_sysbios_family_arm_gic_Hwi_enableInterrupt__E
xdc__CODESECT(ti_sysbios_family_arm_gic_Hwi_enableInterrupt__E, "ti_sysbios_family_arm_gic_Hwi_enableInterrupt")
__extern xdc_UInt ti_sysbios_family_arm_gic_Hwi_enableInterrupt__E( xdc_UInt intNum );

/* restoreInterrupt__E */
#define ti_sysbios_family_arm_gic_Hwi_restoreInterrupt ti_sysbios_family_arm_gic_Hwi_restoreInterrupt__E
xdc__CODESECT(ti_sysbios_family_arm_gic_Hwi_restoreInterrupt__E, "ti_sysbios_family_arm_gic_Hwi_restoreInterrupt")
__extern xdc_Void ti_sysbios_family_arm_gic_Hwi_restoreInterrupt__E( xdc_UInt intNum, xdc_UInt key );

/* clearInterrupt__E */
#define ti_sysbios_family_arm_gic_Hwi_clearInterrupt ti_sysbios_family_arm_gic_Hwi_clearInterrupt__E
xdc__CODESECT(ti_sysbios_family_arm_gic_Hwi_clearInterrupt__E, "ti_sysbios_family_arm_gic_Hwi_clearInterrupt")
__extern xdc_Void ti_sysbios_family_arm_gic_Hwi_clearInterrupt__E( xdc_UInt intNum );

/* getFunc__E */
#define ti_sysbios_family_arm_gic_Hwi_getFunc ti_sysbios_family_arm_gic_Hwi_getFunc__E
xdc__CODESECT(ti_sysbios_family_arm_gic_Hwi_getFunc__E, "ti_sysbios_family_arm_gic_Hwi_getFunc")
__extern ti_sysbios_interfaces_IHwi_FuncPtr ti_sysbios_family_arm_gic_Hwi_getFunc__E( ti_sysbios_family_arm_gic_Hwi_Handle __inst, xdc_UArg *arg );

/* setFunc__E */
#define ti_sysbios_family_arm_gic_Hwi_setFunc ti_sysbios_family_arm_gic_Hwi_setFunc__E
xdc__CODESECT(ti_sysbios_family_arm_gic_Hwi_setFunc__E, "ti_sysbios_family_arm_gic_Hwi_setFunc")
__extern xdc_Void ti_sysbios_family_arm_gic_Hwi_setFunc__E( ti_sysbios_family_arm_gic_Hwi_Handle __inst, ti_sysbios_interfaces_IHwi_FuncPtr fxn, xdc_UArg arg );

/* getHookContext__E */
#define ti_sysbios_family_arm_gic_Hwi_getHookContext ti_sysbios_family_arm_gic_Hwi_getHookContext__E
xdc__CODESECT(ti_sysbios_family_arm_gic_Hwi_getHookContext__E, "ti_sysbios_family_arm_gic_Hwi_getHookContext")
__extern xdc_Ptr ti_sysbios_family_arm_gic_Hwi_getHookContext__E( ti_sysbios_family_arm_gic_Hwi_Handle __inst, xdc_Int id );

/* setHookContext__E */
#define ti_sysbios_family_arm_gic_Hwi_setHookContext ti_sysbios_family_arm_gic_Hwi_setHookContext__E
xdc__CODESECT(ti_sysbios_family_arm_gic_Hwi_setHookContext__E, "ti_sysbios_family_arm_gic_Hwi_setHookContext")
__extern xdc_Void ti_sysbios_family_arm_gic_Hwi_setHookContext__E( ti_sysbios_family_arm_gic_Hwi_Handle __inst, xdc_Int id, xdc_Ptr hookContext );

/* getIrp__E */
#define ti_sysbios_family_arm_gic_Hwi_getIrp ti_sysbios_family_arm_gic_Hwi_getIrp__E
xdc__CODESECT(ti_sysbios_family_arm_gic_Hwi_getIrp__E, "ti_sysbios_family_arm_gic_Hwi_getIrp")
__extern ti_sysbios_interfaces_IHwi_Irp ti_sysbios_family_arm_gic_Hwi_getIrp__E( ti_sysbios_family_arm_gic_Hwi_Handle __inst );

/* disableFxn__E */
#define ti_sysbios_family_arm_gic_Hwi_disableFxn ti_sysbios_family_arm_gic_Hwi_disableFxn__E
xdc__CODESECT(ti_sysbios_family_arm_gic_Hwi_disableFxn__E, "ti_sysbios_family_arm_gic_Hwi_disableFxn")
__extern xdc_UInt ti_sysbios_family_arm_gic_Hwi_disableFxn__E( void );

/* enableFxn__E */
#define ti_sysbios_family_arm_gic_Hwi_enableFxn ti_sysbios_family_arm_gic_Hwi_enableFxn__E
xdc__CODESECT(ti_sysbios_family_arm_gic_Hwi_enableFxn__E, "ti_sysbios_family_arm_gic_Hwi_enableFxn")
__extern xdc_UInt ti_sysbios_family_arm_gic_Hwi_enableFxn__E( void );

/* restoreFxn__E */
#define ti_sysbios_family_arm_gic_Hwi_restoreFxn ti_sysbios_family_arm_gic_Hwi_restoreFxn__E
xdc__CODESECT(ti_sysbios_family_arm_gic_Hwi_restoreFxn__E, "ti_sysbios_family_arm_gic_Hwi_restoreFxn")
__extern xdc_Void ti_sysbios_family_arm_gic_Hwi_restoreFxn__E( xdc_UInt key );

/* getHandle__E */
#define ti_sysbios_family_arm_gic_Hwi_getHandle ti_sysbios_family_arm_gic_Hwi_getHandle__E
xdc__CODESECT(ti_sysbios_family_arm_gic_Hwi_getHandle__E, "ti_sysbios_family_arm_gic_Hwi_getHandle")
__extern ti_sysbios_family_arm_gic_Hwi_Handle ti_sysbios_family_arm_gic_Hwi_getHandle__E( xdc_UInt intNum );

/* init__E */
#define ti_sysbios_family_arm_gic_Hwi_init ti_sysbios_family_arm_gic_Hwi_init__E
xdc__CODESECT(ti_sysbios_family_arm_gic_Hwi_init__E, "ti_sysbios_family_arm_gic_Hwi_init")
__extern xdc_Void ti_sysbios_family_arm_gic_Hwi_init__E( void );

/* initIntControllerCoreX__E */
#define ti_sysbios_family_arm_gic_Hwi_initIntControllerCoreX ti_sysbios_family_arm_gic_Hwi_initIntControllerCoreX__E
xdc__CODESECT(ti_sysbios_family_arm_gic_Hwi_initIntControllerCoreX__E, "ti_sysbios_family_arm_gic_Hwi_initIntControllerCoreX")
__extern xdc_Void ti_sysbios_family_arm_gic_Hwi_initIntControllerCoreX__E( void );

/* raiseSGI__E */
#define ti_sysbios_family_arm_gic_Hwi_raiseSGI ti_sysbios_family_arm_gic_Hwi_raiseSGI__E
xdc__CODESECT(ti_sysbios_family_arm_gic_Hwi_raiseSGI__E, "ti_sysbios_family_arm_gic_Hwi_raiseSGI")
__extern xdc_Void ti_sysbios_family_arm_gic_Hwi_raiseSGI__E( xdc_UInt mask, xdc_UInt intNum );

/* setPriority__E */
#define ti_sysbios_family_arm_gic_Hwi_setPriority ti_sysbios_family_arm_gic_Hwi_setPriority__E
xdc__CODESECT(ti_sysbios_family_arm_gic_Hwi_setPriority__E, "ti_sysbios_family_arm_gic_Hwi_setPriority")
__extern xdc_Void ti_sysbios_family_arm_gic_Hwi_setPriority__E( xdc_UInt intNum, xdc_UInt priority );

/* reconfig__E */
#define ti_sysbios_family_arm_gic_Hwi_reconfig ti_sysbios_family_arm_gic_Hwi_reconfig__E
xdc__CODESECT(ti_sysbios_family_arm_gic_Hwi_reconfig__E, "ti_sysbios_family_arm_gic_Hwi_reconfig")
__extern xdc_Void ti_sysbios_family_arm_gic_Hwi_reconfig__E( ti_sysbios_family_arm_gic_Hwi_Handle __inst, ti_sysbios_family_arm_gic_Hwi_FuncPtr fxn, const ti_sysbios_family_arm_gic_Hwi_Params *params );

/* postInit__I */
#define ti_sysbios_family_arm_gic_Hwi_postInit ti_sysbios_family_arm_gic_Hwi_postInit__I
xdc__CODESECT(ti_sysbios_family_arm_gic_Hwi_postInit__I, "ti_sysbios_family_arm_gic_Hwi_postInit")
__extern xdc_Int ti_sysbios_family_arm_gic_Hwi_postInit__I( ti_sysbios_family_arm_gic_Hwi_Object *hwi, xdc_runtime_Error_Block *eb );

/* initIntControllerCore0__I */
#define ti_sysbios_family_arm_gic_Hwi_initIntControllerCore0 ti_sysbios_family_arm_gic_Hwi_initIntControllerCore0__I
xdc__CODESECT(ti_sysbios_family_arm_gic_Hwi_initIntControllerCore0__I, "ti_sysbios_family_arm_gic_Hwi_initIntControllerCore0")
__extern xdc_Void ti_sysbios_family_arm_gic_Hwi_initIntControllerCore0__I( void );

/* initFIQStack__I */
#define ti_sysbios_family_arm_gic_Hwi_initFIQStack ti_sysbios_family_arm_gic_Hwi_initFIQStack__I
xdc__CODESECT(ti_sysbios_family_arm_gic_Hwi_initFIQStack__I, "ti_sysbios_family_arm_gic_Hwi_initFIQStack")
__extern xdc_Void ti_sysbios_family_arm_gic_Hwi_initFIQStack__I( xdc_Ptr fiqStack );

/* dispatchFIQC__I */
#define ti_sysbios_family_arm_gic_Hwi_dispatchFIQC ti_sysbios_family_arm_gic_Hwi_dispatchFIQC__I
xdc__CODESECT(ti_sysbios_family_arm_gic_Hwi_dispatchFIQC__I, "ti_sysbios_family_arm_gic_Hwi_dispatchFIQC")
__extern xdc_Void ti_sysbios_family_arm_gic_Hwi_dispatchFIQC__I( void );

/* dispatchIRQ__I */
#define ti_sysbios_family_arm_gic_Hwi_dispatchIRQ ti_sysbios_family_arm_gic_Hwi_dispatchIRQ__I
xdc__CODESECT(ti_sysbios_family_arm_gic_Hwi_dispatchIRQ__I, "ti_sysbios_family_arm_gic_Hwi_dispatchIRQ")
__extern xdc_Void ti_sysbios_family_arm_gic_Hwi_dispatchIRQ__I( void );

/* dispatchIRQC__I */
#define ti_sysbios_family_arm_gic_Hwi_dispatchIRQC ti_sysbios_family_arm_gic_Hwi_dispatchIRQC__I
xdc__CODESECT(ti_sysbios_family_arm_gic_Hwi_dispatchIRQC__I, "ti_sysbios_family_arm_gic_Hwi_dispatchIRQC")
__extern xdc_Void ti_sysbios_family_arm_gic_Hwi_dispatchIRQC__I( ti_sysbios_family_arm_gic_Hwi_Irp irp );

/* nonPluggedHwiHandler__I */
#define ti_sysbios_family_arm_gic_Hwi_nonPluggedHwiHandler ti_sysbios_family_arm_gic_Hwi_nonPluggedHwiHandler__I
xdc__CODESECT(ti_sysbios_family_arm_gic_Hwi_nonPluggedHwiHandler__I, "ti_sysbios_family_arm_gic_Hwi_nonPluggedHwiHandler")
__extern xdc_Void ti_sysbios_family_arm_gic_Hwi_nonPluggedHwiHandler__I( xdc_UArg arg );


/*
 * ======== CONVERTORS ========
 */

/* Module_upCast */
static inline ti_sysbios_interfaces_IHwi_Module ti_sysbios_family_arm_gic_Hwi_Module_upCast( void )
{
    return (ti_sysbios_interfaces_IHwi_Module)&ti_sysbios_family_arm_gic_Hwi_Module__FXNS__C;
}

/* Module_to_ti_sysbios_interfaces_IHwi */
#define ti_sysbios_family_arm_gic_Hwi_Module_to_ti_sysbios_interfaces_IHwi ti_sysbios_family_arm_gic_Hwi_Module_upCast

/* Handle_upCast */
static inline ti_sysbios_interfaces_IHwi_Handle ti_sysbios_family_arm_gic_Hwi_Handle_upCast( ti_sysbios_family_arm_gic_Hwi_Handle i )
{
    return (ti_sysbios_interfaces_IHwi_Handle)i;
}

/* Handle_to_ti_sysbios_interfaces_IHwi */
#define ti_sysbios_family_arm_gic_Hwi_Handle_to_ti_sysbios_interfaces_IHwi ti_sysbios_family_arm_gic_Hwi_Handle_upCast

/* Handle_downCast */
static inline ti_sysbios_family_arm_gic_Hwi_Handle ti_sysbios_family_arm_gic_Hwi_Handle_downCast( ti_sysbios_interfaces_IHwi_Handle i )
{
    ti_sysbios_interfaces_IHwi_Handle i2 = (ti_sysbios_interfaces_IHwi_Handle)i;
    return (void*)i2->__fxns == (void*)&ti_sysbios_family_arm_gic_Hwi_Module__FXNS__C ? (ti_sysbios_family_arm_gic_Hwi_Handle)i : 0;
}

/* Handle_from_ti_sysbios_interfaces_IHwi */
#define ti_sysbios_family_arm_gic_Hwi_Handle_from_ti_sysbios_interfaces_IHwi ti_sysbios_family_arm_gic_Hwi_Handle_downCast


/*
 * ======== SYSTEM FUNCTIONS ========
 */

/* Module_startupDone */
#define ti_sysbios_family_arm_gic_Hwi_Module_startupDone() ti_sysbios_family_arm_gic_Hwi_Module__startupDone__S()

/* Object_heap */
#define ti_sysbios_family_arm_gic_Hwi_Object_heap() ti_sysbios_family_arm_gic_Hwi_Object__heap__C

/* Module_heap */
#define ti_sysbios_family_arm_gic_Hwi_Module_heap() ti_sysbios_family_arm_gic_Hwi_Object__heap__C

/* Module_id */
static inline CT__ti_sysbios_family_arm_gic_Hwi_Module__id ti_sysbios_family_arm_gic_Hwi_Module_id( void ) 
{
    return ti_sysbios_family_arm_gic_Hwi_Module__id__C;
}

/* Module_hasMask */
static inline xdc_Bool ti_sysbios_family_arm_gic_Hwi_Module_hasMask( void ) 
{
    return ti_sysbios_family_arm_gic_Hwi_Module__diagsMask__C != NULL;
}

/* Module_getMask */
static inline xdc_Bits16 ti_sysbios_family_arm_gic_Hwi_Module_getMask( void ) 
{
    return ti_sysbios_family_arm_gic_Hwi_Module__diagsMask__C != NULL ? *ti_sysbios_family_arm_gic_Hwi_Module__diagsMask__C : 0;
}

/* Module_setMask */
static inline xdc_Void ti_sysbios_family_arm_gic_Hwi_Module_setMask( xdc_Bits16 mask ) 
{
    if (ti_sysbios_family_arm_gic_Hwi_Module__diagsMask__C != NULL) *ti_sysbios_family_arm_gic_Hwi_Module__diagsMask__C = mask;
}

/* Params_init */
static inline void ti_sysbios_family_arm_gic_Hwi_Params_init( ti_sysbios_family_arm_gic_Hwi_Params *prms ) 
{
    if (prms) {
        ti_sysbios_family_arm_gic_Hwi_Params__init__S(prms, 0, sizeof(ti_sysbios_family_arm_gic_Hwi_Params), sizeof(xdc_runtime_IInstance_Params));
    }
}

/* Params_copy */
static inline void ti_sysbios_family_arm_gic_Hwi_Params_copy(ti_sysbios_family_arm_gic_Hwi_Params *dst, const ti_sysbios_family_arm_gic_Hwi_Params *src) 
{
    if (dst) {
        ti_sysbios_family_arm_gic_Hwi_Params__init__S(dst, (const void *)src, sizeof(ti_sysbios_family_arm_gic_Hwi_Params), sizeof(xdc_runtime_IInstance_Params));
    }
}

/* Object_count */
#define ti_sysbios_family_arm_gic_Hwi_Object_count() ti_sysbios_family_arm_gic_Hwi_Object__count__C

/* Object_sizeof */
#define ti_sysbios_family_arm_gic_Hwi_Object_sizeof() ti_sysbios_family_arm_gic_Hwi_Object__sizeof__C

/* Object_get */
static inline ti_sysbios_family_arm_gic_Hwi_Handle ti_sysbios_family_arm_gic_Hwi_Object_get(ti_sysbios_family_arm_gic_Hwi_Instance_State *oarr, int i) 
{
    return (ti_sysbios_family_arm_gic_Hwi_Handle)ti_sysbios_family_arm_gic_Hwi_Object__get__S(oarr, i);
}

/* Object_first */
static inline ti_sysbios_family_arm_gic_Hwi_Handle ti_sysbios_family_arm_gic_Hwi_Object_first( void )
{
    return (ti_sysbios_family_arm_gic_Hwi_Handle)ti_sysbios_family_arm_gic_Hwi_Object__first__S();
}

/* Object_next */
static inline ti_sysbios_family_arm_gic_Hwi_Handle ti_sysbios_family_arm_gic_Hwi_Object_next( ti_sysbios_family_arm_gic_Hwi_Object *obj )
{
    return (ti_sysbios_family_arm_gic_Hwi_Handle)ti_sysbios_family_arm_gic_Hwi_Object__next__S(obj);
}

/* Handle_label */
static inline xdc_runtime_Types_Label *ti_sysbios_family_arm_gic_Hwi_Handle_label( ti_sysbios_family_arm_gic_Hwi_Handle inst, xdc_runtime_Types_Label *lab )
{
    return ti_sysbios_family_arm_gic_Hwi_Handle__label__S(inst, lab);
}

/* Handle_name */
static inline xdc_String ti_sysbios_family_arm_gic_Hwi_Handle_name( ti_sysbios_family_arm_gic_Hwi_Handle inst )
{
    xdc_runtime_Types_Label lab;
    return ti_sysbios_family_arm_gic_Hwi_Handle__label__S(inst, &lab)->iname;
}

/* handle */
static inline ti_sysbios_family_arm_gic_Hwi_Handle ti_sysbios_family_arm_gic_Hwi_handle( ti_sysbios_family_arm_gic_Hwi_Struct *str )
{
    return (ti_sysbios_family_arm_gic_Hwi_Handle)str;
}

/* struct */
static inline ti_sysbios_family_arm_gic_Hwi_Struct *ti_sysbios_family_arm_gic_Hwi_struct( ti_sysbios_family_arm_gic_Hwi_Handle inst )
{
    return (ti_sysbios_family_arm_gic_Hwi_Struct*)inst;
}


/*
 * ======== EPILOGUE ========
 */

#include <ti/sysbios/family/arm/gic/Hwi__epilogue.h>

#ifdef ti_sysbios_family_arm_gic_Hwi__top__
#undef __nested__
#endif

#endif /* ti_sysbios_family_arm_gic_Hwi__include */


/*
 * ======== STATE STRUCTURES ========
 */

#if defined(__config__) || (!defined(__nested__) && defined(ti_sysbios_family_arm_gic_Hwi__internalaccess))

#ifndef ti_sysbios_family_arm_gic_Hwi__include_state
#define ti_sysbios_family_arm_gic_Hwi__include_state

/* Module_State */
struct ti_sysbios_family_arm_gic_Hwi_Module_State {
    __TA_ti_sysbios_family_arm_gic_Hwi_Module_State__taskSP taskSP;
    __TA_ti_sysbios_family_arm_gic_Hwi_Module_State__isrStack isrStack;
    __TA_ti_sysbios_family_arm_gic_Hwi_Module_State__hwiStack hwiStack;
    xdc_Ptr isrStackSize;
    __TA_ti_sysbios_family_arm_gic_Hwi_Module_State__iser iser;
    __TA_ti_sysbios_family_arm_gic_Hwi_Module_State__icfgr icfgr;
    __TA_ti_sysbios_family_arm_gic_Hwi_Module_State__itargetsr itargetsr;
    xdc_UInt spuriousInts;
    xdc_UInt lastSpuriousInt;
    xdc_UInt irp;
    xdc_Ptr isrStackBase;
    __TA_ti_sysbios_family_arm_gic_Hwi_Module_State__dispatchTable dispatchTable;
    volatile xdc_UInt curIntId;
    __TA_ti_sysbios_family_arm_gic_Hwi_Module_State__igroupr igroupr;
    __TA_ti_sysbios_family_arm_gic_Hwi_Module_State__fiqStack fiqStack;
    xdc_SizeT fiqStackSize;
    __TA_ti_sysbios_family_arm_gic_Hwi_Module_State__intAffinity intAffinity;
    char __dummy;
};

/* Module__state__V */
extern struct ti_sysbios_family_arm_gic_Hwi_Module_State__ ti_sysbios_family_arm_gic_Hwi_Module__state__V;

/* Object */
struct ti_sysbios_family_arm_gic_Hwi_Object {
    const ti_sysbios_family_arm_gic_Hwi_Fxns__ *__fxns;
    ti_sysbios_family_arm_gic_Hwi_Type type;
    xdc_UInt priority;
    xdc_UArg arg;
    ti_sysbios_family_arm_gic_Hwi_FuncPtr fxn;
    ti_sysbios_family_arm_gic_Hwi_Irp irp;
    __TA_ti_sysbios_family_arm_gic_Hwi_Instance_State__hookEnv hookEnv;
    xdc_UInt triggerSensitivity;
    xdc_UInt targetProcList;
};

/* Module_State_nonPluggedHwi */
__extern __FAR__ const xdc_SizeT ti_sysbios_family_arm_gic_Hwi_Module_State_nonPluggedHwi__O;
static inline ti_sysbios_family_arm_gic_Hwi_Handle ti_sysbios_family_arm_gic_Hwi_Module_State_nonPluggedHwi()
{
    return (ti_sysbios_family_arm_gic_Hwi_Handle)(((char*)&ti_sysbios_family_arm_gic_Hwi_Module__state__V) + ti_sysbios_family_arm_gic_Hwi_Module_State_nonPluggedHwi__O);
}

#endif /* ti_sysbios_family_arm_gic_Hwi__include_state */

#endif


/*
 * ======== PREFIX ALIASES ========
 */

#if !defined(__nested__) && !defined(ti_sysbios_family_arm_gic_Hwi__nolocalnames)

#ifndef ti_sysbios_family_arm_gic_Hwi__localnames__done
#define ti_sysbios_family_arm_gic_Hwi__localnames__done

/* module prefix */
#define Hwi_Instance ti_sysbios_family_arm_gic_Hwi_Instance
#define Hwi_Handle ti_sysbios_family_arm_gic_Hwi_Handle
#define Hwi_Module ti_sysbios_family_arm_gic_Hwi_Module
#define Hwi_Object ti_sysbios_family_arm_gic_Hwi_Object
#define Hwi_Struct ti_sysbios_family_arm_gic_Hwi_Struct
#define Hwi_FuncPtr ti_sysbios_family_arm_gic_Hwi_FuncPtr
#define Hwi_Irp ti_sysbios_family_arm_gic_Hwi_Irp
#define Hwi_HookSet ti_sysbios_family_arm_gic_Hwi_HookSet
#define Hwi_MaskingOption ti_sysbios_family_arm_gic_Hwi_MaskingOption
#define Hwi_StackInfo ti_sysbios_family_arm_gic_Hwi_StackInfo
#define Hwi_Type ti_sysbios_family_arm_gic_Hwi_Type
#define Hwi_VectorFuncPtr ti_sysbios_family_arm_gic_Hwi_VectorFuncPtr
#define Hwi_Gicd ti_sysbios_family_arm_gic_Hwi_Gicd
#define Hwi_gicd ti_sysbios_family_arm_gic_Hwi_gicd
#define Hwi_Gicc ti_sysbios_family_arm_gic_Hwi_Gicc
#define Hwi_gicc ti_sysbios_family_arm_gic_Hwi_gicc
#define Hwi_Instance_State ti_sysbios_family_arm_gic_Hwi_Instance_State
#define Hwi_Module_State ti_sysbios_family_arm_gic_Hwi_Module_State
#define Hwi_MaskingOption_NONE ti_sysbios_family_arm_gic_Hwi_MaskingOption_NONE
#define Hwi_MaskingOption_ALL ti_sysbios_family_arm_gic_Hwi_MaskingOption_ALL
#define Hwi_MaskingOption_SELF ti_sysbios_family_arm_gic_Hwi_MaskingOption_SELF
#define Hwi_MaskingOption_BITMASK ti_sysbios_family_arm_gic_Hwi_MaskingOption_BITMASK
#define Hwi_MaskingOption_LOWER ti_sysbios_family_arm_gic_Hwi_MaskingOption_LOWER
#define Hwi_Type_IRQ ti_sysbios_family_arm_gic_Hwi_Type_IRQ
#define Hwi_Type_FIQ ti_sysbios_family_arm_gic_Hwi_Type_FIQ
#define Hwi_dispatcherAutoNestingSupport ti_sysbios_family_arm_gic_Hwi_dispatcherAutoNestingSupport
#define Hwi_dispatcherSwiSupport ti_sysbios_family_arm_gic_Hwi_dispatcherSwiSupport
#define Hwi_dispatcherTaskSupport ti_sysbios_family_arm_gic_Hwi_dispatcherTaskSupport
#define Hwi_dispatcherIrpTrackingSupport ti_sysbios_family_arm_gic_Hwi_dispatcherIrpTrackingSupport
#define Hwi_enableSecureMode ti_sysbios_family_arm_gic_Hwi_enableSecureMode
#define Hwi_NUM_INTERRUPTS ti_sysbios_family_arm_gic_Hwi_NUM_INTERRUPTS
#define Hwi_NUM_PRIORITY_BITS ti_sysbios_family_arm_gic_Hwi_NUM_PRIORITY_BITS
#define Hwi_MIN_INT_PRIORITY ti_sysbios_family_arm_gic_Hwi_MIN_INT_PRIORITY
#define Hwi_DEFAULT_INT_PRIORITY ti_sysbios_family_arm_gic_Hwi_DEFAULT_INT_PRIORITY
#define Hwi_BPR ti_sysbios_family_arm_gic_Hwi_BPR
#define Hwi_ABPR ti_sysbios_family_arm_gic_Hwi_ABPR
#define Hwi_enableAsidTagging ti_sysbios_family_arm_gic_Hwi_enableAsidTagging
#define Hwi_initGicd ti_sysbios_family_arm_gic_Hwi_initGicd
#define Hwi_A_badSGIIntNum ti_sysbios_family_arm_gic_Hwi_A_badSGIIntNum
#define Hwi_E_alreadyDefined ti_sysbios_family_arm_gic_Hwi_E_alreadyDefined
#define Hwi_E_handleNotFound ti_sysbios_family_arm_gic_Hwi_E_handleNotFound
#define Hwi_E_undefined ti_sysbios_family_arm_gic_Hwi_E_undefined
#define Hwi_E_badIntNum ti_sysbios_family_arm_gic_Hwi_E_badIntNum
#define Hwi_LM_begin ti_sysbios_family_arm_gic_Hwi_LM_begin
#define Hwi_LD_end ti_sysbios_family_arm_gic_Hwi_LD_end
#define Hwi_swiDisable ti_sysbios_family_arm_gic_Hwi_swiDisable
#define Hwi_swiRestoreHwi ti_sysbios_family_arm_gic_Hwi_swiRestoreHwi
#define Hwi_taskDisable ti_sysbios_family_arm_gic_Hwi_taskDisable
#define Hwi_taskRestoreHwi ti_sysbios_family_arm_gic_Hwi_taskRestoreHwi
#define Hwi_hooks ti_sysbios_family_arm_gic_Hwi_hooks
#define Hwi_Module_State_nonPluggedHwi ti_sysbios_family_arm_gic_Hwi_Module_State_nonPluggedHwi
#define Hwi_Params ti_sysbios_family_arm_gic_Hwi_Params
#define Hwi_getStackInfo ti_sysbios_family_arm_gic_Hwi_getStackInfo
#define Hwi_getCoreStackInfo ti_sysbios_family_arm_gic_Hwi_getCoreStackInfo
#define Hwi_startup ti_sysbios_family_arm_gic_Hwi_startup
#define Hwi_switchFromBootStack ti_sysbios_family_arm_gic_Hwi_switchFromBootStack
#define Hwi_post ti_sysbios_family_arm_gic_Hwi_post
#define Hwi_getTaskSP ti_sysbios_family_arm_gic_Hwi_getTaskSP
#define Hwi_disableInterrupt ti_sysbios_family_arm_gic_Hwi_disableInterrupt
#define Hwi_enableInterrupt ti_sysbios_family_arm_gic_Hwi_enableInterrupt
#define Hwi_restoreInterrupt ti_sysbios_family_arm_gic_Hwi_restoreInterrupt
#define Hwi_clearInterrupt ti_sysbios_family_arm_gic_Hwi_clearInterrupt
#define Hwi_getFunc ti_sysbios_family_arm_gic_Hwi_getFunc
#define Hwi_setFunc ti_sysbios_family_arm_gic_Hwi_setFunc
#define Hwi_getHookContext ti_sysbios_family_arm_gic_Hwi_getHookContext
#define Hwi_setHookContext ti_sysbios_family_arm_gic_Hwi_setHookContext
#define Hwi_getIrp ti_sysbios_family_arm_gic_Hwi_getIrp
#define Hwi_disable ti_sysbios_family_arm_gic_Hwi_disable
#define Hwi_enable ti_sysbios_family_arm_gic_Hwi_enable
#define Hwi_restore ti_sysbios_family_arm_gic_Hwi_restore
#define Hwi_enableIRQ ti_sysbios_family_arm_gic_Hwi_enableIRQ
#define Hwi_disableIRQ ti_sysbios_family_arm_gic_Hwi_disableIRQ
#define Hwi_restoreIRQ ti_sysbios_family_arm_gic_Hwi_restoreIRQ
#define Hwi_enableFIQ ti_sysbios_family_arm_gic_Hwi_enableFIQ
#define Hwi_disableFIQ ti_sysbios_family_arm_gic_Hwi_disableFIQ
#define Hwi_restoreFIQ ti_sysbios_family_arm_gic_Hwi_restoreFIQ
#define Hwi_disableFxn ti_sysbios_family_arm_gic_Hwi_disableFxn
#define Hwi_enableFxn ti_sysbios_family_arm_gic_Hwi_enableFxn
#define Hwi_restoreFxn ti_sysbios_family_arm_gic_Hwi_restoreFxn
#define Hwi_getHandle ti_sysbios_family_arm_gic_Hwi_getHandle
#define Hwi_init ti_sysbios_family_arm_gic_Hwi_init
#define Hwi_initIntControllerCoreX ti_sysbios_family_arm_gic_Hwi_initIntControllerCoreX
#define Hwi_raiseSGI ti_sysbios_family_arm_gic_Hwi_raiseSGI
#define Hwi_setPriority ti_sysbios_family_arm_gic_Hwi_setPriority
#define Hwi_reconfig ti_sysbios_family_arm_gic_Hwi_reconfig
#define Hwi_Module_name ti_sysbios_family_arm_gic_Hwi_Module_name
#define Hwi_Module_id ti_sysbios_family_arm_gic_Hwi_Module_id
#define Hwi_Module_startup ti_sysbios_family_arm_gic_Hwi_Module_startup
#define Hwi_Module_startupDone ti_sysbios_family_arm_gic_Hwi_Module_startupDone
#define Hwi_Module_hasMask ti_sysbios_family_arm_gic_Hwi_Module_hasMask
#define Hwi_Module_getMask ti_sysbios_family_arm_gic_Hwi_Module_getMask
#define Hwi_Module_setMask ti_sysbios_family_arm_gic_Hwi_Module_setMask
#define Hwi_Object_heap ti_sysbios_family_arm_gic_Hwi_Object_heap
#define Hwi_Module_heap ti_sysbios_family_arm_gic_Hwi_Module_heap
#define Hwi_construct ti_sysbios_family_arm_gic_Hwi_construct
#define Hwi_create ti_sysbios_family_arm_gic_Hwi_create
#define Hwi_handle ti_sysbios_family_arm_gic_Hwi_handle
#define Hwi_struct ti_sysbios_family_arm_gic_Hwi_struct
#define Hwi_Handle_label ti_sysbios_family_arm_gic_Hwi_Handle_label
#define Hwi_Handle_name ti_sysbios_family_arm_gic_Hwi_Handle_name
#define Hwi_Instance_init ti_sysbios_family_arm_gic_Hwi_Instance_init
#define Hwi_Object_count ti_sysbios_family_arm_gic_Hwi_Object_count
#define Hwi_Object_get ti_sysbios_family_arm_gic_Hwi_Object_get
#define Hwi_Object_first ti_sysbios_family_arm_gic_Hwi_Object_first
#define Hwi_Object_next ti_sysbios_family_arm_gic_Hwi_Object_next
#define Hwi_Object_sizeof ti_sysbios_family_arm_gic_Hwi_Object_sizeof
#define Hwi_Params_copy ti_sysbios_family_arm_gic_Hwi_Params_copy
#define Hwi_Params_init ti_sysbios_family_arm_gic_Hwi_Params_init
#define Hwi_Instance_finalize ti_sysbios_family_arm_gic_Hwi_Instance_finalize
#define Hwi_delete ti_sysbios_family_arm_gic_Hwi_delete
#define Hwi_destruct ti_sysbios_family_arm_gic_Hwi_destruct
#define Hwi_Module_upCast ti_sysbios_family_arm_gic_Hwi_Module_upCast
#define Hwi_Module_to_ti_sysbios_interfaces_IHwi ti_sysbios_family_arm_gic_Hwi_Module_to_ti_sysbios_interfaces_IHwi
#define Hwi_Handle_upCast ti_sysbios_family_arm_gic_Hwi_Handle_upCast
#define Hwi_Handle_to_ti_sysbios_interfaces_IHwi ti_sysbios_family_arm_gic_Hwi_Handle_to_ti_sysbios_interfaces_IHwi
#define Hwi_Handle_downCast ti_sysbios_family_arm_gic_Hwi_Handle_downCast
#define Hwi_Handle_from_ti_sysbios_interfaces_IHwi ti_sysbios_family_arm_gic_Hwi_Handle_from_ti_sysbios_interfaces_IHwi

#endif /* ti_sysbios_family_arm_gic_Hwi__localnames__done */
#endif