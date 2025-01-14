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
 *     MODULE-WIDE CONFIGS
 *     VIRTUAL FUNCTIONS
 *     FUNCTION DECLARATIONS
 *     CONVERTORS
 *     SYSTEM FUNCTIONS
 *     
 *     EPILOGUE
 *     PREFIX ALIASES
 */


/*
 * ======== PROLOGUE ========
 */

#ifndef ti_sdo_ipc_Notify_SetupProxy__include
#define ti_sdo_ipc_Notify_SetupProxy__include

#ifndef __nested__
#define __nested__
#define ti_sdo_ipc_Notify_SetupProxy__top__
#endif

#ifdef __cplusplus
#define __extern extern "C"
#else
#define __extern extern
#endif

#define ti_sdo_ipc_Notify_SetupProxy___VERS 160


/*
 * ======== INCLUDES ========
 */

#include <xdc/std.h>

#include <xdc/runtime/xdc.h>
#include <xdc/runtime/Types.h>
#include <ti/sdo/ipc/package/package.defs.h>

#include <ti/sdo/ipc/interfaces/INotifySetup.h>


/*
 * ======== AUXILIARY DEFINITIONS ========
 */


/*
 * ======== MODULE-WIDE CONFIGS ========
 */

/* Module__diagsEnabled */
typedef xdc_Bits32 CT__ti_sdo_ipc_Notify_SetupProxy_Module__diagsEnabled;
__extern __FAR__ const CT__ti_sdo_ipc_Notify_SetupProxy_Module__diagsEnabled ti_sdo_ipc_Notify_SetupProxy_Module__diagsEnabled__C;

/* Module__diagsIncluded */
typedef xdc_Bits32 CT__ti_sdo_ipc_Notify_SetupProxy_Module__diagsIncluded;
__extern __FAR__ const CT__ti_sdo_ipc_Notify_SetupProxy_Module__diagsIncluded ti_sdo_ipc_Notify_SetupProxy_Module__diagsIncluded__C;

/* Module__diagsMask */
typedef xdc_Bits16 *CT__ti_sdo_ipc_Notify_SetupProxy_Module__diagsMask;
__extern __FAR__ const CT__ti_sdo_ipc_Notify_SetupProxy_Module__diagsMask ti_sdo_ipc_Notify_SetupProxy_Module__diagsMask__C;

/* Module__gateObj */
typedef xdc_Ptr CT__ti_sdo_ipc_Notify_SetupProxy_Module__gateObj;
__extern __FAR__ const CT__ti_sdo_ipc_Notify_SetupProxy_Module__gateObj ti_sdo_ipc_Notify_SetupProxy_Module__gateObj__C;

/* Module__gatePrms */
typedef xdc_Ptr CT__ti_sdo_ipc_Notify_SetupProxy_Module__gatePrms;
__extern __FAR__ const CT__ti_sdo_ipc_Notify_SetupProxy_Module__gatePrms ti_sdo_ipc_Notify_SetupProxy_Module__gatePrms__C;

/* Module__id */
typedef xdc_runtime_Types_ModuleId CT__ti_sdo_ipc_Notify_SetupProxy_Module__id;
__extern __FAR__ const CT__ti_sdo_ipc_Notify_SetupProxy_Module__id ti_sdo_ipc_Notify_SetupProxy_Module__id__C;

/* Module__loggerDefined */
typedef xdc_Bool CT__ti_sdo_ipc_Notify_SetupProxy_Module__loggerDefined;
__extern __FAR__ const CT__ti_sdo_ipc_Notify_SetupProxy_Module__loggerDefined ti_sdo_ipc_Notify_SetupProxy_Module__loggerDefined__C;

/* Module__loggerObj */
typedef xdc_Ptr CT__ti_sdo_ipc_Notify_SetupProxy_Module__loggerObj;
__extern __FAR__ const CT__ti_sdo_ipc_Notify_SetupProxy_Module__loggerObj ti_sdo_ipc_Notify_SetupProxy_Module__loggerObj__C;

/* Module__loggerFxn0 */
typedef xdc_runtime_Types_LoggerFxn0 CT__ti_sdo_ipc_Notify_SetupProxy_Module__loggerFxn0;
__extern __FAR__ const CT__ti_sdo_ipc_Notify_SetupProxy_Module__loggerFxn0 ti_sdo_ipc_Notify_SetupProxy_Module__loggerFxn0__C;

/* Module__loggerFxn1 */
typedef xdc_runtime_Types_LoggerFxn1 CT__ti_sdo_ipc_Notify_SetupProxy_Module__loggerFxn1;
__extern __FAR__ const CT__ti_sdo_ipc_Notify_SetupProxy_Module__loggerFxn1 ti_sdo_ipc_Notify_SetupProxy_Module__loggerFxn1__C;

