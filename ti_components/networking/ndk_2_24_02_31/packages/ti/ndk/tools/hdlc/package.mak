#
#  Do not edit this file.  This file is generated from 
#  package.bld.  Any modifications to this file will be 
#  overwritten whenever makefiles are re-generated.
#

unexport MAKEFILE_LIST
MK_NOGENDEPS := $(filter clean,$(MAKECMDGOALS))
override PKGDIR = ti/ndk/tools/hdlc
XDCINCS = -I. -I$(strip $(subst ;, -I,$(subst $(space),\$(space),$(XPKGPATH))))
XDCCFGDIR = package/cfg/

#
# The following dependencies ensure package.mak is rebuilt
# in the event that some included BOM script changes.
#
ifneq (clean,$(MAKECMDGOALS))
/datalocal1/user/surya/vsdk_02_12_RC1/ti_components/os_tools/linux/xdctools_3_32_00_06_core/packages/xdc/utils.js:
package.mak: /datalocal1/user/surya/vsdk_02_12_RC1/ti_components/os_tools/linux/xdctools_3_32_00_06_core/packages/xdc/utils.js
/datalocal1/user/surya/vsdk_02_12_RC1/ti_components/os_tools/linux/xdctools_3_32_00_06_core/packages/xdc/xdc.tci:
package.mak: /datalocal1/user/surya/vsdk_02_12_RC1/ti_components/os_tools/linux/xdctools_3_32_00_06_core/packages/xdc/xdc.tci
/datalocal1/user/surya/vsdk_02_12_RC1/ti_components/os_tools/linux/xdctools_3_32_00_06_core/packages/xdc/template.xs:
package.mak: /datalocal1/user/surya/vsdk_02_12_RC1/ti_components/os_tools/linux/xdctools_3_32_00_06_core/packages/xdc/template.xs
/datalocal1/user/surya/vsdk_02_12_RC1/ti_components/os_tools/linux/xdctools_3_32_00_06_core/packages/xdc/om2.xs:
package.mak: /datalocal1/user/surya/vsdk_02_12_RC1/ti_components/os_tools/linux/xdctools_3_32_00_06_core/packages/xdc/om2.xs
/datalocal1/user/surya/vsdk_02_12_RC1/ti_components/os_tools/linux/xdctools_3_32_00_06_core/packages/xdc/xmlgen.xs:
package.mak: /datalocal1/user/surya/vsdk_02_12_RC1/ti_components/os_tools/linux/xdctools_3_32_00_06_core/packages/xdc/xmlgen.xs
/datalocal1/user/surya/vsdk_02_12_RC1/ti_components/os_tools/linux/xdctools_3_32_00_06_core/packages/xdc/xmlgen2.xs:
package.mak: /datalocal1/user/surya/vsdk_02_12_RC1/ti_components/os_tools/linux/xdctools_3_32_00_06_core/packages/xdc/xmlgen2.xs
/datalocal1/user/surya/vsdk_02_12_RC1/ti_components/os_tools/linux/xdctools_3_32_00_06_core/packages/xdc/Warnings.xs:
package.mak: /datalocal1/user/surya/vsdk_02_12_RC1/ti_components/os_tools/linux/xdctools_3_32_00_06_core/packages/xdc/Warnings.xs
/datalocal1/user/surya/vsdk_02_12_RC1/ti_components/os_tools/linux/xdctools_3_32_00_06_core/packages/xdc/IPackage.xs:
package.mak: /datalocal1/user/surya/vsdk_02_12_RC1/ti_components/os_tools/linux/xdctools_3_32_00_06_core/packages/xdc/IPackage.xs
/datalocal1/user/surya/vsdk_02_12_RC1/ti_components/os_tools/linux/xdctools_3_32_00_06_core/packages/xdc/package.xs:
package.mak: /datalocal1/user/surya/vsdk_02_12_RC1/ti_components/os_tools/linux/xdctools_3_32_00_06_core/packages/xdc/package.xs
/datalocal1/user/surya/vsdk_02_12_RC1/ti_components/os_tools/linux/xdctools_3_32_00_06_core/packages/xdc/services/global/Clock.xs:
package.mak: /datalocal1/user/surya/vsdk_02_12_RC1/ti_components/os_tools/linux/xdctools_3_32_00_06_core/packages/xdc/services/global/Clock.xs
/datalocal1/user/surya/vsdk_02_12_RC1/ti_components/os_tools/linux/xdctools_3_32_00_06_core/packages/xdc/services/global/Trace.xs:
package.mak: /datalocal1/user/surya/vsdk_02_12_RC1/ti_components/os_tools/linux/xdctools_3_32_00_06_core/packages/xdc/services/global/Trace.xs
/datalocal1/user/surya/vsdk_02_12_RC1/ti_components/os_tools/linux/xdctools_3_32_00_06_core/packages/xdc/bld/bld.js:
package.mak: /datalocal1/user/surya/vsdk_02_12_RC1/ti_components/os_tools/linux/xdctools_3_32_00_06_core/packages/xdc/bld/bld.js
/datalocal1/user/surya/vsdk_02_12_RC1/ti_components/os_tools/linux/xdctools_3_32_00_06_core/packages/xdc/bld/BuildEnvironment.xs:
package.mak: /datalocal1/user/surya/vsdk_02_12_RC1/ti_components/os_tools/linux/xdctools_3_32_00_06_core/packages/xdc/bld/BuildEnvironment.xs
/datalocal1/user/surya/vsdk_02_12_RC1/ti_components/os_tools/linux/xdctools_3_32_00_06_core/packages/xdc/bld/PackageContents.xs:
package.mak: /datalocal1/user/surya/vsdk_02_12_RC1/ti_components/os_tools/linux/xdctools_3_32_00_06_core/packages/xdc/bld/PackageContents.xs
/datalocal1/user/surya/vsdk_02_12_RC1/ti_components/os_tools/linux/xdctools_3_32_00_06_core/packages/xdc/bld/_gen.xs:
package.mak: /datalocal1/user/surya/vsdk_02_12_RC1/ti_components/os_tools/linux/xdctools_3_32_00_06_core/packages/xdc/bld/_gen.xs
/datalocal1/user/surya/vsdk_02_12_RC1/ti_components/os_tools/linux/xdctools_3_32_00_06_core/packages/xdc/bld/Library.xs:
package.mak: /datalocal1/user/surya/vsdk_02_12_RC1/ti_components/os_tools/linux/xdctools_3_32_00_06_core/packages/xdc/bld/Library.xs
/datalocal1/user/surya/vsdk_02_12_RC1/ti_components/os_tools/linux/xdctools_3_32_00_06_core/packages/xdc/bld/Executable.xs:
package.mak: /datalocal1/user/surya/vsdk_02_12_RC1/ti_components/os_tools/linux/xdctools_3_32_00_06_core/packages/xdc/bld/Executable.xs
/datalocal1/user/surya/vsdk_02_12_RC1/ti_components/os_tools/linux/xdctools_3_32_00_06_core/packages/xdc/bld/Repository.xs:
package.mak: /datalocal1/user/surya/vsdk_02_12_RC1/ti_components/os_tools/linux/xdctools_3_32_00_06_core/packages/xdc/bld/Repository.xs
/datalocal1/user/surya/vsdk_02_12_RC1/ti_components/os_tools/linux/xdctools_3_32_00_06_core/packages/xdc/bld/Configuration.xs:
package.mak: /datalocal1/user/surya/vsdk_02_12_RC1/ti_components/os_tools/linux/xdctools_3_32_00_06_core/packages/xdc/bld/Configuration.xs
/datalocal1/user/surya/vsdk_02_12_RC1/ti_components/os_tools/linux/xdctools_3_32_00_06_core/packages/xdc/bld/Script.xs:
package.mak: /datalocal1/user/surya/vsdk_02_12_RC1/ti_components/os_tools/linux/xdctools_3_32_00_06_core/packages/xdc/bld/Script.xs
/datalocal1/user/surya/vsdk_02_12_RC1/ti_components/os_tools/linux/xdctools_3_32_00_06_core/packages/xdc/bld/Manifest.xs:
package.mak: /datalocal1/user/surya/vsdk_02_12_RC1/ti_components/os_tools/linux/xdctools_3_32_00_06_core/packages/xdc/bld/Manifest.xs
/datalocal1/user/surya/vsdk_02_12_RC1/ti_components/os_tools/linux/xdctools_3_32_00_06_core/packages/xdc/bld/Utils.xs:
package.mak: /datalocal1/user/surya/vsdk_02_12_RC1/ti_components/os_tools/linux/xdctools_3_32_00_06_core/packages/xdc/bld/Utils.xs
/datalocal1/user/surya/vsdk_02_12_RC1/ti_components/os_tools/linux/xdctools_3_32_00_06_core/packages/xdc/bld/ITarget.xs:
package.mak: /datalocal1/user/surya/vsdk_02_12_RC1/ti_components/os_tools/linux/xdctools_3_32_00_06_core/packages/xdc/bld/ITarget.xs
/datalocal1/user/surya/vsdk_02_12_RC1/ti_components/os_tools/linux/xdctools_3_32_00_06_core/packages/xdc/bld/ITarget2.xs:
package.mak: /datalocal1/user/surya/vsdk_02_12_RC1/ti_components/os_tools/linux/xdctools_3_32_00_06_core/packages/xdc/bld/ITarget2.xs
/datalocal1/user/surya/vsdk_02_12_RC1/ti_components/os_tools/linux/xdctools_3_32_00_06_core/packages/xdc/bld/ITarget3.xs:
package.mak: /datalocal1/user/surya/vsdk_02_12_RC1/ti_components/os_tools/linux/xdctools_3_32_00_06_core/packages/xdc/bld/ITarget3.xs
/datalocal1/user/surya/vsdk_02_12_RC1/ti_components/os_tools/linux/xdctools_3_32_00_06_core/packages/xdc/bld/ITargetFilter.xs:
package.mak: /datalocal1/user/surya/vsdk_02_12_RC1/ti_components/os_tools/linux/xdctools_3_32_00_06_core/packages/xdc/bld/ITargetFilter.xs
/datalocal1/user/surya/vsdk_02_12_RC1/ti_components/os_tools/linux/xdctools_3_32_00_06_core/packages/xdc/bld/package.xs:
package.mak: /datalocal1/user/surya/vsdk_02_12_RC1/ti_components/os_tools/linux/xdctools_3_32_00_06_core/packages/xdc/bld/package.xs
/datalocal1/user/surya/vsdk_02_12_RC1/ti_components/networking/ndk_2_24_02_31/ndk.bld:
package.mak: /datalocal1/user/surya/vsdk_02_12_RC1/ti_components/networking/ndk_2_24_02_31/ndk.bld
/datalocal1/user/surya/vsdk_02_12_RC1/ti_components/os_tools/bios_6_46_00_23/packages/ti/targets/ITarget.xs:
package.mak: /datalocal1/user/surya/vsdk_02_12_RC1/ti_components/os_tools/bios_6_46_00_23/packages/ti/targets/ITarget.xs
/datalocal1/user/surya/vsdk_02_12_RC1/ti_components/os_tools/bios_6_46_00_23/packages/ti/targets/C28_large.xs:
package.mak: /datalocal1/user/surya/vsdk_02_12_RC1/ti_components/os_tools/bios_6_46_00_23/packages/ti/targets/C28_large.xs
/datalocal1/user/surya/vsdk_02_12_RC1/ti_components/os_tools/bios_6_46_00_23/packages/ti/targets/C28_float.xs:
package.mak: /datalocal1/user/surya/vsdk_02_12_RC1/ti_components/os_tools/bios_6_46_00_23/packages/ti/targets/C28_float.xs
/datalocal1/user/surya/vsdk_02_12_RC1/ti_components/os_tools/bios_6_46_00_23/packages/ti/targets/package.xs:
package.mak: /datalocal1/user/surya/vsdk_02_12_RC1/ti_components/os_tools/bios_6_46_00_23/packages/ti/targets/package.xs
/datalocal1/user/surya/vsdk_02_12_RC1/ti_components/os_tools/bios_6_46_00_23/packages/ti/targets/arm/elf/IArm.xs:
package.mak: /datalocal1/user/surya/vsdk_02_12_RC1/ti_components/os_tools/bios_6_46_00_23/packages/ti/targets/arm/elf/IArm.xs
/datalocal1/user/surya/vsdk_02_12_RC1/ti_components/os_tools/bios_6_46_00_23/packages/ti/targets/arm/elf/package.xs:
package.mak: /datalocal1/user/surya/vsdk_02_12_RC1/ti_components/os_tools/bios_6_46_00_23/packages/ti/targets/arm/elf/package.xs
/datalocal1/user/surya/vsdk_02_12_RC1/ti_components/os_tools/bios_6_46_00_23/packages/ti/targets/elf/ITarget.xs:
package.mak: /datalocal1/user/surya/vsdk_02_12_RC1/ti_components/os_tools/bios_6_46_00_23/packages/ti/targets/elf/ITarget.xs
/datalocal1/user/surya/vsdk_02_12_RC1/ti_components/os_tools/bios_6_46_00_23/packages/ti/targets/elf/package.xs:
package.mak: /datalocal1/user/surya/vsdk_02_12_RC1/ti_components/os_tools/bios_6_46_00_23/packages/ti/targets/elf/package.xs
/datalocal1/user/surya/vsdk_02_12_RC1/ti_components/os_tools/bios_6_46_00_23/packages/gnu/targets/ITarget.xs:
package.mak: /datalocal1/user/surya/vsdk_02_12_RC1/ti_components/os_tools/bios_6_46_00_23/packages/gnu/targets/ITarget.xs
/datalocal1/user/surya/vsdk_02_12_RC1/ti_components/os_tools/bios_6_46_00_23/packages/gnu/targets/_utils.xs:
package.mak: /datalocal1/user/surya/vsdk_02_12_RC1/ti_components/os_tools/bios_6_46_00_23/packages/gnu/targets/_utils.xs
/datalocal1/user/surya/vsdk_02_12_RC1/ti_components/os_tools/bios_6_46_00_23/packages/gnu/targets/Linux86.xs:
package.mak: /datalocal1/user/surya/vsdk_02_12_RC1/ti_components/os_tools/bios_6_46_00_23/packages/gnu/targets/Linux86.xs
/datalocal1/user/surya/vsdk_02_12_RC1/ti_components/os_tools/bios_6_46_00_23/packages/gnu/targets/Mingw.xs:
package.mak: /datalocal1/user/surya/vsdk_02_12_RC1/ti_components/os_tools/bios_6_46_00_23/packages/gnu/targets/Mingw.xs
/datalocal1/user/surya/vsdk_02_12_RC1/ti_components/os_tools/bios_6_46_00_23/packages/gnu/targets/package.xs:
package.mak: /datalocal1/user/surya/vsdk_02_12_RC1/ti_components/os_tools/bios_6_46_00_23/packages/gnu/targets/package.xs
/datalocal1/user/surya/vsdk_02_12_RC1/ti_components/os_tools/bios_6_46_00_23/packages/gnu/targets/arm/ITarget.xs:
package.mak: /datalocal1/user/surya/vsdk_02_12_RC1/ti_components/os_tools/bios_6_46_00_23/packages/gnu/targets/arm/ITarget.xs
/datalocal1/user/surya/vsdk_02_12_RC1/ti_components/os_tools/bios_6_46_00_23/packages/gnu/targets/arm/GCArmv6.xs:
package.mak: /datalocal1/user/surya/vsdk_02_12_RC1/ti_components/os_tools/bios_6_46_00_23/packages/gnu/targets/arm/GCArmv6.xs
/datalocal1/user/surya/vsdk_02_12_RC1/ti_components/os_tools/bios_6_46_00_23/packages/gnu/targets/arm/GCArmv7A.xs:
package.mak: /datalocal1/user/surya/vsdk_02_12_RC1/ti_components/os_tools/bios_6_46_00_23/packages/gnu/targets/arm/GCArmv7A.xs
/datalocal1/user/surya/vsdk_02_12_RC1/ti_components/os_tools/bios_6_46_00_23/packages/gnu/targets/arm/IM.xs:
package.mak: /datalocal1/user/surya/vsdk_02_12_RC1/ti_components/os_tools/bios_6_46_00_23/packages/gnu/targets/arm/IM.xs
/datalocal1/user/surya/vsdk_02_12_RC1/ti_components/os_tools/bios_6_46_00_23/packages/gnu/targets/arm/M3.xs:
package.mak: /datalocal1/user/surya/vsdk_02_12_RC1/ti_components/os_tools/bios_6_46_00_23/packages/gnu/targets/arm/M3.xs
/datalocal1/user/surya/vsdk_02_12_RC1/ti_components/os_tools/bios_6_46_00_23/packages/gnu/targets/arm/M4.xs:
package.mak: /datalocal1/user/surya/vsdk_02_12_RC1/ti_components/os_tools/bios_6_46_00_23/packages/gnu/targets/arm/M4.xs
/datalocal1/user/surya/vsdk_02_12_RC1/ti_components/os_tools/bios_6_46_00_23/packages/gnu/targets/arm/M4F.xs:
package.mak: /datalocal1/user/surya/vsdk_02_12_RC1/ti_components/os_tools/bios_6_46_00_23/packages/gnu/targets/arm/M4F.xs
/datalocal1/user/surya/vsdk_02_12_RC1/ti_components/os_tools/bios_6_46_00_23/packages/gnu/targets/arm/A8F.xs:
package.mak: /datalocal1/user/surya/vsdk_02_12_RC1/ti_components/os_tools/bios_6_46_00_23/packages/gnu/targets/arm/A8F.xs
/datalocal1/user/surya/vsdk_02_12_RC1/ti_components/os_tools/bios_6_46_00_23/packages/gnu/targets/arm/A9F.xs:
package.mak: /datalocal1/user/surya/vsdk_02_12_RC1/ti_components/os_tools/bios_6_46_00_23/packages/gnu/targets/arm/A9F.xs
/datalocal1/user/surya/vsdk_02_12_RC1/ti_components/os_tools/bios_6_46_00_23/packages/gnu/targets/arm/A15F.xs:
package.mak: /datalocal1/user/surya/vsdk_02_12_RC1/ti_components/os_tools/bios_6_46_00_23/packages/gnu/targets/arm/A15F.xs
/datalocal1/user/surya/vsdk_02_12_RC1/ti_components/os_tools/bios_6_46_00_23/packages/gnu/targets/arm/A53F.xs:
package.mak: /datalocal1/user/surya/vsdk_02_12_RC1/ti_components/os_tools/bios_6_46_00_23/packages/gnu/targets/arm/A53F.xs
/datalocal1/user/surya/vsdk_02_12_RC1/ti_components/os_tools/bios_6_46_00_23/packages/gnu/targets/arm/package.xs:
package.mak: /datalocal1/user/surya/vsdk_02_12_RC1/ti_components/os_tools/bios_6_46_00_23/packages/gnu/targets/arm/package.xs
package.mak: package.bld
endif

