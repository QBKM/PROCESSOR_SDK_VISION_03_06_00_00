#
#  Do not edit this file.  This file is generated from 
#  package.bld.  Any modifications to this file will be 
#  overwritten whenever makefiles are re-generated.
#

unexport MAKEFILE_LIST
MK_NOGENDEPS := $(filter clean,$(MAKECMDGOALS))
override PKGDIR = ti/opencl/platforms/am57x_rtos
XDCINCS = -I. -I$(strip $(subst ;, -I,$(subst $(space),\$(space),$(XPKGPATH))))
XDCCFGDIR = package/cfg/

#
# The following dependencies ensure package.mak is rebuilt
# in the event that some included BOM script changes.
#
ifneq (clean,$(MAKECMDGOALS))
/datalocal1/ti_components/os_tools/linux/xdctools_3_31_02_38_core/packages/xdc/utils.js:
package.mak: /datalocal1/ti_components/os_tools/linux/xdctools_3_31_02_38_core/packages/xdc/utils.js
/datalocal1/ti_components/os_tools/linux/xdctools_3_31_02_38_core/packages/xdc/xdc.tci:
package.mak: /datalocal1/ti_components/os_tools/linux/xdctools_3_31_02_38_core/packages/xdc/xdc.tci
/datalocal1/ti_components/os_tools/linux/xdctools_3_31_02_38_core/packages/xdc/template.xs:
package.mak: /datalocal1/ti_components/os_tools/linux/xdctools_3_31_02_38_core/packages/xdc/template.xs
/datalocal1/ti_components/os_tools/linux/xdctools_3_31_02_38_core/packages/xdc/om2.xs:
package.mak: /datalocal1/ti_components/os_tools/linux/xdctools_3_31_02_38_core/packages/xdc/om2.xs
/datalocal1/ti_components/os_tools/linux/xdctools_3_31_02_38_core/packages/xdc/xmlgen.xs:
package.mak: /datalocal1/ti_components/os_tools/linux/xdctools_3_31_02_38_core/packages/xdc/xmlgen.xs
/datalocal1/ti_components/os_tools/linux/xdctools_3_31_02_38_core/packages/xdc/xmlgen2.xs:
package.mak: /datalocal1/ti_components/os_tools/linux/xdctools_3_31_02_38_core/packages/xdc/xmlgen2.xs
/datalocal1/ti_components/os_tools/linux/xdctools_3_31_02_38_core/packages/xdc/Warnings.xs:
package.mak: /datalocal1/ti_components/os_tools/linux/xdctools_3_31_02_38_core/packages/xdc/Warnings.xs
/datalocal1/ti_components/os_tools/linux/xdctools_3_31_02_38_core/packages/xdc/IPackage.xs:
package.mak: /datalocal1/ti_components/os_tools/linux/xdctools_3_31_02_38_core/packages/xdc/IPackage.xs
/datalocal1/ti_components/os_tools/linux/xdctools_3_31_02_38_core/packages/xdc/package.xs:
package.mak: /datalocal1/ti_components/os_tools/linux/xdctools_3_31_02_38_core/packages/xdc/package.xs
/datalocal1/ti_components/os_tools/linux/xdctools_3_31_02_38_core/packages/xdc/services/global/Clock.xs:
package.mak: /datalocal1/ti_components/os_tools/linux/xdctools_3_31_02_38_core/packages/xdc/services/global/Clock.xs
/datalocal1/ti_components/os_tools/linux/xdctools_3_31_02_38_core/packages/xdc/services/global/Trace.xs:
package.mak: /datalocal1/ti_components/os_tools/linux/xdctools_3_31_02_38_core/packages/xdc/services/global/Trace.xs
/datalocal1/ti_components/os_tools/linux/xdctools_3_31_02_38_core/packages/xdc/bld/bld.js:
package.mak: /datalocal1/ti_components/os_tools/linux/xdctools_3_31_02_38_core/packages/xdc/bld/bld.js
/datalocal1/ti_components/os_tools/linux/xdctools_3_31_02_38_core/packages/xdc/bld/BuildEnvironment.xs:
package.mak: /datalocal1/ti_components/os_tools/linux/xdctools_3_31_02_38_core/packages/xdc/bld/BuildEnvironment.xs
/datalocal1/ti_components/os_tools/linux/xdctools_3_31_02_38_core/packages/xdc/bld/PackageContents.xs:
package.mak: /datalocal1/ti_components/os_tools/linux/xdctools_3_31_02_38_core/packages/xdc/bld/PackageContents.xs
/datalocal1/ti_components/os_tools/linux/xdctools_3_31_02_38_core/packages/xdc/bld/_gen.xs:
package.mak: /datalocal1/ti_components/os_tools/linux/xdctools_3_31_02_38_core/packages/xdc/bld/_gen.xs
/datalocal1/ti_components/os_tools/linux/xdctools_3_31_02_38_core/packages/xdc/bld/Library.xs:
package.mak: /datalocal1/ti_components/os_tools/linux/xdctools_3_31_02_38_core/packages/xdc/bld/Library.xs
/datalocal1/ti_components/os_tools/linux/xdctools_3_31_02_38_core/packages/xdc/bld/Executable.xs:
package.mak: /datalocal1/ti_components/os_tools/linux/xdctools_3_31_02_38_core/packages/xdc/bld/Executable.xs
/datalocal1/ti_components/os_tools/linux/xdctools_3_31_02_38_core/packages/xdc/bld/Repository.xs:
package.mak: /datalocal1/ti_components/os_tools/linux/xdctools_3_31_02_38_core/packages/xdc/bld/Repository.xs
/datalocal1/ti_components/os_tools/linux/xdctools_3_31_02_38_core/packages/xdc/bld/Configuration.xs:
package.mak: /datalocal1/ti_components/os_tools/linux/xdctools_3_31_02_38_core/packages/xdc/bld/Configuration.xs
/datalocal1/ti_components/os_tools/linux/xdctools_3_31_02_38_core/packages/xdc/bld/Script.xs:
package.mak: /datalocal1/ti_components/os_tools/linux/xdctools_3_31_02_38_core/packages/xdc/bld/Script.xs
/datalocal1/ti_components/os_tools/linux/xdctools_3_31_02_38_core/packages/xdc/bld/Manifest.xs:
package.mak: /datalocal1/ti_components/os_tools/linux/xdctools_3_31_02_38_core/packages/xdc/bld/Manifest.xs
/datalocal1/ti_components/os_tools/linux/xdctools_3_31_02_38_core/packages/xdc/bld/Utils.xs:
package.mak: /datalocal1/ti_components/os_tools/linux/xdctools_3_31_02_38_core/packages/xdc/bld/Utils.xs
/datalocal1/ti_components/os_tools/linux/xdctools_3_31_02_38_core/packages/xdc/bld/ITarget.xs:
package.mak: /datalocal1/ti_components/os_tools/linux/xdctools_3_31_02_38_core/packages/xdc/bld/ITarget.xs
/datalocal1/ti_components/os_tools/linux/xdctools_3_31_02_38_core/packages/xdc/bld/ITarget2.xs:
package.mak: /datalocal1/ti_components/os_tools/linux/xdctools_3_31_02_38_core/packages/xdc/bld/ITarget2.xs
/datalocal1/ti_components/os_tools/linux/xdctools_3_31_02_38_core/packages/xdc/bld/ITarget3.xs:
package.mak: /datalocal1/ti_components/os_tools/linux/xdctools_3_31_02_38_core/packages/xdc/bld/ITarget3.xs
/datalocal1/ti_components/os_tools/linux/xdctools_3_31_02_38_core/packages/xdc/bld/ITargetFilter.xs:
package.mak: /datalocal1/ti_components/os_tools/linux/xdctools_3_31_02_38_core/packages/xdc/bld/ITargetFilter.xs
/datalocal1/ti_components/os_tools/linux/xdctools_3_31_02_38_core/packages/xdc/bld/package.xs:
package.mak: /datalocal1/ti_components/os_tools/linux/xdctools_3_31_02_38_core/packages/xdc/bld/package.xs
package.mak: config.bld
package.mak: package.bld
endif


