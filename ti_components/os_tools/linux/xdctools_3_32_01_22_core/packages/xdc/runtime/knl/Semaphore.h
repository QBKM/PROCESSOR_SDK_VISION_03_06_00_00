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
 *     FUNCTION DECLARATIONS
 *     SYSTEM FUNCTIONS
 *     
 *     EPILOGUE
 *     STATE STRUCTURES
 *     PREFIX ALIASES
 *     ROM SUPPORT
 */


/*
 * ======== PROLOGUE ========
 */

#ifndef xdc_runtime_knl_Semaphore__include
#define xdc_runtime_knl_Semaphore__include

#ifndef __nested__
#define __nested__
#define xdc_runtime_knl_Semaphore__top__
#endif

#ifdef __cplusplus
#define __extern extern "C"
#else
#define __extern extern
#endif

#define xdc_runtime_knl_Semaphore___VERS 160


/*
 * ======== INCLUDES ========
 */

#include <xdc/std.h>

#include <xdc/runtime/xdc.h>
#include <xdc/runtime/Types.h>
#include <xdc/runtime/knl/package/package.defs.h>

#include <xdc/runtime/Assert.h>
#include <xdc/runtime/Error.h>
#include <xdc/runtime/knl/ISemaphore.h>
#include <xdc/runtime/IModule.h>
#include <xdc/runtime/knl/package/Semaphore_Proxy.h>


/*
 * ======== AUXILIARY DEFINITIONS ========
 */

/* PendStatus */
enum xdc_runtime_knl_Semaphore_PendStatus {
    xdc_runtime_knl_Semaphore_PendStatus_ERROR = -1,
    xdc_runtime_knl_Semaphore_PendStatus_TIMEOUT = 0,
    xdc_runtime_knl_Semaphore_PendStatus_SUCCESS = 1
};
typedef enum xdc_runtime_knl_Semaphore_PendStatus xdc_runtime_knl_Semaphore_PendStatus;

/* FOREVER */
#define xdc_runtime_knl_Semaphore_FOREVER (~(0))


/*
 * ======== INTERNAL DEFINITIONS ========
 */


/*
 * ======== MODULE-WIDE CONFIGS ========
 */

/* Module__diagsEnabled */
typedef xdc_Bits32 CT__xdc_runtime_knl_Semaphore_Module__diagsEnabled;
__extern __FAR__ const CT__xdc_runtime_knl_Semaphore_Module__diagsEnabled xdc_runtime_knl_Semaphore_Module__diagsEnabled__C;

/* Module__diagsIncluded */
typedef xdc_Bits32 CT__xdc_runtime_knl_Semaphore_Module__diagsIncluded;
__extern __FAR__ const CT__xdc_runtime_knl_Semaphore_Module__diagsIncluded xdc_runtime_knl_Semaphore_Module__diagsIncluded__C;

/* Module__diagsMask */
typedef xdc_Bits16 *CT__xdc_runtime_knl_Semaphore_Module__diagsMask;
__extern __FAR__ const CT__xdc_runtime_knl_Semaphore_Module__diagsMask xdc_runtime_knl_Semaphore_Module__diagsMask__C;

/* Module__gateObj */
typedef xdc_Ptr CT__xdc_runtime_knl_Semaphore_Module__gateObj;
__extern __FAR__ const CT__xdc_runtime_knl_Semaphore_Module__gateObj xdc_runtime_knl_Semaphore_Module__gateObj__C;

/* Module__gatePrms */
typedef xdc_Ptr CT__xdc_runtime_knl_Semaphore_Module__gatePrms;
__extern __FAR__ const CT__xdc_runtime_knl_Semaphore_Module__gatePrms xdc_runtime_knl_Semaphore_Module__gatePrms__C;

/* Module__id */
typedef xdc_runtime_Types_ModuleId CT__xdc_runtime_knl_Semaphore_Module__id;
__extern __FAR__ const CT__xdc_runtime_knl_Semaphore_Module__id xdc_runtime_knl_Semaphore_Module__id__C;

/* Module__loggerDefined */
typedef xdc_Bool CT__xdc_runtime_knl_Semaphore_Module__loggerDefined;
__extern __FAR__ const CT__xdc_runtime_knl_Semaphore_Module__loggerDefined xdc_runtime_knl_Semaphore_Module__loggerDefined__C;