ti.targets.arm.elf.M4F.rootDir ?= /datalocal1/user/surya/vsdk_02_12_RC1/ti_components/cg_tools/linux/ti-cgt-arm_5.2.5
ti.targets.arm.elf.packageBase ?= /datalocal1/user/surya/vsdk_02_12_RC1/ti_components/os_tools/bios_6_46_00_23/packages/ti/targets/arm/elf/
ti.targets.elf.C66.rootDir ?= /datalocal1/user/surya/vsdk_02_12_RC1/ti_components/cg_tools/linux/C6000_7.4.2
ti.targets.elf.packageBase ?= /datalocal1/user/surya/vsdk_02_12_RC1/ti_components/os_tools/bios_6_46_00_23/packages/ti/targets/elf/
gnu.targets.arm.A15F.rootDir ?= /datalocal1/user/surya/vsdk_02_12_RC1/ti_components/cg_tools/linux/gcc-arm-none-eabi-4_9-2015q3
gnu.targets.arm.packageBase ?= /datalocal1/user/surya/vsdk_02_12_RC1/ti_components/os_tools/bios_6_46_00_23/packages/gnu/targets/arm/
.PRECIOUS: $(XDCCFGDIR)/%.oem4f
.PHONY: all,em4f .dlls,em4f .executables,em4f test,em4f
all,em4f: .executables,em4f
.executables,em4f: .libraries,em4f
.executables,em4f: .dlls,em4f
.dlls,em4f: .libraries,em4f
.libraries,em4f: .interfaces
	@$(RM) $@
	@$(TOUCH) "$@"

