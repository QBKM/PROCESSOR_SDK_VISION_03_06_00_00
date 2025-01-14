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

#ifndef ti_ipc_transports_TransportRpmsgSetup__include
#define ti_ipc_transports_TransportRpmsgSetup__include

#ifndef __nested__
#define __nested__
#define ti_ipc_transports_TransportRpmsgSetup__top__
#endif

#ifdef __cplusplus
#define __extern extern "C"
#else
#define __extern extern
#endif

#define ti_ipc_transports_TransportRpmsgSetup___VERS 160


/*
 * ======== INCLUDES ========
 */

#include <xdc/std.h>

#include <xdc/runtime/xdc.h>
#include <xdc/runtime/Types.h>
#include <ti/ipc/transports/package/package.defs.h>

#include <ti/sdo/ipc/interfaces/ITransportSetup.h>
#include <ti/ipc/transports/TransportRpmsg.h>


/*
 * ======== AUXILIARY DEFINITIONS ========
 */


/*
 * ======== INTERNAL DEFINITIONS ========
 */

/* Module_State */
typedef ti_ipc_transports_TransportRpmsg_Handle __T1_ti_ipc_transports_TransportRpmsgSetup_Module_State__handles;
typedef ti_ipc_transports_TransportRpmsg_Handle *__ARRAY1_ti_ipc_transports_TransportRpmsgSetup_Module_State__handles;
typedef __ARRAY1_ti_ipc_transports_TransportRpmsgSetup_Module_State__handles __TA_ti_ipc_transports_TransportRpmsgSetup_Module_State__handles;


/*
 * ======== MODULE-WIDE CONFIGS ========
 */

/* Module__diagsEnabled */
typedef xdc_Bits32 CT__ti_ipc_transports_TransportRpmsgSetup_Module__diagsEnabled;
__extern __FAR__ const CT__ti_ipc_transports_TransportRpmsgSetup_Module__diagsEnabled ti_ipc_transports_TransportRpmsgSetup_Module__diagsEnabled__C;

/* Module__diagsIncluded */
typedef xdc_Bits32 CT__ti_ipc_transports_TransportRpmsgSetup_Module__diagsIncluded;
__extern __FAR__ const CT__ti_ipc_transports_TransportRpmsgSetup_Module__diagsIncluded ti_ipc_transports_TransportRpmsgSetup_Module__diagsIncluded__C;

/* Module__diagsMask */
typedef xdc_Bits16 *CT__ti_ipc_transports_TransportRpmsgSetup_Module__diagsMask;
__extern __FAR__ const CT__ti_ipc_transports_TransportRpmsgSetup_Module__diagsMask ti_ipc_transports_TransportRpmsgSetup_Module__diagsMask__C;

/* Module__gateObj */
typedef xdc_Ptr CT__ti_ipc_transports_TransportRpmsgSetup_Module__gateObj;
__extern __FAR__ const CT__ti_ipc_transports_TransportRpmsgSetup_Module__gateObj ti_ipc_transports_TransportRpmsgSetup_Module__gateObj__C;

/* Module__gatePrms */
typedef xdc_Ptr CT__ti_ipc_transports_TransportRpmsgSetup_Module__gatePrms;
__extern __FAR__ const CT__ti_ipc_transports_TransportRpmsgSetup_Module__gatePrms ti_ipc_transports_TransportRpmsgSetup_Module__gatePrms__C;

/* Module__id */
typedef xdc_runtime_Types_ModuleId CT__ti_ipc_transports_TransportRpmsgSetup_Module__id;
__extern __FAR__ const CT__ti_ipc_transports_TransportRpmsgSetup_Module__id ti_ipc_transports_TransportRpmsgSetup_Module__id__C;

/* Module__loggerDefined */
typedef xdc_Bool CT__ti_ipc_transports_TransportRpmsgSetup_Module__loggerDefined;
__extern __FAR__ const CT__ti_ipc_transports_TransportRpmsgSetup_Module__loggerDefined ti_ipc_transports_TransportRpmsgSetup_Module__loggerDefined__C;

/* Module__loggerObj */
typedef xdc_Ptr CT__ti_ipc_transports_TransportRpmsgSetup_Module__loggerObj;
__extern __FAR__ const CT__ti_ipc_transports_TransportRpmsgSetup_Module__loggerObj ti_ipc_transports_TransportRpmsgSetup_Module__loggerObj__C;