/* Module__loggerFxn2 */
typedef xdc_runtime_Types_LoggerFxn2 CT__ti_sdo_ipc_Notify_SetupProxy_Module__loggerFxn2;
__extern __FAR__ const CT__ti_sdo_ipc_Notify_SetupProxy_Module__loggerFxn2 ti_sdo_ipc_Notify_SetupProxy_Module__loggerFxn2__C;

/* Module__loggerFxn4 */
typedef xdc_runtime_Types_LoggerFxn4 CT__ti_sdo_ipc_Notify_SetupProxy_Module__loggerFxn4;
__extern __FAR__ const CT__ti_sdo_ipc_Notify_SetupProxy_Module__loggerFxn4 ti_sdo_ipc_Notify_SetupProxy_Module__loggerFxn4__C;

/* Module__loggerFxn8 */
typedef xdc_runtime_Types_LoggerFxn8 CT__ti_sdo_ipc_Notify_SetupProxy_Module__loggerFxn8;
__extern __FAR__ const CT__ti_sdo_ipc_Notify_SetupProxy_Module__loggerFxn8 ti_sdo_ipc_Notify_SetupProxy_Module__loggerFxn8__C;

/* Module__startupDoneFxn */
typedef xdc_Bool (*CT__ti_sdo_ipc_Notify_SetupProxy_Module__startupDoneFxn)(void);
__extern __FAR__ const CT__ti_sdo_ipc_Notify_SetupProxy_Module__startupDoneFxn ti_sdo_ipc_Notify_SetupProxy_Module__startupDoneFxn__C;

/* Object__count */
typedef xdc_Int CT__ti_sdo_ipc_Notify_SetupProxy_Object__count;
__extern __FAR__ const CT__ti_sdo_ipc_Notify_SetupProxy_Object__count ti_sdo_ipc_Notify_SetupProxy_Object__count__C;

/* Object__heap */
typedef xdc_runtime_IHeap_Handle CT__ti_sdo_ipc_Notify_SetupProxy_Object__heap;
__extern __FAR__ const CT__ti_sdo_ipc_Notify_SetupProxy_Object__heap ti_sdo_ipc_Notify_SetupProxy_Object__heap__C;

/* Object__sizeof */
typedef xdc_SizeT CT__ti_sdo_ipc_Notify_SetupProxy_Object__sizeof;
__extern __FAR__ const CT__ti_sdo_ipc_Notify_SetupProxy_Object__sizeof ti_sdo_ipc_Notify_SetupProxy_Object__sizeof__C;

/* Object__table */
typedef xdc_Ptr CT__ti_sdo_ipc_Notify_SetupProxy_Object__table;
__extern __FAR__ const CT__ti_sdo_ipc_Notify_SetupProxy_Object__table ti_sdo_ipc_Notify_SetupProxy_Object__table__C;


/*
 * ======== VIRTUAL FUNCTIONS ========
 */

/* Fxns__ */
struct ti_sdo_ipc_Notify_SetupProxy_Fxns__ {
    xdc_runtime_Types_Base* __base;
    const xdc_runtime_Types_SysFxns2* __sysp;
    xdc_Int (*attach)(xdc_UInt16, xdc_Ptr);
    xdc_SizeT (*sharedMemReq)(xdc_UInt16, xdc_Ptr);
    xdc_UInt16 (*numIntLines)(xdc_UInt16);
    xdc_runtime_Types_SysFxns2 __sfxns;
};

/* Module__FXNS__C */
__extern const ti_sdo_ipc_Notify_SetupProxy_Fxns__ ti_sdo_ipc_Notify_SetupProxy_Module__FXNS__C;


/*
 * ======== FUNCTION DECLARATIONS ========
 */

/* Module_startup */
#define ti_sdo_ipc_Notify_SetupProxy_Module_startup( state ) (-1)

/* Handle__label__S */
xdc__CODESECT(ti_sdo_ipc_Notify_SetupProxy_Handle__label__S, "ti_sdo_ipc_Notify_SetupProxy_Handle__label__S")
__extern xdc_runtime_Types_Label *ti_sdo_ipc_Notify_SetupProxy_Handle__label__S( xdc_Ptr obj, xdc_runtime_Types_Label *lab );

/* Module__startupDone__S */
xdc__CODESECT(ti_sdo_ipc_Notify_SetupProxy_Module__startupDone__S, "ti_sdo_ipc_Notify_SetupProxy_Module__startupDone__S")
__extern xdc_Bool ti_sdo_ipc_Notify_SetupProxy_Module__startupDone__S( void );

