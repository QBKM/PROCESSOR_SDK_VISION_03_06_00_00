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

#ifndef ti_trace_SysMin__include
#define ti_trace_SysMin__include

#ifndef __nested__
#define __nested__
#define ti_trace_SysMin__top__
#endif

#ifdef __cplusplus
#define __extern extern "C"
#else
#define __extern extern
#endif

#define ti_trace_SysMin___VERS 160


/*
 * ======== INCLUDES ========
 */

#include <xdc/std.h>

#include <xdc/runtime/xdc.h>
#include <xdc/runtime/Types.h>
#include <ti/trace/package/package.defs.h>

#include <xdc/runtime/ISystemSupport.h>


/*
 * ======== AUXILIARY DEFINITIONS ========
 */

/* LINEBUFSIZE */
#define ti_trace_SysMin_LINEBUFSIZE (0x100)


/*
 * ======== INTERNAL DEFINITIONS ========
 */

/* LineBuffer */
typedef xdc_Char __T1_ti_trace_SysMin_LineBuffer__linebuf;
typedef xdc_Char __ARRAY1_ti_trace_SysMin_LineBuffer__linebuf[0x100];
typedef __ARRAY1_ti_trace_SysMin_LineBuffer__linebuf __TA_ti_trace_SysMin_LineBuffer__linebuf;
struct ti_trace_SysMin_LineBuffer {
    xdc_UInt lineidx;
    __TA_ti_trace_SysMin_LineBuffer__linebuf linebuf;
};

/* Module_State */
typedef ti_trace_SysMin_LineBuffer __T1_ti_trace_SysMin_Module_State__lineBuffers;
typedef ti_trace_SysMin_LineBuffer *__ARRAY1_ti_trace_SysMin_Module_State__lineBuffers;
typedef __ARRAY1_ti_trace_SysMin_Module_State__lineBuffers __TA_ti_trace_SysMin_Module_State__lineBuffers;
typedef xdc_Char __T1_ti_trace_SysMin_Module_State__outbuf;
typedef xdc_Char *__ARRAY1_ti_trace_SysMin_Module_State__outbuf;
typedef __ARRAY1_ti_trace_SysMin_Module_State__outbuf __TA_ti_trace_SysMin_Module_State__outbuf;
typedef xdc_UInt __T1_ti_trace_SysMin_Module_State__writeidx;
typedef xdc_UInt *__ARRAY1_ti_trace_SysMin_Module_State__writeidx;
typedef __ARRAY1_ti_trace_SysMin_Module_State__writeidx __TA_ti_trace_SysMin_Module_State__writeidx;
typedef xdc_UInt __T1_ti_trace_SysMin_Module_State__readidx;
typedef xdc_UInt *__ARRAY1_ti_trace_SysMin_Module_State__readidx;
typedef __ARRAY1_ti_trace_SysMin_Module_State__readidx __TA_ti_trace_SysMin_Module_State__readidx;


/*
 * ======== MODULE-WIDE CONFIGS ========
 */

/* Module__diagsEnabled */
typedef xdc_Bits32 CT__ti_trace_SysMin_Module__diagsEnabled;
__extern __FAR__ const CT__ti_trace_SysMin_Module__diagsEnabled ti_trace_SysMin_Module__diagsEnabled__C;

/* Module__diagsIncluded */
typedef xdc_Bits32 CT__ti_trace_SysMin_Module__diagsIncluded;
__extern __FAR__ const CT__ti_trace_SysMin_Module__diagsIncluded ti_trace_SysMin_Module__diagsIncluded__C;

/* Module__diagsMask */
typedef xdc_Bits16 *CT__ti_trace_SysMin_Module__diagsMask;
__extern __FAR__ const CT__ti_trace_SysMin_Module__diagsMask ti_trace_SysMin_Module__diagsMask__C;

/* Module__gateObj */
typedef xdc_Ptr CT__ti_trace_SysMin_Module__gateObj;
__extern __FAR__ const CT__ti_trace_SysMin_Module__gateObj ti_trace_SysMin_Module__gateObj__C;

/* Module__gatePrms */
typedef xdc_Ptr CT__ti_trace_SysMin_Module__gatePrms;
__extern __FAR__ const CT__ti_trace_SysMin_Module__gatePrms ti_trace_SysMin_Module__gatePrms__C;