/* Module__loggerObj */
typedef xdc_Ptr CT__xdc_runtime_knl_Semaphore_Module__loggerObj;
__extern __FAR__ const CT__xdc_runtime_knl_Semaphore_Module__loggerObj xdc_runtime_knl_Semaphore_Module__loggerObj__C;

/* Module__loggerFxn0 */
typedef xdc_runtime_Types_LoggerFxn0 CT__xdc_runtime_knl_Semaphore_Module__loggerFxn0;
__extern __FAR__ const CT__xdc_runtime_knl_Semaphore_Module__loggerFxn0 xdc_runtime_knl_Semaphore_Module__loggerFxn0__C;

/* Module__loggerFxn1 */
typedef xdc_runtime_Types_LoggerFxn1 CT__xdc_runtime_knl_Semaphore_Module__loggerFxn1;
__extern __FAR__ const CT__xdc_runtime_knl_Semaphore_Module__loggerFxn1 xdc_runtime_knl_Semaphore_Module__loggerFxn1__C;

/* Module__loggerFxn2 */
typedef xdc_runtime_Types_LoggerFxn2 CT__xdc_runtime_knl_Semaphore_Module__loggerFxn2;
__extern __FAR__ const CT__xdc_runtime_knl_Semaphore_Module__loggerFxn2 xdc_runtime_knl_Semaphore_Module__loggerFxn2__C;

/* Module__loggerFxn4 */
typedef xdc_runtime_Types_LoggerFxn4 CT__xdc_runtime_knl_Semaphore_Module__loggerFxn4;
__extern __FAR__ const CT__xdc_runtime_knl_Semaphore_Module__loggerFxn4 xdc_runtime_knl_Semaphore_Module__loggerFxn4__C;

/* Module__loggerFxn8 */
typedef xdc_runtime_Types_LoggerFxn8 CT__xdc_runtime_knl_Semaphore_Module__loggerFxn8;
__extern __FAR__ const CT__xdc_runtime_knl_Semaphore_Module__loggerFxn8 xdc_runtime_knl_Semaphore_Module__loggerFxn8__C;

/* Module__startupDoneFxn */
typedef xdc_Bool (*CT__xdc_runtime_knl_Semaphore_Module__startupDoneFxn)(void);
__extern __FAR__ const CT__xdc_runtime_knl_Semaphore_Module__startupDoneFxn xdc_runtime_knl_Semaphore_Module__startupDoneFxn__C;

/* Object__count */
typedef xdc_Int CT__xdc_runtime_knl_Semaphore_Object__count;
__extern __FAR__ const CT__xdc_runtime_knl_Semaphore_Object__count xdc_runtime_knl_Semaphore_Object__count__C;

/* Object__heap */
typedef xdc_runtime_IHeap_Handle CT__xdc_runtime_knl_Semaphore_Object__heap;
__extern __FAR__ const CT__xdc_runtime_knl_Semaphore_Object__heap xdc_runtime_knl_Semaphore_Object__heap__C;

/* Object__sizeof */
typedef xdc_SizeT CT__xdc_runtime_knl_Semaphore_Object__sizeof;
__extern __FAR__ const CT__xdc_runtime_knl_Semaphore_Object__sizeof xdc_runtime_knl_Semaphore_Object__sizeof__C;

/* Object__table */
typedef xdc_Ptr CT__xdc_runtime_knl_Semaphore_Object__table;
__extern __FAR__ const CT__xdc_runtime_knl_Semaphore_Object__table xdc_runtime_knl_Semaphore_Object__table__C;


/*
 * ======== FUNCTION DECLARATIONS ========
 */

/* Module_startup */
#define xdc_runtime_knl_Semaphore_Module_startup( state ) (-1)

/* Module__startupDone__S */
xdc__CODESECT(xdc_runtime_knl_Semaphore_Module__startupDone__S, "xdc_runtime_knl_Semaphore_Module__startupDone__S")
__extern xdc_Bool xdc_runtime_knl_Semaphore_Module__startupDone__S( void );