/* Object__create__S */
xdc__CODESECT(ti_sdo_ipc_Notify_SetupProxy_Object__create__S, "ti_sdo_ipc_Notify_SetupProxy_Object__create__S")
__extern xdc_Ptr ti_sdo_ipc_Notify_SetupProxy_Object__create__S( xdc_Ptr __oa, xdc_SizeT __osz, xdc_Ptr __aa, const xdc_UChar *__pa, xdc_SizeT __psz, xdc_runtime_Error_Block *__eb );

/* Object__delete__S */
xdc__CODESECT(ti_sdo_ipc_Notify_SetupProxy_Object__delete__S, "ti_sdo_ipc_Notify_SetupProxy_Object__delete__S")
__extern xdc_Void ti_sdo_ipc_Notify_SetupProxy_Object__delete__S( xdc_Ptr instp );

/* Object__destruct__S */
xdc__CODESECT(ti_sdo_ipc_Notify_SetupProxy_Object__destruct__S, "ti_sdo_ipc_Notify_SetupProxy_Object__destruct__S")
__extern xdc_Void ti_sdo_ipc_Notify_SetupProxy_Object__destruct__S( xdc_Ptr objp );

/* Object__get__S */
xdc__CODESECT(ti_sdo_ipc_Notify_SetupProxy_Object__get__S, "ti_sdo_ipc_Notify_SetupProxy_Object__get__S")
__extern xdc_Ptr ti_sdo_ipc_Notify_SetupProxy_Object__get__S( xdc_Ptr oarr, xdc_Int i );

/* Object__first__S */
xdc__CODESECT(ti_sdo_ipc_Notify_SetupProxy_Object__first__S, "ti_sdo_ipc_Notify_SetupProxy_Object__first__S")
__extern xdc_Ptr ti_sdo_ipc_Notify_SetupProxy_Object__first__S( void );

/* Object__next__S */
xdc__CODESECT(ti_sdo_ipc_Notify_SetupProxy_Object__next__S, "ti_sdo_ipc_Notify_SetupProxy_Object__next__S")
__extern xdc_Ptr ti_sdo_ipc_Notify_SetupProxy_Object__next__S( xdc_Ptr obj );

/* Params__init__S */
xdc__CODESECT(ti_sdo_ipc_Notify_SetupProxy_Params__init__S, "ti_sdo_ipc_Notify_SetupProxy_Params__init__S")
__extern xdc_Void ti_sdo_ipc_Notify_SetupProxy_Params__init__S( xdc_Ptr dst, const xdc_Void *src, xdc_SizeT psz, xdc_SizeT isz );

/* Proxy__abstract__S */
xdc__CODESECT(ti_sdo_ipc_Notify_SetupProxy_Proxy__abstract__S, "ti_sdo_ipc_Notify_SetupProxy_Proxy__abstract__S")
__extern xdc_Bool ti_sdo_ipc_Notify_SetupProxy_Proxy__abstract__S( void );

/* Proxy__delegate__S */
xdc__CODESECT(ti_sdo_ipc_Notify_SetupProxy_Proxy__delegate__S, "ti_sdo_ipc_Notify_SetupProxy_Proxy__delegate__S")
__extern xdc_Ptr ti_sdo_ipc_Notify_SetupProxy_Proxy__delegate__S( void );

/* attach__E */
#define ti_sdo_ipc_Notify_SetupProxy_attach ti_sdo_ipc_Notify_SetupProxy_attach__E
xdc__CODESECT(ti_sdo_ipc_Notify_SetupProxy_attach__E, "ti_sdo_ipc_Notify_SetupProxy_attach")
__extern xdc_Int ti_sdo_ipc_Notify_SetupProxy_attach__E( xdc_UInt16 remoteProcId, xdc_Ptr sharedAddr );

/* sharedMemReq__E */
#define ti_sdo_ipc_Notify_SetupProxy_sharedMemReq ti_sdo_ipc_Notify_SetupProxy_sharedMemReq__E
xdc__CODESECT(ti_sdo_ipc_Notify_SetupProxy_sharedMemReq__E, "ti_sdo_ipc_Notify_SetupProxy_sharedMemReq")
__extern xdc_SizeT ti_sdo_ipc_Notify_SetupProxy_sharedMemReq__E( xdc_UInt16 remoteProcId, xdc_Ptr sharedAddr );

/* numIntLines__E */
#define ti_sdo_ipc_Notify_SetupProxy_numIntLines ti_sdo_ipc_Notify_SetupProxy_numIntLines__E
xdc__CODESECT(ti_sdo_ipc_Notify_SetupProxy_numIntLines__E, "ti_sdo_ipc_Notify_SetupProxy_numIntLines")
__extern xdc_UInt16 ti_sdo_ipc_Notify_SetupProxy_numIntLines__E( xdc_UInt16 remoteProcId );