/* Module__id */
typedef xdc_runtime_Types_ModuleId CT__ti_trace_SysMin_Module__id;
__extern __FAR__ const CT__ti_trace_SysMin_Module__id ti_trace_SysMin_Module__id__C;

/* Module__loggerDefined */
typedef xdc_Bool CT__ti_trace_SysMin_Module__loggerDefined;
__extern __FAR__ const CT__ti_trace_SysMin_Module__loggerDefined ti_trace_SysMin_Module__loggerDefined__C;

/* Module__loggerObj */
typedef xdc_Ptr CT__ti_trace_SysMin_Module__loggerObj;
__extern __FAR__ const CT__ti_trace_SysMin_Module__loggerObj ti_trace_SysMin_Module__loggerObj__C;

/* Module__loggerFxn0 */
typedef xdc_runtime_Types_LoggerFxn0 CT__ti_trace_SysMin_Module__loggerFxn0;
__extern __FAR__ const CT__ti_trace_SysMin_Module__loggerFxn0 ti_trace_SysMin_Module__loggerFxn0__C;

/* Module__loggerFxn1 */
typedef xdc_runtime_Types_LoggerFxn1 CT__ti_trace_SysMin_Module__loggerFxn1;
__extern __FAR__ const CT__ti_trace_SysMin_Module__loggerFxn1 ti_trace_SysMin_Module__loggerFxn1__C;

/* Module__loggerFxn2 */
typedef xdc_runtime_Types_LoggerFxn2 CT__ti_trace_SysMin_Module__loggerFxn2;
__extern __FAR__ const CT__ti_trace_SysMin_Module__loggerFxn2 ti_trace_SysMin_Module__loggerFxn2__C;

/* Module__loggerFxn4 */
typedef xdc_runtime_Types_LoggerFxn4 CT__ti_trace_SysMin_Module__loggerFxn4;
__extern __FAR__ const CT__ti_trace_SysMin_Module__loggerFxn4 ti_trace_SysMin_Module__loggerFxn4__C;

/* Module__loggerFxn8 */
typedef xdc_runtime_Types_LoggerFxn8 CT__ti_trace_SysMin_Module__loggerFxn8;
__extern __FAR__ const CT__ti_trace_SysMin_Module__loggerFxn8 ti_trace_SysMin_Module__loggerFxn8__C;

/* Module__startupDoneFxn */
typedef xdc_Bool (*CT__ti_trace_SysMin_Module__startupDoneFxn)(void);
__extern __FAR__ const CT__ti_trace_SysMin_Module__startupDoneFxn ti_trace_SysMin_Module__startupDoneFxn__C;

/* Object__count */
typedef xdc_Int CT__ti_trace_SysMin_Object__count;
__extern __FAR__ const CT__ti_trace_SysMin_Object__count ti_trace_SysMin_Object__count__C;

/* Object__heap */
typedef xdc_runtime_IHeap_Handle CT__ti_trace_SysMin_Object__heap;
__extern __FAR__ const CT__ti_trace_SysMin_Object__heap ti_trace_SysMin_Object__heap__C;

/* Object__sizeof */
typedef xdc_SizeT CT__ti_trace_SysMin_Object__sizeof;
__extern __FAR__ const CT__ti_trace_SysMin_Object__sizeof ti_trace_SysMin_Object__sizeof__C;

/* Object__table */
typedef xdc_Ptr CT__ti_trace_SysMin_Object__table;
__extern __FAR__ const CT__ti_trace_SysMin_Object__table ti_trace_SysMin_Object__table__C;

/* bufSize */
#ifdef ti_trace_SysMin_bufSize__D
#define ti_trace_SysMin_bufSize (ti_trace_SysMin_bufSize__D)
#else
#define ti_trace_SysMin_bufSize (ti_trace_SysMin_bufSize__C)
typedef xdc_SizeT CT__ti_trace_SysMin_bufSize;
__extern __FAR__ const CT__ti_trace_SysMin_bufSize ti_trace_SysMin_bufSize__C;
#endif