.help::
	@$(ECHO) xdc test,em4f
	@$(ECHO) xdc .executables,em4f
	@$(ECHO) xdc .libraries,em4f
	@$(ECHO) xdc .dlls,em4f

.PRECIOUS: $(XDCCFGDIR)/%.oe66
.PHONY: all,e66 .dlls,e66 .executables,e66 test,e66
all,e66: .executables,e66
.executables,e66: .libraries,e66
.executables,e66: .dlls,e66
.dlls,e66: .libraries,e66
.libraries,e66: .interfaces
	@$(RM) $@
	@$(TOUCH) "$@"

.help::
	@$(ECHO) xdc test,e66
	@$(ECHO) xdc .executables,e66
	@$(ECHO) xdc .libraries,e66
	@$(ECHO) xdc .dlls,e66

.PRECIOUS: $(XDCCFGDIR)/%.oa15fg
.PHONY: all,a15fg .dlls,a15fg .executables,a15fg test,a15fg
all,a15fg: .executables,a15fg
.executables,a15fg: .libraries,a15fg
.executables,a15fg: .dlls,a15fg
.dlls,a15fg: .libraries,a15fg
.libraries,a15fg: .interfaces
	@$(RM) $@
	@$(TOUCH) "$@"

.help::
	@$(ECHO) xdc test,a15fg
	@$(ECHO) xdc .executables,a15fg
	@$(ECHO) xdc .libraries,a15fg
	@$(ECHO) xdc .dlls,a15fg


