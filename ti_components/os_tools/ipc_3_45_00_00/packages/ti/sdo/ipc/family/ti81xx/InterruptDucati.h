/*
 *  Do not modify this file; it is automatically 
 *  generated and any modifications will be overwritten.
 *
 * @(#) xdc-B21
 */

/*
 * ======== GENERATED SECTIONS ========
 *     
 *     PROLOGUE
 *     INCLUDES
 *     
 *     INTERNAL DEFINITIONS
 *     MODULE-WIDE CONFIGS
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

#ifndef ti_sdo_ipc_family_ti81xx_InterruptDucati__include
#define ti_sdo_ipc_family_ti81xx_InterruptDucati__include

#ifndef __nested__
#define __nested__
#define ti_sdo_ipc_family_ti81xx_InterruptDucati__top__
#endif

#ifdef __cplusplus
#define __extern extern "C"
#else
#define __extern extern
#endif

#define ti_sdo_ipc_family_ti81xx_InterruptDucati___VERS 160


/*
 * ======== INCLUDES ========
 */

#include <xdc/std.h>

#include <xdc/runtime/xdc.h>
#include <xdc/runtime/Types.h>
#include <ti/sdo/ipc/family/ti81xx/package/package.defs.h>

#include <ti/sdo/utils/MultiProc.h>
#include <ti/sdo/ipc/notifyDrivers/IInterrupt.h>


/*
 * ======== AUXILIARY DEFINITIONS ========
 */

/* IntInfo */
typedef ti_sdo_ipc_notifyDrivers_IInterrupt_IntInfo ti_sdo_ipc_family_ti81xx_InterruptDucati_IntInfo;


/*
 * ======== INTERNAL DEFINITIONS ========
 */

/* FxnTable */
struct ti_sdo_ipc_family_ti81xx_InterruptDucati_FxnTable {
    xdc_Fxn func;
    xdc_UArg arg;
};

/* Module_State */
typedef ti_sdo_ipc_family_ti81xx_InterruptDucati_FxnTable __T1_ti_sdo_ipc_family_ti81xx_InterruptDucati_Module_State__fxnTable;
typedef ti_sdo_ipc_family_ti81xx_InterruptDucati_FxnTable __ARRAY1_ti_sdo_ipc_family_ti81xx_InterruptDucati_Module_State__fxnTable[3];
typedef __ARRAY1_ti_sdo_ipc_family_ti81xx_InterruptDucati_Module_State__fxnTable __TA_ti_sdo_ipc_family_ti81xx_InterruptDucati_Module_State__fxnTable;


/*
 * ======== MODULE-WIDE CONFIGS ========
 */

/* Module__diagsEnabled */
typedef xdc_Bits32 CT__ti_sdo_ipc_family_ti81xx_InterruptDucati_Module__diagsEnabled;
__extern __FAR__ const CT__ti_sdo_ipc_family_ti81xx_InterruptDucati_Module__diagsEnabled ti_sdo_ipc_family_ti81xx_InterruptDucati_Module__diagsEnabled__C;

/* Module__diagsIncluded */
typedef xdc_Bits32 CT__ti_sdo_ipc_family_ti81xx_InterruptDucati_Module__diagsIncluded;
__extern __FAR__ const CT__ti_sdo_ipc_family_ti81xx_InterruptDucati_Module__diagsIncluded ti_sdo_ipc_family_ti81xx_InterruptDucati_Module__diagsIncluded__C;

/* Module__diagsMask */
typedef xdc_Bits16 *CT__ti_sdo_ipc_family_ti81xx_InterruptDucati_Module__diagsMask;
__extern __FAR__ const CT__ti_sdo_ipc_family_ti81xx_InterruptDucati_Module__diagsMask ti_sdo_ipc_family_ti81xx_InterruptDucati_Module__diagsMask__C;