/* Module__loggerFxn0 */
typedef xdc_runtime_Types_LoggerFxn0 CT__ti_ipc_transports_TransportRpmsgSetup_Module__loggerFxn0;
__extern __FAR__ const CT__ti_ipc_transports_TransportRpmsgSetup_Module__loggerFxn0 ti_ipc_transports_TransportRpmsgSetup_Module__loggerFxn0__C;

/* Module__loggerFxn1 */
typedef xdc_runtime_Types_LoggerFxn1 CT__ti_ipc_transports_TransportRpmsgSetup_Module__loggerFxn1;
__extern __FAR__ const CT__ti_ipc_transports_TransportRpmsgSetup_Module__loggerFxn1 ti_ipc_transports_TransportRpmsgSetup_Module__loggerFxn1__C;

/* Module__loggerFxn2 */
typedef xdc_runtime_Types_LoggerFxn2 CT__ti_ipc_transports_TransportRpmsgSetup_Module__loggerFxn2;
__extern __FAR__ const CT__ti_ipc_transports_TransportRpmsgSetup_Module__loggerFxn2 ti_ipc_transports_TransportRpmsgSetup_Module__loggerFxn2__C;

/* Module__loggerFxn4 */
typedef xdc_runtime_Types_LoggerFxn4 CT__ti_ipc_transports_TransportRpmsgSetup_Module__loggerFxn4;
__extern __FAR__ const CT__ti_ipc_transports_TransportRpmsgSetup_Module__loggerFxn4 ti_ipc_transports_TransportRpmsgSetup_Module__loggerFxn4__C;

/* Module__loggerFxn8 */
typedef xdc_runtime_Types_LoggerFxn8 CT__ti_ipc_transports_TransportRpmsgSetup_Module__loggerFxn8;
__extern __FAR__ const CT__ti_ipc_transports_TransportRpmsgSetup_Module__loggerFxn8 ti_ipc_transports_TransportRpmsgSetup_Module__loggerFxn8__C;

/* Module__startupDoneFxn */
typedef xdc_Bool (*CT__ti_ipc_transports_TransportRpmsgSetup_Module__startupDoneFxn)(void);
__extern __FAR__ const CT__ti_ipc_transports_TransportRpmsgSetup_Module__startupDoneFxn ti_ipc_transports_TransportRpmsgSetup_Module__startupDoneFxn__C;

/* Object__count */
typedef xdc_Int CT__ti_ipc_transports_TransportRpmsgSetup_Object__count;
__extern __FAR__ const CT__ti_ipc_transports_TransportRpmsgSetup_Object__count ti_ipc_transports_TransportRpmsgSetup_Object__count__C;

/* Object__heap */
typedef xdc_runtime_IHeap_Handle CT__ti_ipc_transports_TransportRpmsgSetup_Object__heap;
__extern __FAR__ const CT__ti_ipc_transports_TransportRpmsgSetup_Object__heap ti_ipc_transports_TransportRpmsgSetup_Object__heap__C;

/* Object__sizeof */
typedef xdc_SizeT CT__ti_ipc_transports_TransportRpmsgSetup_Object__sizeof;
__extern __FAR__ const CT__ti_ipc_transports_TransportRpmsgSetup_Object__sizeof ti_ipc_transports_TransportRpmsgSetup_Object__sizeof__C;

/* Object__table */
typedef xdc_Ptr CT__ti_ipc_transports_TransportRpmsgSetup_Object__table;
__extern __FAR__ const CT__ti_ipc_transports_TransportRpmsgSetup_Object__table ti_ipc_transports_TransportRpmsgSetup_Object__table__C;

/* priority */
#ifdef ti_ipc_transports_TransportRpmsgSetup_priority__D
#define ti_ipc_transports_TransportRpmsgSetup_priority (ti_ipc_transports_TransportRpmsgSetup_priority__D)
#else
#define ti_ipc_transports_TransportRpmsgSetup_priority (ti_ipc_transports_TransportRpmsgSetup_priority__C)
typedef xdc_UInt CT__ti_ipc_transports_TransportRpmsgSetup_priority;
__extern __FAR__ const CT__ti_ipc_transports_TransportRpmsgSetup_priority ti_ipc_transports_TransportRpmsgSetup_priority__C;
#endif


/*
 * ======== VIRTUAL FUNCTIONS ========
 */

/* Fxns__ */
struct ti_ipc_transports_TransportRpmsgSetup_Fxns__ {
    xdc_runtime_Types_Base* __base;
    const xdc_runtime_Types_SysFxns2* __sysp;
    xdc_Int (*attach)(xdc_UInt16, xdc_Ptr);
    xdc_Int (*detach)(xdc_UInt16);
    xdc_Bool (*isRegistered)(xdc_UInt16);
    xdc_SizeT (*sharedMemReq)(xdc_Ptr);
    xdc_runtime_Types_SysFxns2 __sfxns;
};