all: .executables 
.executables: .libraries .dlls
.libraries: .interfaces

PKGCFGS := $(wildcard package.xs) package/build.cfg
.interfaces: package/package.xdc.inc package/package.defs.h package.xdc $(PKGCFGS)

-include package/package.xdc.dep
package/%.xdc.inc package/%_ti.ndk.tools.hdlc.c package/%.defs.h: %.xdc $(PKGCFGS)
	@$(MSG) generating interfaces for package ti.ndk.tools.hdlc" (because $@ is older than $(firstword $?))" ...
	$(XSRUN) -f xdc/services/intern/cmd/build.xs $(MK_IDLOPTS) -m package/package.xdc.dep -i package/package.xdc.inc package.xdc

ifeq (,$(MK_NOGENDEPS))
-include package/package.cfg.dep
endif

package/package.cfg.xdc.inc: .interfaces $(XDCROOT)/packages/xdc/cfg/cfginc.js package.xdc
	@$(MSG) generating schema include file list ...
	$(CONFIG) -f $(XDCROOT)/packages/xdc/cfg/cfginc.js ti.ndk.tools.hdlc $@

.libraries,em4f .libraries: lib/hdlc.aem4f

-include lib/hdlc.aem4f.mak
lib/hdlc.aem4f: 
	$(RM) $@
	@$(MSG) archiving package/lib/lib/hdlc/package/package_ti.ndk.tools.hdlc.oem4f package/lib/lib/hdlc/hdlc.oem4f  into $@ ...
	$(ti.targets.arm.elf.M4F.rootDir)/bin/armar  rq $@   package/lib/lib/hdlc/package/package_ti.ndk.tools.hdlc.oem4f package/lib/lib/hdlc/hdlc.oem4f 