/* Module__gateObj */
typedef xdc_Ptr CT__ti_sdo_ipc_family_ti81xx_InterruptDucati_Module__gateObj;
__extern __FAR__ const CT__ti_sdo_ipc_family_ti81xx_InterruptDucati_Module__gateObj ti_sdo_ipc_family_ti81xx_InterruptDucati_Module__gateObj__C;

/* Module__gatePrms */
typedef xdc_Ptr CT__ti_sdo_ipc_family_ti81xx_InterruptDucati_Module__gatePrms;
__extern __FAR__ const CT__ti_sdo_ipc_family_ti81xx_InterruptDucati_Module__gatePrms ti_sdo_ipc_family_ti81xx_InterruptDucati_Module__gatePrms__C;

/* Module__id */
typedef xdc_runtime_Types_ModuleId CT__ti_sdo_ipc_family_ti81xx_InterruptDucati_Module__id;
__extern __FAR__ const CT__ti_sdo_ipc_family_ti81xx_InterruptDucati_Module__id ti_sdo_ipc_family_ti81xx_InterruptDucati_Module__id__C;

/* Module__loggerDefined */
typedef xdc_Bool CT__ti_sdo_ipc_family_ti81xx_InterruptDucati_Module__loggerDefined;
__extern __FAR__ const CT__ti_sdo_ipc_family_ti81xx_InterruptDucati_Module__loggerDefined ti_sdo_ipc_family_ti81xx_InterruptDucati_Module__loggerDefined__C;

/* Module__loggerObj */
typedef xdc_Ptr CT__ti_sdo_ipc_family_ti81xx_InterruptDucati_Module__loggerObj;
__extern __FAR__ const CT__ti_sdo_ipc_family_ti81xx_InterruptDucati_Module__loggerObj ti_sdo_ipc_family_ti81xx_InterruptDucati_Module__loggerObj__C;

/* Module__loggerFxn0 */
typedef xdc_runtime_Types_LoggerFxn0 CT__ti_sdo_ipc_family_ti81xx_InterruptDucati_Module__loggerFxn0;
__extern __FAR__ const CT__ti_sdo_ipc_family_ti81xx_InterruptDucati_Module__loggerFxn0 ti_sdo_ipc_family_ti81xx_InterruptDucati_Module__loggerFxn0__C;

/* Module__loggerFxn1 */
typedef xdc_runtime_Types_LoggerFxn1 CT__ti_sdo_ipc_family_ti81xx_InterruptDucati_Module__loggerFxn1;
__extern __FAR__ const CT__ti_sdo_ipc_family_ti81xx_InterruptDucati_Module__loggerFxn1 ti_sdo_ipc_family_ti81xx_InterruptDucati_Module__loggerFxn1__C;

/* Module__loggerFxn2 */
typedef xdc_runtime_Types_LoggerFxn2 CT__ti_sdo_ipc_family_ti81xx_InterruptDucati_Module__loggerFxn2;
__extern __FAR__ const CT__ti_sdo_ipc_family_ti81xx_InterruptDucati_Module__loggerFxn2 ti_sdo_ipc_family_ti81xx_InterruptDucati_Module__loggerFxn2__C;

/* Module__loggerFxn4 */
typedef xdc_runtime_Types_LoggerFxn4 CT__ti_sdo_ipc_family_ti81xx_InterruptDucati_Module__loggerFxn4;
__extern __FAR__ const CT__ti_sdo_ipc_family_ti81xx_InterruptDucati_Module__loggerFxn4 ti_sdo_ipc_family_ti81xx_InterruptDucati_Module__loggerFxn4__C;

/* Module__loggerFxn8 */
typedef xdc_runtime_Types_LoggerFxn8 CT__ti_sdo_ipc_family_ti81xx_InterruptDucati_Module__loggerFxn8;
__extern __FAR__ const CT__ti_sdo_ipc_family_ti81xx_InterruptDucati_Module__loggerFxn8 ti_sdo_ipc_family_ti81xx_InterruptDucati_Module__loggerFxn8__C;