/* flushAtExit */
#ifdef ti_trace_SysMin_flushAtExit__D
#define ti_trace_SysMin_flushAtExit (ti_trace_SysMin_flushAtExit__D)
#else
#define ti_trace_SysMin_flushAtExit (ti_trace_SysMin_flushAtExit__C)
typedef xdc_Bool CT__ti_trace_SysMin_flushAtExit;
__extern __FAR__ const CT__ti_trace_SysMin_flushAtExit ti_trace_SysMin_flushAtExit__C;
#endif


/*
 * ======== VIRTUAL FUNCTIONS ========
 */

/* Fxns__ */
struct ti_trace_SysMin_Fxns__ {
    xdc_runtime_Types_Base* __base;
    const xdc_runtime_Types_SysFxns2* __sysp;
    xdc_Void (*abort)(xdc_CString);
    xdc_Void (*exit)(xdc_Int);
    xdc_Void (*flush)(void);
    xdc_Void (*putch)(xdc_Char);
    xdc_Bool (*ready)(void);
    xdc_runtime_Types_SysFxns2 __sfxns;
};

/* Module__FXNS__C */
__extern const ti_trace_SysMin_Fxns__ ti_trace_SysMin_Module__FXNS__C;


/*
 * ======== FUNCTION DECLARATIONS ========
 */

/* Module_startup */
#define ti_trace_SysMin_Module_startup ti_trace_SysMin_Module_startup__E
xdc__CODESECT(ti_trace_SysMin_Module_startup__E, "ti_trace_SysMin_Module_startup")
__extern xdc_Int ti_trace_SysMin_Module_startup__E( xdc_Int state );
xdc__CODESECT(ti_trace_SysMin_Module_startup__F, "ti_trace_SysMin_Module_startup")
__extern xdc_Int ti_trace_SysMin_Module_startup__F( xdc_Int state );

/* Module__startupDone__S */
xdc__CODESECT(ti_trace_SysMin_Module__startupDone__S, "ti_trace_SysMin_Module__startupDone__S")
__extern xdc_Bool ti_trace_SysMin_Module__startupDone__S( void );

/* abort__E */
#define ti_trace_SysMin_abort ti_trace_SysMin_abort__E
xdc__CODESECT(ti_trace_SysMin_abort__E, "ti_trace_SysMin_abort")
__extern xdc_Void ti_trace_SysMin_abort__E( xdc_CString str );

/* exit__E */
#define ti_trace_SysMin_exit ti_trace_SysMin_exit__E
xdc__CODESECT(ti_trace_SysMin_exit__E, "ti_trace_SysMin_exit")
__extern xdc_Void ti_trace_SysMin_exit__E( xdc_Int stat );

/* flush__E */
#define ti_trace_SysMin_flush ti_trace_SysMin_flush__E
xdc__CODESECT(ti_trace_SysMin_flush__E, "ti_trace_SysMin_flush")
__extern xdc_Void ti_trace_SysMin_flush__E( void );

/* putch__E */
#define ti_trace_SysMin_putch ti_trace_SysMin_putch__E
xdc__CODESECT(ti_trace_SysMin_putch__E, "ti_trace_SysMin_putch")
__extern xdc_Void ti_trace_SysMin_putch__E( xdc_Char ch );

/* ready__E */
#define ti_trace_SysMin_ready ti_trace_SysMin_ready__E
xdc__CODESECT(ti_trace_SysMin_ready__E, "ti_trace_SysMin_ready")
__extern xdc_Bool ti_trace_SysMin_ready__E( void );


/*
 * ======== CONVERTORS ========
 */

/* Module_upCast */
static inline xdc_runtime_ISystemSupport_Module ti_trace_SysMin_Module_upCast( void )
{
    return (xdc_runtime_ISystemSupport_Module)&ti_trace_SysMin_Module__FXNS__C;
}

/* Module_to_xdc_runtime_ISystemSupport */
#define ti_trace_SysMin_Module_to_xdc_runtime_ISystemSupport ti_trace_SysMin_Module_upCast


/*
 * ======== SYSTEM FUNCTIONS ========
 */

/* Module_startupDone */
#define ti_trace_SysMin_Module_startupDone() ti_trace_SysMin_Module__startupDone__S()

/* Object_heap */
#define ti_trace_SysMin_Object_heap() ti_trace_SysMin_Object__heap__C