/* Module__FXNS__C */
__extern const ti_ipc_transports_TransportRpmsgSetup_Fxns__ ti_ipc_transports_TransportRpmsgSetup_Module__FXNS__C;


/*
 * ======== FUNCTION DECLARATIONS ========
 */

/* Module_startup */
#define ti_ipc_transports_TransportRpmsgSetup_Module_startup( state ) (-1)

/* Module__startupDone__S */
xdc__CODESECT(ti_ipc_transports_TransportRpmsgSetup_Module__startupDone__S, "ti_ipc_transports_TransportRpmsgSetup_Module__startupDone__S")
__extern xdc_Bool ti_ipc_transports_TransportRpmsgSetup_Module__startupDone__S( void );

/* attach__E */
#define ti_ipc_transports_TransportRpmsgSetup_attach ti_ipc_transports_TransportRpmsgSetup_attach__E
xdc__CODESECT(ti_ipc_transports_TransportRpmsgSetup_attach__E, "ti_ipc_transports_TransportRpmsgSetup_attach")
__extern xdc_Int ti_ipc_transports_TransportRpmsgSetup_attach__E( xdc_UInt16 remoteProcId, xdc_Ptr sharedAddr );

/* detach__E */
#define ti_ipc_transports_TransportRpmsgSetup_detach ti_ipc_transports_TransportRpmsgSetup_detach__E
xdc__CODESECT(ti_ipc_transports_TransportRpmsgSetup_detach__E, "ti_ipc_transports_TransportRpmsgSetup_detach")
__extern xdc_Int ti_ipc_transports_TransportRpmsgSetup_detach__E( xdc_UInt16 remoteProcId );

/* isRegistered__E */
#define ti_ipc_transports_TransportRpmsgSetup_isRegistered ti_ipc_transports_TransportRpmsgSetup_isRegistered__E
xdc__CODESECT(ti_ipc_transports_TransportRpmsgSetup_isRegistered__E, "ti_ipc_transports_TransportRpmsgSetup_isRegistered")
__extern xdc_Bool ti_ipc_transports_TransportRpmsgSetup_isRegistered__E( xdc_UInt16 remoteProcId );

/* sharedMemReq__E */
#define ti_ipc_transports_TransportRpmsgSetup_sharedMemReq ti_ipc_transports_TransportRpmsgSetup_sharedMemReq__E
xdc__CODESECT(ti_ipc_transports_TransportRpmsgSetup_sharedMemReq__E, "ti_ipc_transports_TransportRpmsgSetup_sharedMemReq")
__extern xdc_SizeT ti_ipc_transports_TransportRpmsgSetup_sharedMemReq__E( xdc_Ptr sharedAddr );


/*
 * ======== CONVERTORS ========
 */

/* Module_upCast */
static inline ti_sdo_ipc_interfaces_ITransportSetup_Module ti_ipc_transports_TransportRpmsgSetup_Module_upCast( void )
{
    return (ti_sdo_ipc_interfaces_ITransportSetup_Module)&ti_ipc_transports_TransportRpmsgSetup_Module__FXNS__C;
}

/* Module_to_ti_sdo_ipc_interfaces_ITransportSetup */
#define ti_ipc_transports_TransportRpmsgSetup_Module_to_ti_sdo_ipc_interfaces_ITransportSetup ti_ipc_transports_TransportRpmsgSetup_Module_upCast


/*
 * ======== SYSTEM FUNCTIONS ========
 */

/* Module_startupDone */
#define ti_ipc_transports_TransportRpmsgSetup_Module_startupDone() ti_ipc_transports_TransportRpmsgSetup_Module__startupDone__S()

/* Object_heap */
#define ti_ipc_transports_TransportRpmsgSetup_Object_heap() ti_ipc_transports_TransportRpmsgSetup_Object__heap__C

/* Module_heap */
#define ti_ipc_transports_TransportRpmsgSetup_Module_heap() ti_ipc_transports_TransportRpmsgSetup_Object__heap__C

/* Module_id */
static inline CT__ti_ipc_transports_TransportRpmsgSetup_Module__id ti_ipc_transports_TransportRpmsgSetup_Module_id( void ) 
{
    return ti_ipc_transports_TransportRpmsgSetup_Module__id__C;
}