/* Module__startupDoneFxn */
typedef xdc_Bool (*CT__ti_sdo_ipc_family_ti81xx_InterruptDucati_Module__startupDoneFxn)(void);
__extern __FAR__ const CT__ti_sdo_ipc_family_ti81xx_InterruptDucati_Module__startupDoneFxn ti_sdo_ipc_family_ti81xx_InterruptDucati_Module__startupDoneFxn__C;

/* Object__count */
typedef xdc_Int CT__ti_sdo_ipc_family_ti81xx_InterruptDucati_Object__count;
__extern __FAR__ const CT__ti_sdo_ipc_family_ti81xx_InterruptDucati_Object__count ti_sdo_ipc_family_ti81xx_InterruptDucati_Object__count__C;

/* Object__heap */
typedef xdc_runtime_IHeap_Handle CT__ti_sdo_ipc_family_ti81xx_InterruptDucati_Object__heap;
__extern __FAR__ const CT__ti_sdo_ipc_family_ti81xx_InterruptDucati_Object__heap ti_sdo_ipc_family_ti81xx_InterruptDucati_Object__heap__C;

/* Object__sizeof */
typedef xdc_SizeT CT__ti_sdo_ipc_family_ti81xx_InterruptDucati_Object__sizeof;
__extern __FAR__ const CT__ti_sdo_ipc_family_ti81xx_InterruptDucati_Object__sizeof ti_sdo_ipc_family_ti81xx_InterruptDucati_Object__sizeof__C;

/* Object__table */
typedef xdc_Ptr CT__ti_sdo_ipc_family_ti81xx_InterruptDucati_Object__table;
__extern __FAR__ const CT__ti_sdo_ipc_family_ti81xx_InterruptDucati_Object__table ti_sdo_ipc_family_ti81xx_InterruptDucati_Object__table__C;

/* mailboxBaseAddr */
#ifdef ti_sdo_ipc_family_ti81xx_InterruptDucati_mailboxBaseAddr__D
#define ti_sdo_ipc_family_ti81xx_InterruptDucati_mailboxBaseAddr (ti_sdo_ipc_family_ti81xx_InterruptDucati_mailboxBaseAddr__D)
#else
#define ti_sdo_ipc_family_ti81xx_InterruptDucati_mailboxBaseAddr (ti_sdo_ipc_family_ti81xx_InterruptDucati_mailboxBaseAddr__C)
typedef xdc_UInt32 CT__ti_sdo_ipc_family_ti81xx_InterruptDucati_mailboxBaseAddr;
__extern __FAR__ const CT__ti_sdo_ipc_family_ti81xx_InterruptDucati_mailboxBaseAddr ti_sdo_ipc_family_ti81xx_InterruptDucati_mailboxBaseAddr__C;
#endif

/* ducatiCtrlBaseAddr */
#ifdef ti_sdo_ipc_family_ti81xx_InterruptDucati_ducatiCtrlBaseAddr__D
#define ti_sdo_ipc_family_ti81xx_InterruptDucati_ducatiCtrlBaseAddr (ti_sdo_ipc_family_ti81xx_InterruptDucati_ducatiCtrlBaseAddr__D)
#else
#define ti_sdo_ipc_family_ti81xx_InterruptDucati_ducatiCtrlBaseAddr (ti_sdo_ipc_family_ti81xx_InterruptDucati_ducatiCtrlBaseAddr__C)
typedef xdc_UInt32 CT__ti_sdo_ipc_family_ti81xx_InterruptDucati_ducatiCtrlBaseAddr;
__extern __FAR__ const CT__ti_sdo_ipc_family_ti81xx_InterruptDucati_ducatiCtrlBaseAddr ti_sdo_ipc_family_ti81xx_InterruptDucati_ducatiCtrlBaseAddr__C;
#endif