/* Module_heap */
#define ti_trace_SysMin_Module_heap() ti_trace_SysMin_Object__heap__C

/* Module_id */
static inline CT__ti_trace_SysMin_Module__id ti_trace_SysMin_Module_id( void ) 
{
    return ti_trace_SysMin_Module__id__C;
}

/* Module_hasMask */
static inline xdc_Bool ti_trace_SysMin_Module_hasMask( void ) 
{
    return (xdc_Bool)(ti_trace_SysMin_Module__diagsMask__C != NULL);
}

/* Module_getMask */
static inline xdc_Bits16 ti_trace_SysMin_Module_getMask( void ) 
{
    return ti_trace_SysMin_Module__diagsMask__C != NULL ? *ti_trace_SysMin_Module__diagsMask__C : (xdc_Bits16)0;
}

/* Module_setMask */
static inline xdc_Void ti_trace_SysMin_Module_setMask( xdc_Bits16 mask ) 
{
    if (ti_trace_SysMin_Module__diagsMask__C != NULL) {
        *ti_trace_SysMin_Module__diagsMask__C = mask;
    }
}


/*
 * ======== EPILOGUE ========
 */

#ifdef ti_trace_SysMin__top__
#undef __nested__
#endif

#endif /* ti_trace_SysMin__include */


/*
 * ======== STATE STRUCTURES ========
 */

#if defined(__config__) || (!defined(__nested__) && defined(ti_trace_SysMin__internalaccess))

#ifndef ti_trace_SysMin__include_state
#define ti_trace_SysMin__include_state

/* Module_State */
struct ti_trace_SysMin_Module_State {
    __TA_ti_trace_SysMin_Module_State__lineBuffers lineBuffers;
    __TA_ti_trace_SysMin_Module_State__outbuf outbuf;
    xdc_UInt outidx;
    xdc_Bool getTime;
    xdc_Bool wrapped;
    __TA_ti_trace_SysMin_Module_State__writeidx writeidx;
    __TA_ti_trace_SysMin_Module_State__readidx readidx;
};

/* Module__state__V */
extern struct ti_trace_SysMin_Module_State__ ti_trace_SysMin_Module__state__V;

#endif /* ti_trace_SysMin__include_state */

#endif


/*
 * ======== PREFIX ALIASES ========
 */

#if !defined(__nested__) && !defined(ti_trace_SysMin__nolocalnames)

#ifndef ti_trace_SysMin__localnames__done
#define ti_trace_SysMin__localnames__done

/* module prefix */
#define SysMin_LINEBUFSIZE ti_trace_SysMin_LINEBUFSIZE
#define SysMin_LineBuffer ti_trace_SysMin_LineBuffer
#define SysMin_Module_State ti_trace_SysMin_Module_State
#define SysMin_bufSize ti_trace_SysMin_bufSize
#define SysMin_flushAtExit ti_trace_SysMin_flushAtExit
#define SysMin_abort ti_trace_SysMin_abort
#define SysMin_exit ti_trace_SysMin_exit
#define SysMin_flush ti_trace_SysMin_flush
#define SysMin_putch ti_trace_SysMin_putch
#define SysMin_ready ti_trace_SysMin_ready
#define SysMin_Module_name ti_trace_SysMin_Module_name
#define SysMin_Module_id ti_trace_SysMin_Module_id
#define SysMin_Module_startup ti_trace_SysMin_Module_startup
#define SysMin_Module_startupDone ti_trace_SysMin_Module_startupDone
#define SysMin_Module_hasMask ti_trace_SysMin_Module_hasMask
#define SysMin_Module_getMask ti_trace_SysMin_Module_getMask
#define SysMin_Module_setMask ti_trace_SysMin_Module_setMask
#define SysMin_Object_heap ti_trace_SysMin_Object_heap
#define SysMin_Module_heap ti_trace_SysMin_Module_heap
#define SysMin_Module_upCast ti_trace_SysMin_Module_upCast
#define SysMin_Module_to_xdc_runtime_ISystemSupport ti_trace_SysMin_Module_to_xdc_runtime_ISystemSupport

#endif /* ti_trace_SysMin__localnames__done */
#endif
