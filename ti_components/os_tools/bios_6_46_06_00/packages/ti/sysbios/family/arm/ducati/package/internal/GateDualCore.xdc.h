/*
 *  Do not modify this file; it is automatically 
 *  generated and any modifications will be overwritten.
 *
 * @(#) xdc-A71
 */

#ifndef ti_sysbios_family_arm_ducati_GateDualCore__INTERNAL__
#define ti_sysbios_family_arm_ducati_GateDualCore__INTERNAL__

#ifndef ti_sysbios_family_arm_ducati_GateDualCore__internalaccess
#define ti_sysbios_family_arm_ducati_GateDualCore__internalaccess
#endif

#include <ti/sysbios/family/arm/ducati/GateDualCore.h>

#undef xdc_FILE__
#ifndef xdc_FILE
#define xdc_FILE__ NULL
#else
#define xdc_FILE__ xdc_FILE
#endif

/* query */
#undef ti_sysbios_family_arm_ducati_GateDualCore_query
#define ti_sysbios_family_arm_ducati_GateDualCore_query ti_sysbios_family_arm_ducati_GateDualCore_query__E

/* enter */
#undef ti_sysbios_family_arm_ducati_GateDualCore_enter
#define ti_sysbios_family_arm_ducati_GateDualCore_enter ti_sysbios_family_arm_ducati_GateDualCore_enter__E

/* leave */
#undef ti_sysbios_family_arm_ducati_GateDualCore_leave
#define ti_sysbios_family_arm_ducati_GateDualCore_leave ti_sysbios_family_arm_ducati_GateDualCore_leave__E

/* sync */
#undef ti_sysbios_family_arm_ducati_GateDualCore_sync
#define ti_sysbios_family_arm_ducati_GateDualCore_sync ti_sysbios_family_arm_ducati_GateDualCore_sync__E

/* postInit */
#define GateDualCore_postInit ti_sysbios_family_arm_ducati_GateDualCore_postInit__I

/* Module_startup */
#undef ti_sysbios_family_arm_ducati_GateDualCore_Module_startup
#define ti_sysbios_family_arm_ducati_GateDualCore_Module_startup ti_sysbios_family_arm_ducati_GateDualCore_Module_startup__E

/* Instance_init */
#undef ti_sysbios_family_arm_ducati_GateDualCore_Instance_init
#define ti_sysbios_family_arm_ducati_GateDualCore_Instance_init ti_sysbios_family_arm_ducati_GateDualCore_Instance_init__E

/* Instance_finalize */
#undef ti_sysbios_family_arm_ducati_GateDualCore_Instance_finalize
#define ti_sysbios_family_arm_ducati_GateDualCore_Instance_finalize ti_sysbios_family_arm_ducati_GateDualCore_Instance_finalize__E

/* module */
#define GateDualCore_module ((ti_sysbios_family_arm_ducati_GateDualCore_Module_State *)(xdc__MODOBJADDR__(ti_sysbios_family_arm_ducati_GateDualCore_Module__state__V)))
#if !defined(__cplusplus) || !defined(ti_sysbios_family_arm_ducati_GateDualCore__cplusplus)
#define module ((ti_sysbios_family_arm_ducati_GateDualCore_Module_State *)(xdc__MODOBJADDR__(ti_sysbios_family_arm_ducati_GateDualCore_Module__state__V)))
#endif
/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_family_arm_ducati_GateDualCore_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_family_arm_ducati_GateDualCore_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_family_arm_ducati_GateDualCore_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_family_arm_ducati_GateDualCore_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_family_arm_ducati_GateDualCore_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_family_arm_ducati_GateDualCore_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_family_arm_ducati_GateDualCore_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_family_arm_ducati_GateDualCore_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_family_arm_ducati_GateDualCore_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_family_arm_ducati_GateDualCore_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_family_arm_ducati_GateDualCore_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_family_arm_ducati_GateDualCore_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_family_arm_ducati_GateDualCore_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_family_arm_ducati_GateDualCore_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_family_arm_ducati_GateDualCore_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_family_arm_ducati_GateDualCore_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_family_arm_ducati_GateDualCore_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_family_arm_ducati_GateDualCore_Module_GateProxy_query

/* Object__sizingError */
#line 1 "Error_inconsistent_object_size_in_ti.sysbios.family.arm.ducati.GateDualCore"
typedef char ti_sysbios_family_arm_ducati_GateDualCore_Object__sizingError[sizeof(ti_sysbios_family_arm_ducati_GateDualCore_Object) > sizeof(ti_sysbios_family_arm_ducati_GateDualCore_Struct) ? -1 : 1];


#endif /* ti_sysbios_family_arm_ducati_GateDualCore__INTERNAL____ */