/* dspProcId */
#ifdef ti_sdo_ipc_family_ti81xx_InterruptDucati_dspProcId__D
#define ti_sdo_ipc_family_ti81xx_InterruptDucati_dspProcId (ti_sdo_ipc_family_ti81xx_InterruptDucati_dspProcId__D)
#else
#define ti_sdo_ipc_family_ti81xx_InterruptDucati_dspProcId (ti_sdo_ipc_family_ti81xx_InterruptDucati_dspProcId__C)
typedef xdc_UInt CT__ti_sdo_ipc_family_ti81xx_InterruptDucati_dspProcId;
__extern __FAR__ const CT__ti_sdo_ipc_family_ti81xx_InterruptDucati_dspProcId ti_sdo_ipc_family_ti81xx_InterruptDucati_dspProcId__C;
#endif

/* hostProcId */
#ifdef ti_sdo_ipc_family_ti81xx_InterruptDucati_hostProcId__D
#define ti_sdo_ipc_family_ti81xx_InterruptDucati_hostProcId (ti_sdo_ipc_family_ti81xx_InterruptDucati_hostProcId__D)
#else
#define ti_sdo_ipc_family_ti81xx_InterruptDucati_hostProcId (ti_sdo_ipc_family_ti81xx_InterruptDucati_hostProcId__C)
typedef xdc_UInt CT__ti_sdo_ipc_family_ti81xx_InterruptDucati_hostProcId;
__extern __FAR__ const CT__ti_sdo_ipc_family_ti81xx_InterruptDucati_hostProcId ti_sdo_ipc_family_ti81xx_InterruptDucati_hostProcId__C;
#endif

/* videoProcId */
#ifdef ti_sdo_ipc_family_ti81xx_InterruptDucati_videoProcId__D
#define ti_sdo_ipc_family_ti81xx_InterruptDucati_videoProcId (ti_sdo_ipc_family_ti81xx_InterruptDucati_videoProcId__D)
#else
#define ti_sdo_ipc_family_ti81xx_InterruptDucati_videoProcId (ti_sdo_ipc_family_ti81xx_InterruptDucati_videoProcId__C)
typedef xdc_UInt CT__ti_sdo_ipc_family_ti81xx_InterruptDucati_videoProcId;
__extern __FAR__ const CT__ti_sdo_ipc_family_ti81xx_InterruptDucati_videoProcId ti_sdo_ipc_family_ti81xx_InterruptDucati_videoProcId__C;
#endif

/* vpssProcId */
#ifdef ti_sdo_ipc_family_ti81xx_InterruptDucati_vpssProcId__D
#define ti_sdo_ipc_family_ti81xx_InterruptDucati_vpssProcId (ti_sdo_ipc_family_ti81xx_InterruptDucati_vpssProcId__D)
#else
#define ti_sdo_ipc_family_ti81xx_InterruptDucati_vpssProcId (ti_sdo_ipc_family_ti81xx_InterruptDucati_vpssProcId__C)
typedef xdc_UInt CT__ti_sdo_ipc_family_ti81xx_InterruptDucati_vpssProcId;
__extern __FAR__ const CT__ti_sdo_ipc_family_ti81xx_InterruptDucati_vpssProcId ti_sdo_ipc_family_ti81xx_InterruptDucati_vpssProcId__C;
#endif


/*
 * ======== VIRTUAL FUNCTIONS ========
 */