all: .executables 
.executables: .libraries .dlls
.libraries: .interfaces

PKGCFGS := $(wildcard package.xs) package/build.cfg
.interfaces: package/package.xdc.inc package/package.defs.h package.xdc $(PKGCFGS)

-include package/package.xdc.dep
package/%.xdc.inc package/%_ti.opencl.platforms.am57x_rtos.c package/%.defs.h: %.xdc $(PKGCFGS)
	@$(MSG) generating interfaces for package ti.opencl.platforms.am57x_rtos" (because $@ is older than $(firstword $?))" ...
	$(XSRUN) -f xdc/services/intern/cmd/build.xs $(MK_IDLOPTS) -m package/package.xdc.dep -i package/package.xdc.inc package.xdc

ifeq (,$(MK_NOGENDEPS))
-include package/package.cfg.dep
endif

package/package.cfg.xdc.inc: .interfaces $(XDCROOT)/packages/xdc/cfg/cfginc.js package.xdc
	@$(MSG) generating schema include file list ...
	$(CONFIG) -f $(XDCROOT)/packages/xdc/cfg/cfginc.js ti.opencl.platforms.am57x_rtos $@

test:;
%,copy:
	@$(if $<,,$(MSG) don\'t know how to build $*; exit 1)
	@$(MSG) cp $< $@
	$(RM) $@
	$(CP) $< $@

$(XDCCFGDIR)%.c $(XDCCFGDIR)%.h $(XDCCFGDIR)%.xdl: $(XDCCFGDIR)%.cfg $(XDCROOT)/packages/xdc/cfg/Main.xs | .interfaces
	@$(MSG) "configuring $(_PROG_NAME) from $< ..."
	$(CONFIG) $(_PROG_XSOPTS) xdc.cfg $(_PROG_NAME) $(XDCCFGDIR)$*.cfg $(XDCCFGDIR)$*

.PHONY: release,ti_opencl_platforms_am57x_rtos
ifeq (,$(MK_NOGENDEPS))
-include package/rel/ti_opencl_platforms_am57x_rtos.tar.dep
endif
package/rel/ti_opencl_platforms_am57x_rtos/ti/opencl/platforms/am57x_rtos/package/package.rel.xml: package/package.bld.xml
package/rel/ti_opencl_platforms_am57x_rtos/ti/opencl/platforms/am57x_rtos/package/package.rel.xml: package/build.cfg
package/rel/ti_opencl_platforms_am57x_rtos/ti/opencl/platforms/am57x_rtos/package/package.rel.xml: package/package.xdc.inc
package/rel/ti_opencl_platforms_am57x_rtos/ti/opencl/platforms/am57x_rtos/package/package.rel.xml: package/package.cfg.xdc.inc
package/rel/ti_opencl_platforms_am57x_rtos/ti/opencl/platforms/am57x_rtos/package/package.rel.xml: .force
	@$(MSG) generating external release references $@ ...
	$(XS) $(JSENV) -f $(XDCROOT)/packages/xdc/bld/rel.js $(MK_RELOPTS) . $@

ti_opencl_platforms_am57x_rtos.tar: package/rel/ti_opencl_platforms_am57x_rtos.xdc.inc package/rel/ti_opencl_platforms_am57x_rtos/ti/opencl/platforms/am57x_rtos/package/package.rel.xml
	@$(MSG) making release file $@ "(because of $(firstword $?))" ...
	-$(RM) $@
	$(call MKRELTAR,package/rel/ti_opencl_platforms_am57x_rtos.xdc.inc,package/rel/ti_opencl_platforms_am57x_rtos.tar.dep)


release release,ti_opencl_platforms_am57x_rtos: all ti_opencl_platforms_am57x_rtos.tar
clean:: .clean
	-$(RM) ti_opencl_platforms_am57x_rtos.tar
	-$(RM) package/rel/ti_opencl_platforms_am57x_rtos.xdc.inc
	-$(RM) package/rel/ti_opencl_platforms_am57x_rtos.tar.dep

clean:: .clean
	-$(RM) .libraries $(wildcard .libraries,*)
clean:: 
	-$(RM) .dlls $(wildcard .dlls,*)
#
# The following clean rule removes user specified
# generated files or directories.
#

ifneq (clean,$(MAKECMDGOALS))
ifeq (,$(wildcard package))
    $(shell $(MKDIR) package)
endif
ifeq (,$(wildcard package/cfg))
    $(shell $(MKDIR) package/cfg)
endif
ifeq (,$(wildcard package/lib))
    $(shell $(MKDIR) package/lib)
endif
ifeq (,$(wildcard package/rel))
    $(shell $(MKDIR) package/rel)
endif
ifeq (,$(wildcard package/internal))
    $(shell $(MKDIR) package/internal)
endif
endif
clean::
	-$(RMDIR) package