lib/hdlc.aem4f: export C_DIR=
lib/hdlc.aem4f: PATH:=$(ti.targets.arm.elf.M4F.rootDir)/bin/:$(PATH)

clean,em4f clean::
	-$(RM) lib/hdlc.aem4f
.libraries,e66 .libraries: lib/hdlc.ae66

-include lib/hdlc.ae66.mak
lib/hdlc.ae66: 
	$(RM) $@
	@$(MSG) archiving package/lib/lib/hdlc/package/package_ti.ndk.tools.hdlc.oe66 package/lib/lib/hdlc/hdlc.oe66  into $@ ...
	$(ti.targets.elf.C66.rootDir)/bin/ar6x  rq $@   package/lib/lib/hdlc/package/package_ti.ndk.tools.hdlc.oe66 package/lib/lib/hdlc/hdlc.oe66 
lib/hdlc.ae66: export C_DIR=
lib/hdlc.ae66: PATH:=$(ti.targets.elf.C66.rootDir)/bin/:$(PATH)

clean,e66 clean::
	-$(RM) lib/hdlc.ae66
.libraries,a15fg .libraries: lib/hdlc.aa15fg

-include lib/hdlc.aa15fg.mak
lib/hdlc.aa15fg: 
	$(RM) $@
	@$(MSG) archiving package/lib/lib/hdlc/package/package_ti.ndk.tools.hdlc.oa15fg package/lib/lib/hdlc/hdlc.oa15fg  into $@ ...
	$(gnu.targets.arm.A15F.rootDir)/bin/arm-none-eabi-ar  cr $@   package/lib/lib/hdlc/package/package_ti.ndk.tools.hdlc.oa15fg package/lib/lib/hdlc/hdlc.oa15fg 