/* Fxns__ */
struct ti_sdo_ipc_family_ti81xx_InterruptDucati_Fxns__ {
    xdc_runtime_Types_Base* __base;
    const xdc_runtime_Types_SysFxns2* __sysp;
    xdc_Void (*intEnable)(xdc_UInt16, ti_sdo_ipc_notifyDrivers_IInterrupt_IntInfo*);
    xdc_Void (*intDisable)(xdc_UInt16, ti_sdo_ipc_notifyDrivers_IInterrupt_IntInfo*);
    xdc_Void (*intRegister)(xdc_UInt16, ti_sdo_ipc_notifyDrivers_IInterrupt_IntInfo*, xdc_Fxn, xdc_UArg);
    xdc_Void (*intUnregister)(xdc_UInt16, ti_sdo_ipc_notifyDrivers_IInterrupt_IntInfo*);
    xdc_Void (*intSend)(xdc_UInt16, ti_sdo_ipc_notifyDrivers_IInterrupt_IntInfo*, xdc_UArg);
    xdc_Void (*intPost)(xdc_UInt16, ti_sdo_ipc_notifyDrivers_IInterrupt_IntInfo*, xdc_UArg);
    xdc_UInt (*intClear)(xdc_UInt16, ti_sdo_ipc_notifyDrivers_IInterrupt_IntInfo*);
    xdc_runtime_Types_SysFxns2 __sfxns;
};

/* Module__FXNS__C */
__extern const ti_sdo_ipc_family_ti81xx_InterruptDucati_Fxns__ ti_sdo_ipc_family_ti81xx_InterruptDucati_Module__FXNS__C;


/*
 * ======== FUNCTION DECLARATIONS ========
 */

/* Module_startup */
#define ti_sdo_ipc_family_ti81xx_InterruptDucati_Module_startup( state ) (-1)

/* Module__startupDone__S */
xdc__CODESECT(ti_sdo_ipc_family_ti81xx_InterruptDucati_Module__startupDone__S, "ti_sdo_ipc_family_ti81xx_InterruptDucati_Module__startupDone__S")
__extern xdc_Bool ti_sdo_ipc_family_ti81xx_InterruptDucati_Module__startupDone__S( void );

/* intEnable__E */
#define ti_sdo_ipc_family_ti81xx_InterruptDucati_intEnable ti_sdo_ipc_family_ti81xx_InterruptDucati_intEnable__E
xdc__CODESECT(ti_sdo_ipc_family_ti81xx_InterruptDucati_intEnable__E, "ti_sdo_ipc_family_ti81xx_InterruptDucati_intEnable")
__extern xdc_Void ti_sdo_ipc_family_ti81xx_InterruptDucati_intEnable__E( xdc_UInt16 remoteProcId, ti_sdo_ipc_notifyDrivers_IInterrupt_IntInfo *intInfo );

/* intDisable__E */
#define ti_sdo_ipc_family_ti81xx_InterruptDucati_intDisable ti_sdo_ipc_family_ti81xx_InterruptDucati_intDisable__E
xdc__CODESECT(ti_sdo_ipc_family_ti81xx_InterruptDucati_intDisable__E, "ti_sdo_ipc_family_ti81xx_InterruptDucati_intDisable")
__extern xdc_Void ti_sdo_ipc_family_ti81xx_InterruptDucati_intDisable__E( xdc_UInt16 remoteProcId, ti_sdo_ipc_notifyDrivers_IInterrupt_IntInfo *intInfo );

/* intRegister__E */
#define ti_sdo_ipc_family_ti81xx_InterruptDucati_intRegister ti_sdo_ipc_family_ti81xx_InterruptDucati_intRegister__E
xdc__CODESECT(ti_sdo_ipc_family_ti81xx_InterruptDucati_intRegister__E, "ti_sdo_ipc_family_ti81xx_InterruptDucati_intRegister")
__extern xdc_Void ti_sdo_ipc_family_ti81xx_InterruptDucati_intRegister__E( xdc_UInt16 remoteProcId, ti_sdo_ipc_notifyDrivers_IInterrupt_IntInfo *intInfo, xdc_Fxn func, xdc_UArg arg );