/* Module_hasMask */
static inline xdc_Bool ti_ipc_transports_TransportRpmsgSetup_Module_hasMask( void ) 
{
    return (xdc_Bool)(ti_ipc_transports_TransportRpmsgSetup_Module__diagsMask__C != NULL);
}

/* Module_getMask */
static inline xdc_Bits16 ti_ipc_transports_TransportRpmsgSetup_Module_getMask( void ) 
{
    return ti_ipc_transports_TransportRpmsgSetup_Module__diagsMask__C != NULL ? *ti_ipc_transports_TransportRpmsgSetup_Module__diagsMask__C : (xdc_Bits16)0;
}

/* Module_setMask */
static inline xdc_Void ti_ipc_transports_TransportRpmsgSetup_Module_setMask( xdc_Bits16 mask ) 
{
    if (ti_ipc_transports_TransportRpmsgSetup_Module__diagsMask__C != NULL) {
        *ti_ipc_transports_TransportRpmsgSetup_Module__diagsMask__C = mask;
    }
}


/*
 * ======== EPILOGUE ========
 */

#ifdef ti_ipc_transports_TransportRpmsgSetup__top__
#undef __nested__
#endif

#endif /* ti_ipc_transports_TransportRpmsgSetup__include */


/*
 * ======== STATE STRUCTURES ========
 */

#if defined(__config__) || (!defined(__nested__) && defined(ti_ipc_transports_TransportRpmsgSetup__internalaccess))

#ifndef ti_ipc_transports_TransportRpmsgSetup__include_state
#define ti_ipc_transports_TransportRpmsgSetup__include_state

/* Module_State */
struct ti_ipc_transports_TransportRpmsgSetup_Module_State {
    __TA_ti_ipc_transports_TransportRpmsgSetup_Module_State__handles handles;
};

/* Module__state__V */
extern struct ti_ipc_transports_TransportRpmsgSetup_Module_State__ ti_ipc_transports_TransportRpmsgSetup_Module__state__V;

#endif /* ti_ipc_transports_TransportRpmsgSetup__include_state */

#endif


/*
 * ======== PREFIX ALIASES ========
 */

#if !defined(__nested__) && !defined(ti_ipc_transports_TransportRpmsgSetup__nolocalnames)

#ifndef ti_ipc_transports_TransportRpmsgSetup__localnames__done
#define ti_ipc_transports_TransportRpmsgSetup__localnames__done

/* module prefix */
#define TransportRpmsgSetup_Module_State ti_ipc_transports_TransportRpmsgSetup_Module_State
#define TransportRpmsgSetup_priority ti_ipc_transports_TransportRpmsgSetup_priority
#define TransportRpmsgSetup_attach ti_ipc_transports_TransportRpmsgSetup_attach
#define TransportRpmsgSetup_detach ti_ipc_transports_TransportRpmsgSetup_detach
#define TransportRpmsgSetup_isRegistered ti_ipc_transports_TransportRpmsgSetup_isRegistered
#define TransportRpmsgSetup_sharedMemReq ti_ipc_transports_TransportRpmsgSetup_sharedMemReq
#define TransportRpmsgSetup_Module_name ti_ipc_transports_TransportRpmsgSetup_Module_name
#define TransportRpmsgSetup_Module_id ti_ipc_transports_TransportRpmsgSetup_Module_id
#define TransportRpmsgSetup_Module_startup ti_ipc_transports_TransportRpmsgSetup_Module_startup
#define TransportRpmsgSetup_Module_startupDone ti_ipc_transports_TransportRpmsgSetup_Module_startupDone
#define TransportRpmsgSetup_Module_hasMask ti_ipc_transports_TransportRpmsgSetup_Module_hasMask
#define TransportRpmsgSetup_Module_getMask ti_ipc_transports_TransportRpmsgSetup_Module_getMask
#define TransportRpmsgSetup_Module_setMask ti_ipc_transports_TransportRpmsgSetup_Module_setMask
#define TransportRpmsgSetup_Object_heap ti_ipc_transports_TransportRpmsgSetup_Object_heap
#define TransportRpmsgSetup_Module_heap ti_ipc_transports_TransportRpmsgSetup_Module_heap
#define TransportRpmsgSetup_Module_upCast ti_ipc_transports_TransportRpmsgSetup_Module_upCast
#define TransportRpmsgSetup_Module_to_ti_sdo_ipc_interfaces_ITransportSetup ti_ipc_transports_TransportRpmsgSetup_Module_to_ti_sdo_ipc_interfaces_ITransportSetup

#endif /* ti_ipc_transports_TransportRpmsgSetup__localnames__done */
#endif