lib/hdlc.aa15fg: export LD_LIBRARY_PATH=

clean,a15fg clean::
	-$(RM) lib/hdlc.aa15fg
test:;
%,copy:
	@$(if $<,,$(MSG) don\'t know how to build $*; exit 1)
	@$(MSG) cp $< $@
	$(RM) $@
	$(CP) $< $@
package_ti.ndk.tools.hdlc.oem4f,copy : package/lib/lib/hdlc/package/package_ti.ndk.tools.hdlc.oem4f
package_ti.ndk.tools.hdlc.sem4f,copy : package/lib/lib/hdlc/package/package_ti.ndk.tools.hdlc.sem4f
hdlc.oem4f,copy : package/lib/lib/hdlc/hdlc.oem4f
hdlc.sem4f,copy : package/lib/lib/hdlc/hdlc.sem4f
package_ti.ndk.tools.hdlc.oe66,copy : package/lib/lib/hdlc/package/package_ti.ndk.tools.hdlc.oe66
package_ti.ndk.tools.hdlc.se66,copy : package/lib/lib/hdlc/package/package_ti.ndk.tools.hdlc.se66
hdlc.oe66,copy : package/lib/lib/hdlc/hdlc.oe66
hdlc.se66,copy : package/lib/lib/hdlc/hdlc.se66
package_ti.ndk.tools.hdlc.oa15fg,copy : package/lib/lib/hdlc/package/package_ti.ndk.tools.hdlc.oa15fg
package_ti.ndk.tools.hdlc.sa15fg,copy : package/lib/lib/hdlc/package/package_ti.ndk.tools.hdlc.sa15fg
hdlc.oa15fg,copy : package/lib/lib/hdlc/hdlc.oa15fg
hdlc.sa15fg,copy : package/lib/lib/hdlc/hdlc.sa15fg

$(XDCCFGDIR)%.c $(XDCCFGDIR)%.h $(XDCCFGDIR)%.xdl: $(XDCCFGDIR)%.cfg $(XDCROOT)/packages/xdc/cfg/Main.xs | .interfaces
	@$(MSG) "configuring $(_PROG_NAME) from $< ..."
	$(CONFIG) $(_PROG_XSOPTS) xdc.cfg $(_PROG_NAME) $(XDCCFGDIR)$*.cfg $(XDCCFGDIR)$*

.PHONY: release,ti_ndk_tools_hdlc
ifeq (,$(MK_NOGENDEPS))
-include package/rel/ti_ndk_tools_hdlc.tar.dep
endif
package/rel/ti_ndk_tools_hdlc/ti/ndk/tools/hdlc/package/package.rel.xml: package/package.bld.xml
package/rel/ti_ndk_tools_hdlc/ti/ndk/tools/hdlc/package/package.rel.xml: package/build.cfg
package/rel/ti_ndk_tools_hdlc/ti/ndk/tools/hdlc/package/package.rel.xml: package/package.xdc.inc
package/rel/ti_ndk_tools_hdlc/ti/ndk/tools/hdlc/package/package.rel.xml: package.bld
package/rel/ti_ndk_tools_hdlc/ti/ndk/tools/hdlc/package/package.rel.xml: package/package.cfg.xdc.inc
package/rel/ti_ndk_tools_hdlc/ti/ndk/tools/hdlc/package/package.rel.xml: lib/hdlc.aem4f
package/rel/ti_ndk_tools_hdlc/ti/ndk/tools/hdlc/package/package.rel.xml: package/package_ti.ndk.tools.hdlc.c
package/rel/ti_ndk_tools_hdlc/ti/ndk/tools/hdlc/package/package.rel.xml: hdlc.c
package/rel/ti_ndk_tools_hdlc/ti/ndk/tools/hdlc/package/package.rel.xml: lib/hdlc.ae66
package/rel/ti_ndk_tools_hdlc/ti/ndk/tools/hdlc/package/package.rel.xml: lib/hdlc.aa15fg
package/rel/ti_ndk_tools_hdlc/ti/ndk/tools/hdlc/package/package.rel.xml: .force
	@$(MSG) generating external release references $@ ...
	$(XS) $(JSENV) -f $(XDCROOT)/packages/xdc/bld/rel.js $(MK_RELOPTS) . $@

ti_ndk_tools_hdlc.tar: package/rel/ti_ndk_tools_hdlc.xdc.inc package/rel/ti_ndk_tools_hdlc/ti/ndk/tools/hdlc/package/package.rel.xml
	@$(MSG) making release file $@ "(because of $(firstword $?))" ...
	-$(RM) $@
	$(call MKRELTAR,package/rel/ti_ndk_tools_hdlc.xdc.inc,package/rel/ti_ndk_tools_hdlc.tar.dep)


release release,ti_ndk_tools_hdlc: all ti_ndk_tools_hdlc.tar
clean:: .clean
	-$(RM) ti_ndk_tools_hdlc.tar
	-$(RM) package/rel/ti_ndk_tools_hdlc.xdc.inc
	-$(RM) package/rel/ti_ndk_tools_hdlc.tar.dep

clean:: .clean
	-$(RM) .libraries $(wildcard .libraries,*)
clean:: 
	-$(RM) .dlls $(wildcard .dlls,*)
#
# The following clean rule removes user specified
# generated files or directories.
#
	-$(RMDIR) lib/

ifneq (clean,$(MAKECMDGOALS))
ifeq (,$(wildcard lib))
    $(shell $(MKDIR) lib)
endif
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
ifeq (,$(wildcard package/lib/lib))
    $(shell $(MKDIR) package/lib/lib)
endif
ifeq (,$(wildcard package/lib/lib/hdlc))
    $(shell $(MKDIR) package/lib/lib/hdlc)
endif
ifeq (,$(wildcard package/lib/lib/hdlc/package))
    $(shell $(MKDIR) package/lib/lib/hdlc/package)
endif
endif
clean::
	-$(RMDIR) package