/* intUnregister__E */
#define ti_sdo_ipc_family_ti81xx_InterruptDucati_intUnregister ti_sdo_ipc_family_ti81xx_InterruptDucati_intUnregister__E
xdc__CODESECT(ti_sdo_ipc_family_ti81xx_InterruptDucati_intUnregister__E, "ti_sdo_ipc_family_ti81xx_InterruptDucati_intUnregister")
__extern xdc_Void ti_sdo_ipc_family_ti81xx_InterruptDucati_intUnregister__E( xdc_UInt16 remoteProcId, ti_sdo_ipc_notifyDrivers_IInterrupt_IntInfo *intInfo );

/* intSend__E */
#define ti_sdo_ipc_family_ti81xx_InterruptDucati_intSend ti_sdo_ipc_family_ti81xx_InterruptDucati_intSend__E
xdc__CODESECT(ti_sdo_ipc_family_ti81xx_InterruptDucati_intSend__E, "ti_sdo_ipc_family_ti81xx_InterruptDucati_intSend")
__extern xdc_Void ti_sdo_ipc_family_ti81xx_InterruptDucati_intSend__E( xdc_UInt16 remoteProcId, ti_sdo_ipc_notifyDrivers_IInterrupt_IntInfo *intInfo, xdc_UArg arg );

/* intPost__E */
#define ti_sdo_ipc_family_ti81xx_InterruptDucati_intPost ti_sdo_ipc_family_ti81xx_InterruptDucati_intPost__E
xdc__CODESECT(ti_sdo_ipc_family_ti81xx_InterruptDucati_intPost__E, "ti_sdo_ipc_family_ti81xx_InterruptDucati_intPost")
__extern xdc_Void ti_sdo_ipc_family_ti81xx_InterruptDucati_intPost__E( xdc_UInt16 srcProcId, ti_sdo_ipc_notifyDrivers_IInterrupt_IntInfo *intInfo, xdc_UArg arg );

/* intClear__E */
#define ti_sdo_ipc_family_ti81xx_InterruptDucati_intClear ti_sdo_ipc_family_ti81xx_InterruptDucati_intClear__E
xdc__CODESECT(ti_sdo_ipc_family_ti81xx_InterruptDucati_intClear__E, "ti_sdo_ipc_family_ti81xx_InterruptDucati_intClear")
__extern xdc_UInt ti_sdo_ipc_family_ti81xx_InterruptDucati_intClear__E( xdc_UInt16 remoteProcId, ti_sdo_ipc_notifyDrivers_IInterrupt_IntInfo *intInfo );

/* intShmDucatiStub__I */
#define ti_sdo_ipc_family_ti81xx_InterruptDucati_intShmDucatiStub ti_sdo_ipc_family_ti81xx_InterruptDucati_intShmDucatiStub__I
xdc__CODESECT(ti_sdo_ipc_family_ti81xx_InterruptDucati_intShmDucatiStub__I, "ti_sdo_ipc_family_ti81xx_InterruptDucati_intShmDucatiStub")
__extern xdc_Void ti_sdo_ipc_family_ti81xx_InterruptDucati_intShmDucatiStub__I( xdc_UArg arg );

/* intShmMbxStub__I */
#define ti_sdo_ipc_family_ti81xx_InterruptDucati_intShmMbxStub ti_sdo_ipc_family_ti81xx_InterruptDucati_intShmMbxStub__I
xdc__CODESECT(ti_sdo_ipc_family_ti81xx_InterruptDucati_intShmMbxStub__I, "ti_sdo_ipc_family_ti81xx_InterruptDucati_intShmMbxStub")
__extern xdc_Void ti_sdo_ipc_family_ti81xx_InterruptDucati_intShmMbxStub__I( xdc_UArg arg );


/*
 * ======== CONVERTORS ========
 */

/* Module_upCast */
static inline ti_sdo_ipc_notifyDrivers_IInterrupt_Module ti_sdo_ipc_family_ti81xx_InterruptDucati_Module_upCast( void )
{
    return (ti_sdo_ipc_notifyDrivers_IInterrupt_Module)&ti_sdo_ipc_family_ti81xx_InterruptDucati_Module__FXNS__C;
}