/*
 * ======== CONVERTORS ========
 */

/* Module_upCast */
static inline ti_sdo_ipc_interfaces_INotifySetup_Module ti_sdo_ipc_Notify_SetupProxy_Module_upCast( void )
{
    return (ti_sdo_ipc_interfaces_INotifySetup_Module)ti_sdo_ipc_Notify_SetupProxy_Proxy__delegate__S();
}

/* Module_to_ti_sdo_ipc_interfaces_INotifySetup */
#define ti_sdo_ipc_Notify_SetupProxy_Module_to_ti_sdo_ipc_interfaces_INotifySetup ti_sdo_ipc_Notify_SetupProxy_Module_upCast


/*
 * ======== SYSTEM FUNCTIONS ========
 */

/* Module_startupDone */
#define ti_sdo_ipc_Notify_SetupProxy_Module_startupDone() ti_sdo_ipc_Notify_SetupProxy_Module__startupDone__S()

/* Object_heap */
#define ti_sdo_ipc_Notify_SetupProxy_Object_heap() ti_sdo_ipc_Notify_SetupProxy_Object__heap__C

/* Module_heap */
#define ti_sdo_ipc_Notify_SetupProxy_Module_heap() ti_sdo_ipc_Notify_SetupProxy_Object__heap__C

/* Module_id */
static inline CT__ti_sdo_ipc_Notify_SetupProxy_Module__id ti_sdo_ipc_Notify_SetupProxy_Module_id( void ) 
{
    return ti_sdo_ipc_Notify_SetupProxy_Module__id__C;
}

/* Proxy_abstract */
#define ti_sdo_ipc_Notify_SetupProxy_Proxy_abstract() ti_sdo_ipc_Notify_SetupProxy_Proxy__abstract__S()

/* Proxy_delegate */
#define ti_sdo_ipc_Notify_SetupProxy_Proxy_delegate() ((ti_sdo_ipc_interfaces_INotifySetup_Module)ti_sdo_ipc_Notify_SetupProxy_Proxy__delegate__S())


/*
 * ======== EPILOGUE ========
 */

#ifdef ti_sdo_ipc_Notify_SetupProxy__top__
#undef __nested__
#endif

#endif /* ti_sdo_ipc_Notify_SetupProxy__include */


/*
 * ======== PREFIX ALIASES ========
 */

#if !defined(__nested__) && !defined(ti_sdo_ipc_Notify_SetupProxy__nolocalnames)

#ifndef ti_sdo_ipc_Notify_SetupProxy__localnames__done
#define ti_sdo_ipc_Notify_SetupProxy__localnames__done

/* module prefix */
#define Notify_SetupProxy_attach ti_sdo_ipc_Notify_SetupProxy_attach
#define Notify_SetupProxy_sharedMemReq ti_sdo_ipc_Notify_SetupProxy_sharedMemReq
#define Notify_SetupProxy_numIntLines ti_sdo_ipc_Notify_SetupProxy_numIntLines
#define Notify_SetupProxy_Module_name ti_sdo_ipc_Notify_SetupProxy_Module_name
#define Notify_SetupProxy_Module_id ti_sdo_ipc_Notify_SetupProxy_Module_id
#define Notify_SetupProxy_Module_startup ti_sdo_ipc_Notify_SetupProxy_Module_startup
#define Notify_SetupProxy_Module_startupDone ti_sdo_ipc_Notify_SetupProxy_Module_startupDone
#define Notify_SetupProxy_Module_hasMask ti_sdo_ipc_Notify_SetupProxy_Module_hasMask
#define Notify_SetupProxy_Module_getMask ti_sdo_ipc_Notify_SetupProxy_Module_getMask
#define Notify_SetupProxy_Module_setMask ti_sdo_ipc_Notify_SetupProxy_Module_setMask
#define Notify_SetupProxy_Object_heap ti_sdo_ipc_Notify_SetupProxy_Object_heap
#define Notify_SetupProxy_Module_heap ti_sdo_ipc_Notify_SetupProxy_Module_heap
#define Notify_SetupProxy_Proxy_abstract ti_sdo_ipc_Notify_SetupProxy_Proxy_abstract
#define Notify_SetupProxy_Proxy_delegate ti_sdo_ipc_Notify_SetupProxy_Proxy_delegate
#define Notify_SetupProxy_Module_upCast ti_sdo_ipc_Notify_SetupProxy_Module_upCast
#define Notify_SetupProxy_Module_to_ti_sdo_ipc_interfaces_INotifySetup ti_sdo_ipc_Notify_SetupProxy_Module_to_ti_sdo_ipc_interfaces_INotifySetup

#endif /* ti_sdo_ipc_Notify_SetupProxy__localnames__done */
#endif