/* pend__E */
#define xdc_runtime_knl_Semaphore_pend xdc_runtime_knl_Semaphore_pend__E
xdc__CODESECT(xdc_runtime_knl_Semaphore_pend__E, "xdc_runtime_knl_Semaphore_pend")
__extern xdc_Int xdc_runtime_knl_Semaphore_pend__E( xdc_runtime_knl_ISemaphore_Handle sem, xdc_UInt timeout, xdc_runtime_Error_Block *eb );

/* post__E */
#define xdc_runtime_knl_Semaphore_post xdc_runtime_knl_Semaphore_post__E
xdc__CODESECT(xdc_runtime_knl_Semaphore_post__E, "xdc_runtime_knl_Semaphore_post")
__extern xdc_Bool xdc_runtime_knl_Semaphore_post__E( xdc_runtime_knl_ISemaphore_Handle sem, xdc_runtime_Error_Block *eb );


/*
 * ======== SYSTEM FUNCTIONS ========
 */

/* Module_startupDone */
#define xdc_runtime_knl_Semaphore_Module_startupDone() xdc_runtime_knl_Semaphore_Module__startupDone__S()

/* Object_heap */
#define xdc_runtime_knl_Semaphore_Object_heap() xdc_runtime_knl_Semaphore_Object__heap__C

/* Module_heap */
#define xdc_runtime_knl_Semaphore_Module_heap() xdc_runtime_knl_Semaphore_Object__heap__C

/* Module_id */
static inline CT__xdc_runtime_knl_Semaphore_Module__id xdc_runtime_knl_Semaphore_Module_id( void ) 
{
    return xdc_runtime_knl_Semaphore_Module__id__C;
}

/* Module_hasMask */
static inline xdc_Bool xdc_runtime_knl_Semaphore_Module_hasMask( void ) 
{
    return (xdc_Bool)(xdc_runtime_knl_Semaphore_Module__diagsMask__C != NULL);
}

/* Module_getMask */
static inline xdc_Bits16 xdc_runtime_knl_Semaphore_Module_getMask( void ) 
{
    return xdc_runtime_knl_Semaphore_Module__diagsMask__C != NULL ? *xdc_runtime_knl_Semaphore_Module__diagsMask__C : (xdc_Bits16)0;
}

/* Module_setMask */
static inline xdc_Void xdc_runtime_knl_Semaphore_Module_setMask( xdc_Bits16 mask ) 
{
    if (xdc_runtime_knl_Semaphore_Module__diagsMask__C != NULL) {
        *xdc_runtime_knl_Semaphore_Module__diagsMask__C = mask;
    }
}


/*
 * ======== EPILOGUE ========
 */

#ifdef xdc_runtime_knl_Semaphore__top__
#undef __nested__
#endif

#endif /* xdc_runtime_knl_Semaphore__include */


/*
 * ======== STATE STRUCTURES ========
 */

#if defined(__config__) || (!defined(__nested__) && defined(xdc_runtime_knl_Semaphore__internalaccess))

#ifndef xdc_runtime_knl_Semaphore__include_state
#define xdc_runtime_knl_Semaphore__include_state


#endif /* xdc_runtime_knl_Semaphore__include_state */

#endif

/*
 * ======== PREFIX ALIASES ========
 */

#if !defined(__nested__) && !defined(xdc_runtime_knl_Semaphore__nolocalnames)

#ifndef xdc_runtime_knl_Semaphore__localnames__done
#define xdc_runtime_knl_Semaphore__localnames__done