/* Module_to_ti_sdo_ipc_notifyDrivers_IInterrupt */
#define ti_sdo_ipc_family_ti81xx_InterruptDucati_Module_to_ti_sdo_ipc_notifyDrivers_IInterrupt ti_sdo_ipc_family_ti81xx_InterruptDucati_Module_upCast


/*
 * ======== SYSTEM FUNCTIONS ========
 */

/* Module_startupDone */
#define ti_sdo_ipc_family_ti81xx_InterruptDucati_Module_startupDone() ti_sdo_ipc_family_ti81xx_InterruptDucati_Module__startupDone__S()

/* Object_heap */
#define ti_sdo_ipc_family_ti81xx_InterruptDucati_Object_heap() ti_sdo_ipc_family_ti81xx_InterruptDucati_Object__heap__C

/* Module_heap */
#define ti_sdo_ipc_family_ti81xx_InterruptDucati_Module_heap() ti_sdo_ipc_family_ti81xx_InterruptDucati_Object__heap__C

/* Module_id */
static inline CT__ti_sdo_ipc_family_ti81xx_InterruptDucati_Module__id ti_sdo_ipc_family_ti81xx_InterruptDucati_Module_id( void ) 
{
    return ti_sdo_ipc_family_ti81xx_InterruptDucati_Module__id__C;
}

/* Module_hasMask */
static inline xdc_Bool ti_sdo_ipc_family_ti81xx_InterruptDucati_Module_hasMask( void ) 
{
    return (xdc_Bool)(ti_sdo_ipc_family_ti81xx_InterruptDucati_Module__diagsMask__C != NULL);
}

/* Module_getMask */
static inline xdc_Bits16 ti_sdo_ipc_family_ti81xx_InterruptDucati_Module_getMask( void ) 
{
    return ti_sdo_ipc_family_ti81xx_InterruptDucati_Module__diagsMask__C != NULL ? *ti_sdo_ipc_family_ti81xx_InterruptDucati_Module__diagsMask__C : (xdc_Bits16)0;
}

/* Module_setMask */
static inline xdc_Void ti_sdo_ipc_family_ti81xx_InterruptDucati_Module_setMask( xdc_Bits16 mask ) 
{
    if (ti_sdo_ipc_family_ti81xx_InterruptDucati_Module__diagsMask__C != NULL) {
        *ti_sdo_ipc_family_ti81xx_InterruptDucati_Module__diagsMask__C = mask;
    }
}


/*
 * ======== EPILOGUE ========
 */

#ifdef ti_sdo_ipc_family_ti81xx_InterruptDucati__top__
#undef __nested__
#endif

#endif /* ti_sdo_ipc_family_ti81xx_InterruptDucati__include */


/*
 * ======== STATE STRUCTURES ========
 */

#if defined(__config__) || (!defined(__nested__) && defined(ti_sdo_ipc_family_ti81xx_InterruptDucati__internalaccess))

#ifndef ti_sdo_ipc_family_ti81xx_InterruptDucati__include_state
#define ti_sdo_ipc_family_ti81xx_InterruptDucati__include_state

/* Module_State */
struct ti_sdo_ipc_family_ti81xx_InterruptDucati_Module_State {
    __TA_ti_sdo_ipc_family_ti81xx_InterruptDucati_Module_State__fxnTable fxnTable;
    xdc_UInt numPlugged;
};

/* Module__state__V */
extern struct ti_sdo_ipc_family_ti81xx_InterruptDucati_Module_State__ ti_sdo_ipc_family_ti81xx_InterruptDucati_Module__state__V;

#endif /* ti_sdo_ipc_family_ti81xx_InterruptDucati__include_state */

#endif


/*
 * ======== PREFIX ALIASES ========
 */