/* module prefix */
#define Semaphore_PendStatus xdc_runtime_knl_Semaphore_PendStatus
#define Semaphore_FOREVER xdc_runtime_knl_Semaphore_FOREVER
#define Semaphore_PendStatus_ERROR xdc_runtime_knl_Semaphore_PendStatus_ERROR
#define Semaphore_PendStatus_TIMEOUT xdc_runtime_knl_Semaphore_PendStatus_TIMEOUT
#define Semaphore_PendStatus_SUCCESS xdc_runtime_knl_Semaphore_PendStatus_SUCCESS
#define Semaphore_pend xdc_runtime_knl_Semaphore_pend
#define Semaphore_post xdc_runtime_knl_Semaphore_post
#define Semaphore_Module_name xdc_runtime_knl_Semaphore_Module_name
#define Semaphore_Module_id xdc_runtime_knl_Semaphore_Module_id
#define Semaphore_Module_startup xdc_runtime_knl_Semaphore_Module_startup
#define Semaphore_Module_startupDone xdc_runtime_knl_Semaphore_Module_startupDone
#define Semaphore_Module_hasMask xdc_runtime_knl_Semaphore_Module_hasMask
#define Semaphore_Module_getMask xdc_runtime_knl_Semaphore_Module_getMask
#define Semaphore_Module_setMask xdc_runtime_knl_Semaphore_Module_setMask
#define Semaphore_Object_heap xdc_runtime_knl_Semaphore_Object_heap
#define Semaphore_Module_heap xdc_runtime_knl_Semaphore_Module_heap

/* proxies */
#include <xdc/runtime/knl/package/Semaphore_Proxy.h>

#endif /* xdc_runtime_knl_Semaphore__localnames__done */
#endif


/*
 * ======== ROM SUPPORT ========
 */

#ifdef xdc_rom_build
#define xdc_runtime_knl_Semaphore_Module__diagsEnabled__C (constPtr->xdc_runtime_knl_Semaphore_Module__diagsEnabled__C)
#define xdc_runtime_knl_Semaphore_Module__diagsIncluded__C (constPtr->xdc_runtime_knl_Semaphore_Module__diagsIncluded__C)
#define xdc_runtime_knl_Semaphore_Module__diagsMask__C (constPtr->xdc_runtime_knl_Semaphore_Module__diagsMask__C)
#define xdc_runtime_knl_Semaphore_Module__gateObj__C (constPtr->xdc_runtime_knl_Semaphore_Module__gateObj__C)
#define xdc_runtime_knl_Semaphore_Module__gatePrms__C (constPtr->xdc_runtime_knl_Semaphore_Module__gatePrms__C)
#define xdc_runtime_knl_Semaphore_Module__id__C (constPtr->xdc_runtime_knl_Semaphore_Module__id__C)
#define xdc_runtime_knl_Semaphore_Module__loggerDefined__C (constPtr->xdc_runtime_knl_Semaphore_Module__loggerDefined__C)
#define xdc_runtime_knl_Semaphore_Module__loggerObj__C (constPtr->xdc_runtime_knl_Semaphore_Module__loggerObj__C)
#define xdc_runtime_knl_Semaphore_Module__loggerFxn0__C (constPtr->xdc_runtime_knl_Semaphore_Module__loggerFxn0__C)
#define xdc_runtime_knl_Semaphore_Module__loggerFxn1__C (constPtr->xdc_runtime_knl_Semaphore_Module__loggerFxn1__C)
#define xdc_runtime_knl_Semaphore_Module__loggerFxn2__C (constPtr->xdc_runtime_knl_Semaphore_Module__loggerFxn2__C)
#define xdc_runtime_knl_Semaphore_Module__loggerFxn4__C (constPtr->xdc_runtime_knl_Semaphore_Module__loggerFxn4__C)
#define xdc_runtime_knl_Semaphore_Module__loggerFxn8__C (constPtr->xdc_runtime_knl_Semaphore_Module__loggerFxn8__C)
#define xdc_runtime_knl_Semaphore_Module__startupDoneFxn__C (constPtr->xdc_runtime_knl_Semaphore_Module__startupDoneFxn__C)
#define xdc_runtime_knl_Semaphore_Object__count__C (constPtr->xdc_runtime_knl_Semaphore_Object__count__C)
#define xdc_runtime_knl_Semaphore_Object__heap__C (constPtr->xdc_runtime_knl_Semaphore_Object__heap__C)
#define xdc_runtime_knl_Semaphore_Object__sizeof__C (constPtr->xdc_runtime_knl_Semaphore_Object__sizeof__C)
#define xdc_runtime_knl_Semaphore_Object__table__C (constPtr->xdc_runtime_knl_Semaphore_Object__table__C)
#endif
/*
 *  @(#) xdc.runtime.knl; 1, 0, 0,0; 7-26-2016 11:46:38; /db/ztree/library/trees/xdc/xdc-B21/src/packages/
 */