#if !defined(__nested__) && !defined(ti_sdo_ipc_family_ti81xx_InterruptDucati__nolocalnames)

#ifndef ti_sdo_ipc_family_ti81xx_InterruptDucati__localnames__done
#define ti_sdo_ipc_family_ti81xx_InterruptDucati__localnames__done

/* module prefix */
#define InterruptDucati_IntInfo ti_sdo_ipc_family_ti81xx_InterruptDucati_IntInfo
#define InterruptDucati_FxnTable ti_sdo_ipc_family_ti81xx_InterruptDucati_FxnTable
#define InterruptDucati_Module_State ti_sdo_ipc_family_ti81xx_InterruptDucati_Module_State
#define InterruptDucati_mailboxBaseAddr ti_sdo_ipc_family_ti81xx_InterruptDucati_mailboxBaseAddr
#define InterruptDucati_ducatiCtrlBaseAddr ti_sdo_ipc_family_ti81xx_InterruptDucati_ducatiCtrlBaseAddr
#define InterruptDucati_dspProcId ti_sdo_ipc_family_ti81xx_InterruptDucati_dspProcId
#define InterruptDucati_hostProcId ti_sdo_ipc_family_ti81xx_InterruptDucati_hostProcId
#define InterruptDucati_videoProcId ti_sdo_ipc_family_ti81xx_InterruptDucati_videoProcId
#define InterruptDucati_vpssProcId ti_sdo_ipc_family_ti81xx_InterruptDucati_vpssProcId
#define InterruptDucati_intEnable ti_sdo_ipc_family_ti81xx_InterruptDucati_intEnable
#define InterruptDucati_intDisable ti_sdo_ipc_family_ti81xx_InterruptDucati_intDisable
#define InterruptDucati_intRegister ti_sdo_ipc_family_ti81xx_InterruptDucati_intRegister
#define InterruptDucati_intUnregister ti_sdo_ipc_family_ti81xx_InterruptDucati_intUnregister
#define InterruptDucati_intSend ti_sdo_ipc_family_ti81xx_InterruptDucati_intSend
#define InterruptDucati_intPost ti_sdo_ipc_family_ti81xx_InterruptDucati_intPost
#define InterruptDucati_intClear ti_sdo_ipc_family_ti81xx_InterruptDucati_intClear
#define InterruptDucati_Module_name ti_sdo_ipc_family_ti81xx_InterruptDucati_Module_name
#define InterruptDucati_Module_id ti_sdo_ipc_family_ti81xx_InterruptDucati_Module_id
#define InterruptDucati_Module_startup ti_sdo_ipc_family_ti81xx_InterruptDucati_Module_startup
#define InterruptDucati_Module_startupDone ti_sdo_ipc_family_ti81xx_InterruptDucati_Module_startupDone
#define InterruptDucati_Module_hasMask ti_sdo_ipc_family_ti81xx_InterruptDucati_Module_hasMask
#define InterruptDucati_Module_getMask ti_sdo_ipc_family_ti81xx_InterruptDucati_Module_getMask
#define InterruptDucati_Module_setMask ti_sdo_ipc_family_ti81xx_InterruptDucati_Module_setMask
#define InterruptDucati_Object_heap ti_sdo_ipc_family_ti81xx_InterruptDucati_Object_heap
#define InterruptDucati_Module_heap ti_sdo_ipc_family_ti81xx_InterruptDucati_Module_heap
#define InterruptDucati_Module_upCast ti_sdo_ipc_family_ti81xx_InterruptDucati_Module_upCast
#define InterruptDucati_Module_to_ti_sdo_ipc_notifyDrivers_IInterrupt ti_sdo_ipc_family_ti81xx_InterruptDucati_Module_to_ti_sdo_ipc_notifyDrivers_IInterrupt

#endif /* ti_sdo_ipc_family_ti81xx_InterruptDucati__localnames__done */
#endif
