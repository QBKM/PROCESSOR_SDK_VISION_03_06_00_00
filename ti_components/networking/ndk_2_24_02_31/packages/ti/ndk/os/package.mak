#
#  Do not edit this file.  This file is generated from 
#  package.bld.  Any modifications to this file will be 
#  overwritten whenever makefiles are re-generated.
#

unexport MAKEFILE_LIST
MK_NOGENDEPS := $(filter clean,$(MAKECMDGOALS))
override PKGDIR = ti/ndk/os
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
package/%.xdc.inc package/%_ti.ndk.os.c package/%.defs.h: %.xdc $(PKGCFGS)
	@$(MSG) generating interfaces for package ti.ndk.os" (because $@ is older than $(firstword $?))" ...
	$(XSRUN) -f xdc/services/intern/cmd/build.xs $(MK_IDLOPTS) -m package/package.xdc.dep -i package/package.xdc.inc package.xdc

ifeq (,$(MK_NOGENDEPS))
-include package/package.cfg.dep
endif

package/package.cfg.xdc.inc: .interfaces $(XDCROOT)/packages/xdc/cfg/cfginc.js package.xdc
	@$(MSG) generating schema include file list ...
	$(CONFIG) -f $(XDCROOT)/packages/xdc/cfg/cfginc.js ti.ndk.os $@

.libraries,em4f .libraries: lib/os.aem4f

-include lib/os.aem4f.mak
lib/os.aem4f: 
	$(RM) $@
	@$(MSG) archiving package/lib/lib/os/package/package_ti.ndk.os.oem4f package/lib/lib/os/efs.oem4f package/lib/lib/os/mem.oem4f package/lib/lib/os/mem_data.oem4f package/lib/lib/os/oem.oem4f package/lib/lib/os/ossys.oem4f package/lib/lib/os/task.oem4f package/lib/lib/os/semaphore.oem4f package/lib/lib/os/intmgmt.oem4f  into $@ ...
	$(ti.targets.arm.elf.M4F.rootDir)/bin/armar  rq $@   package/lib/lib/os/package/package_ti.ndk.os.oem4f package/lib/lib/os/efs.oem4f package/lib/lib/os/mem.oem4f package/lib/lib/os/mem_data.oem4f package/lib/lib/os/oem.oem4f package/lib/lib/os/ossys.oem4f package/lib/lib/os/task.oem4f package/lib/lib/os/semaphore.oem4f package/lib/lib/os/intmgmt.oem4f 
lib/os.aem4f: export C_DIR=
lib/os.aem4f: PATH:=$(ti.targets.arm.elf.M4F.rootDir)/bin/:$(PATH)

clean,em4f clean::
	-$(RM) lib/os.aem4f
.libraries,em4f .libraries: lib/os_sem.aem4f

-include lib/os_sem.aem4f.mak
lib/os_sem.aem4f: 
	$(RM) $@
	@$(MSG) archiving package/lib/lib/os_sem/package/package_ti.ndk.os.oem4f package/lib/lib/os_sem/efs.oem4f package/lib/lib/os_sem/mem.oem4f package/lib/lib/os_sem/mem_data.oem4f package/lib/lib/os_sem/oem.oem4f package/lib/lib/os_sem/ossys.oem4f package/lib/lib/os_sem/task.oem4f package/lib/lib/os_sem/semaphore.oem4f package/lib/lib/os_sem/intmgmt.oem4f  into $@ ...
	$(ti.targets.arm.elf.M4F.rootDir)/bin/armar  rq $@   package/lib/lib/os_sem/package/package_ti.ndk.os.oem4f package/lib/lib/os_sem/efs.oem4f package/lib/lib/os_sem/mem.oem4f package/lib/lib/os_sem/mem_data.oem4f package/lib/lib/os_sem/oem.oem4f package/lib/lib/os_sem/ossys.oem4f package/lib/lib/os_sem/task.oem4f package/lib/lib/os_sem/semaphore.oem4f package/lib/lib/os_sem/intmgmt.oem4f 
lib/os_sem.aem4f: export C_DIR=
lib/os_sem.aem4f: PATH:=$(ti.targets.arm.elf.M4F.rootDir)/bin/:$(PATH)

clean,em4f clean::
	-$(RM) lib/os_sem.aem4f
.libraries,e66 .libraries: lib/os.ae66

-include lib/os.ae66.mak
lib/os.ae66: 
	$(RM) $@
	@$(MSG) archiving package/lib/lib/os/package/package_ti.ndk.os.oe66 package/lib/lib/os/efs.oe66 package/lib/lib/os/mem.oe66 package/lib/lib/os/mem_data.oe66 package/lib/lib/os/oem.oe66 package/lib/lib/os/ossys.oe66 package/lib/lib/os/task.oe66 package/lib/lib/os/semaphore.oe66 package/lib/lib/os/intmgmt.oe66  into $@ ...
	$(ti.targets.elf.C66.rootDir)/bin/ar6x  rq $@   package/lib/lib/os/package/package_ti.ndk.os.oe66 package/lib/lib/os/efs.oe66 package/lib/lib/os/mem.oe66 package/lib/lib/os/mem_data.oe66 package/lib/lib/os/oem.oe66 package/lib/lib/os/ossys.oe66 package/lib/lib/os/task.oe66 package/lib/lib/os/semaphore.oe66 package/lib/lib/os/intmgmt.oe66 
lib/os.ae66: export C_DIR=
lib/os.ae66: PATH:=$(ti.targets.elf.C66.rootDir)/bin/:$(PATH)

clean,e66 clean::
	-$(RM) lib/os.ae66
.libraries,e66 .libraries: lib/os_sem.ae66

-include lib/os_sem.ae66.mak
lib/os_sem.ae66: 
	$(RM) $@
	@$(MSG) archiving package/lib/lib/os_sem/package/package_ti.ndk.os.oe66 package/lib/lib/os_sem/efs.oe66 package/lib/lib/os_sem/mem.oe66 package/lib/lib/os_sem/mem_data.oe66 package/lib/lib/os_sem/oem.oe66 package/lib/lib/os_sem/ossys.oe66 package/lib/lib/os_sem/task.oe66 package/lib/lib/os_sem/semaphore.oe66 package/lib/lib/os_sem/intmgmt.oe66  into $@ ...
	$(ti.targets.elf.C66.rootDir)/bin/ar6x  rq $@   package/lib/lib/os_sem/package/package_ti.ndk.os.oe66 package/lib/lib/os_sem/efs.oe66 package/lib/lib/os_sem/mem.oe66 package/lib/lib/os_sem/mem_data.oe66 package/lib/lib/os_sem/oem.oe66 package/lib/lib/os_sem/ossys.oe66 package/lib/lib/os_sem/task.oe66 package/lib/lib/os_sem/semaphore.oe66 package/lib/lib/os_sem/intmgmt.oe66 
lib/os_sem.ae66: export C_DIR=
lib/os_sem.ae66: PATH:=$(ti.targets.elf.C66.rootDir)/bin/:$(PATH)

clean,e66 clean::
	-$(RM) lib/os_sem.ae66
.libraries,a15fg .libraries: lib/os.aa15fg

-include lib/os.aa15fg.mak
lib/os.aa15fg: 
	$(RM) $@
	@$(MSG) archiving package/lib/lib/os/package/package_ti.ndk.os.oa15fg package/lib/lib/os/efs.oa15fg package/lib/lib/os/mem.oa15fg package/lib/lib/os/mem_data.oa15fg package/lib/lib/os/oem.oa15fg package/lib/lib/os/ossys.oa15fg package/lib/lib/os/task.oa15fg package/lib/lib/os/semaphore.oa15fg package/lib/lib/os/intmgmt.oa15fg  into $@ ...
	$(gnu.targets.arm.A15F.rootDir)/bin/arm-none-eabi-ar  cr $@   package/lib/lib/os/package/package_ti.ndk.os.oa15fg package/lib/lib/os/efs.oa15fg package/lib/lib/os/mem.oa15fg package/lib/lib/os/mem_data.oa15fg package/lib/lib/os/oem.oa15fg package/lib/lib/os/ossys.oa15fg package/lib/lib/os/task.oa15fg package/lib/lib/os/semaphore.oa15fg package/lib/lib/os/intmgmt.oa15fg 
lib/os.aa15fg: export LD_LIBRARY_PATH=

clean,a15fg clean::
	-$(RM) lib/os.aa15fg
.libraries,a15fg .libraries: lib/os_sem.aa15fg

-include lib/os_sem.aa15fg.mak
lib/os_sem.aa15fg: 
	$(RM) $@
	@$(MSG) archiving package/lib/lib/os_sem/package/package_ti.ndk.os.oa15fg package/lib/lib/os_sem/efs.oa15fg package/lib/lib/os_sem/mem.oa15fg package/lib/lib/os_sem/mem_data.oa15fg package/lib/lib/os_sem/oem.oa15fg package/lib/lib/os_sem/ossys.oa15fg package/lib/lib/os_sem/task.oa15fg package/lib/lib/os_sem/semaphore.oa15fg package/lib/lib/os_sem/intmgmt.oa15fg  into $@ ...
	$(gnu.targets.arm.A15F.rootDir)/bin/arm-none-eabi-ar  cr $@   package/lib/lib/os_sem/package/package_ti.ndk.os.oa15fg package/lib/lib/os_sem/efs.oa15fg package/lib/lib/os_sem/mem.oa15fg package/lib/lib/os_sem/mem_data.oa15fg package/lib/lib/os_sem/oem.oa15fg package/lib/lib/os_sem/ossys.oa15fg package/lib/lib/os_sem/task.oa15fg package/lib/lib/os_sem/semaphore.oa15fg package/lib/lib/os_sem/intmgmt.oa15fg 
lib/os_sem.aa15fg: export LD_LIBRARY_PATH=

clean,a15fg clean::
	-$(RM) lib/os_sem.aa15fg
test:;
%,copy:
	@$(if $<,,$(MSG) don\'t know how to build $*; exit 1)
	@$(MSG) cp $< $@
	$(RM) $@
	$(CP) $< $@
.PHONY: package_ti.ndk.os.oem4f,copy
package_ti.ndk.os.oem4f,copy : package_ti.ndk.os.oem4f,0,copy package_ti.ndk.os.oem4f,1,copy 
	@

package_ti.ndk.os.oem4f,0,copy : package/lib/lib/os/package/package_ti.ndk.os.oem4f
package_ti.ndk.os.oem4f,1,copy : package/lib/lib/os_sem/package/package_ti.ndk.os.oem4f
.PHONY: package_ti.ndk.os.sem4f,copy
package_ti.ndk.os.sem4f,copy : package_ti.ndk.os.sem4f,0,copy package_ti.ndk.os.sem4f,1,copy 
	@

package_ti.ndk.os.sem4f,0,copy : package/lib/lib/os/package/package_ti.ndk.os.sem4f
package_ti.ndk.os.sem4f,1,copy : package/lib/lib/os_sem/package/package_ti.ndk.os.sem4f
.PHONY: efs.oem4f,copy
efs.oem4f,copy : efs.oem4f,0,copy efs.oem4f,1,copy 
	@

efs.oem4f,0,copy : package/lib/lib/os/efs.oem4f
efs.oem4f,1,copy : package/lib/lib/os_sem/efs.oem4f
.PHONY: efs.sem4f,copy
efs.sem4f,copy : efs.sem4f,0,copy efs.sem4f,1,copy 
	@

efs.sem4f,0,copy : package/lib/lib/os/efs.sem4f
efs.sem4f,1,copy : package/lib/lib/os_sem/efs.sem4f
.PHONY: mem.oem4f,copy
mem.oem4f,copy : mem.oem4f,0,copy mem.oem4f,1,copy 
	@

mem.oem4f,0,copy : package/lib/lib/os/mem.oem4f
mem.oem4f,1,copy : package/lib/lib/os_sem/mem.oem4f
.PHONY: mem.sem4f,copy
mem.sem4f,copy : mem.sem4f,0,copy mem.sem4f,1,copy 
	@

mem.sem4f,0,copy : package/lib/lib/os/mem.sem4f
mem.sem4f,1,copy : package/lib/lib/os_sem/mem.sem4f
.PHONY: mem_data.oem4f,copy
mem_data.oem4f,copy : mem_data.oem4f,0,copy mem_data.oem4f,1,copy 
	@

mem_data.oem4f,0,copy : package/lib/lib/os/mem_data.oem4f
mem_data.oem4f,1,copy : package/lib/lib/os_sem/mem_data.oem4f
.PHONY: mem_data.sem4f,copy
mem_data.sem4f,copy : mem_data.sem4f,0,copy mem_data.sem4f,1,copy 
	@

mem_data.sem4f,0,copy : package/lib/lib/os/mem_data.sem4f
mem_data.sem4f,1,copy : package/lib/lib/os_sem/mem_data.sem4f
.PHONY: oem.oem4f,copy
oem.oem4f,copy : oem.oem4f,0,copy oem.oem4f,1,copy 
	@

oem.oem4f,0,copy : package/lib/lib/os/oem.oem4f
oem.oem4f,1,copy : package/lib/lib/os_sem/oem.oem4f
.PHONY: oem.sem4f,copy
oem.sem4f,copy : oem.sem4f,0,copy oem.sem4f,1,copy 
	@

oem.sem4f,0,copy : package/lib/lib/os/oem.sem4f
oem.sem4f,1,copy : package/lib/lib/os_sem/oem.sem4f
.PHONY: ossys.oem4f,copy
ossys.oem4f,copy : ossys.oem4f,0,copy ossys.oem4f,1,copy 
	@

ossys.oem4f,0,copy : package/lib/lib/os/ossys.oem4f
ossys.oem4f,1,copy : package/lib/lib/os_sem/ossys.oem4f
.PHONY: ossys.sem4f,copy
ossys.sem4f,copy : ossys.sem4f,0,copy ossys.sem4f,1,copy 
	@

ossys.sem4f,0,copy : package/lib/lib/os/ossys.sem4f
ossys.sem4f,1,copy : package/lib/lib/os_sem/ossys.sem4f
.PHONY: task.oem4f,copy
task.oem4f,copy : task.oem4f,0,copy task.oem4f,1,copy 
	@

task.oem4f,0,copy : package/lib/lib/os/task.oem4f
task.oem4f,1,copy : package/lib/lib/os_sem/task.oem4f
.PHONY: task.sem4f,copy
task.sem4f,copy : task.sem4f,0,copy task.sem4f,1,copy 
	@

task.sem4f,0,copy : package/lib/lib/os/task.sem4f
task.sem4f,1,copy : package/lib/lib/os_sem/task.sem4f
.PHONY: semaphore.oem4f,copy
semaphore.oem4f,copy : semaphore.oem4f,0,copy semaphore.oem4f,1,copy 
	@

semaphore.oem4f,0,copy : package/lib/lib/os/semaphore.oem4f
semaphore.oem4f,1,copy : package/lib/lib/os_sem/semaphore.oem4f
.PHONY: semaphore.sem4f,copy
semaphore.sem4f,copy : semaphore.sem4f,0,copy semaphore.sem4f,1,copy 
	@

semaphore.sem4f,0,copy : package/lib/lib/os/semaphore.sem4f
semaphore.sem4f,1,copy : package/lib/lib/os_sem/semaphore.sem4f
.PHONY: intmgmt.oem4f,copy
intmgmt.oem4f,copy : intmgmt.oem4f,0,copy intmgmt.oem4f,1,copy 
	@

intmgmt.oem4f,0,copy : package/lib/lib/os/intmgmt.oem4f
intmgmt.oem4f,1,copy : package/lib/lib/os_sem/intmgmt.oem4f
.PHONY: intmgmt.sem4f,copy
intmgmt.sem4f,copy : intmgmt.sem4f,0,copy intmgmt.sem4f,1,copy 
	@

intmgmt.sem4f,0,copy : package/lib/lib/os/intmgmt.sem4f
intmgmt.sem4f,1,copy : package/lib/lib/os_sem/intmgmt.sem4f
.PHONY: package_ti.ndk.os.oe66,copy
package_ti.ndk.os.oe66,copy : package_ti.ndk.os.oe66,0,copy package_ti.ndk.os.oe66,1,copy 
	@

package_ti.ndk.os.oe66,0,copy : package/lib/lib/os/package/package_ti.ndk.os.oe66
package_ti.ndk.os.oe66,1,copy : package/lib/lib/os_sem/package/package_ti.ndk.os.oe66
.PHONY: package_ti.ndk.os.se66,copy
package_ti.ndk.os.se66,copy : package_ti.ndk.os.se66,0,copy package_ti.ndk.os.se66,1,copy 
	@

package_ti.ndk.os.se66,0,copy : package/lib/lib/os/package/package_ti.ndk.os.se66
package_ti.ndk.os.se66,1,copy : package/lib/lib/os_sem/package/package_ti.ndk.os.se66
.PHONY: efs.oe66,copy
efs.oe66,copy : efs.oe66,0,copy efs.oe66,1,copy 
	@

efs.oe66,0,copy : package/lib/lib/os/efs.oe66
efs.oe66,1,copy : package/lib/lib/os_sem/efs.oe66
.PHONY: efs.se66,copy
efs.se66,copy : efs.se66,0,copy efs.se66,1,copy 
	@

efs.se66,0,copy : package/lib/lib/os/efs.se66
efs.se66,1,copy : package/lib/lib/os_sem/efs.se66
.PHONY: mem.oe66,copy
mem.oe66,copy : mem.oe66,0,copy mem.oe66,1,copy 
	@

mem.oe66,0,copy : package/lib/lib/os/mem.oe66
mem.oe66,1,copy : package/lib/lib/os_sem/mem.oe66
.PHONY: mem.se66,copy
mem.se66,copy : mem.se66,0,copy mem.se66,1,copy 
	@

mem.se66,0,copy : package/lib/lib/os/mem.se66
mem.se66,1,copy : package/lib/lib/os_sem/mem.se66
.PHONY: mem_data.oe66,copy
mem_data.oe66,copy : mem_data.oe66,0,copy mem_data.oe66,1,copy 
	@

mem_data.oe66,0,copy : package/lib/lib/os/mem_data.oe66
mem_data.oe66,1,copy : package/lib/lib/os_sem/mem_data.oe66
.PHONY: mem_data.se66,copy
mem_data.se66,copy : mem_data.se66,0,copy mem_data.se66,1,copy 
	@

mem_data.se66,0,copy : package/lib/lib/os/mem_data.se66
mem_data.se66,1,copy : package/lib/lib/os_sem/mem_data.se66
.PHONY: oem.oe66,copy
oem.oe66,copy : oem.oe66,0,copy oem.oe66,1,copy 
	@

oem.oe66,0,copy : package/lib/lib/os/oem.oe66
oem.oe66,1,copy : package/lib/lib/os_sem/oem.oe66
.PHONY: oem.se66,copy
oem.se66,copy : oem.se66,0,copy oem.se66,1,copy 
	@

oem.se66,0,copy : package/lib/lib/os/oem.se66
oem.se66,1,copy : package/lib/lib/os_sem/oem.se66
.PHONY: ossys.oe66,copy
ossys.oe66,copy : ossys.oe66,0,copy ossys.oe66,1,copy 
	@

ossys.oe66,0,copy : package/lib/lib/os/ossys.oe66
ossys.oe66,1,copy : package/lib/lib/os_sem/ossys.oe66
.PHONY: ossys.se66,copy
ossys.se66,copy : ossys.se66,0,copy ossys.se66,1,copy 
	@

ossys.se66,0,copy : package/lib/lib/os/ossys.se66
ossys.se66,1,copy : package/lib/lib/os_sem/ossys.se66
.PHONY: task.oe66,copy
task.oe66,copy : task.oe66,0,copy task.oe66,1,copy 
	@

task.oe66,0,copy : package/lib/lib/os/task.oe66
task.oe66,1,copy : package/lib/lib/os_sem/task.oe66
.PHONY: task.se66,copy
task.se66,copy : task.se66,0,copy task.se66,1,copy 
	@

task.se66,0,copy : package/lib/lib/os/task.se66
task.se66,1,copy : package/lib/lib/os_sem/task.se66
.PHONY: semaphore.oe66,copy
semaphore.oe66,copy : semaphore.oe66,0,copy semaphore.oe66,1,copy 
	@

semaphore.oe66,0,copy : package/lib/lib/os/semaphore.oe66
semaphore.oe66,1,copy : package/lib/lib/os_sem/semaphore.oe66
.PHONY: semaphore.se66,copy
semaphore.se66,copy : semaphore.se66,0,copy semaphore.se66,1,copy 
	@

semaphore.se66,0,copy : package/lib/lib/os/semaphore.se66
semaphore.se66,1,copy : package/lib/lib/os_sem/semaphore.se66
.PHONY: intmgmt.oe66,copy
intmgmt.oe66,copy : intmgmt.oe66,0,copy intmgmt.oe66,1,copy 
	@

intmgmt.oe66,0,copy : package/lib/lib/os/intmgmt.oe66
intmgmt.oe66,1,copy : package/lib/lib/os_sem/intmgmt.oe66
.PHONY: intmgmt.se66,copy
intmgmt.se66,copy : intmgmt.se66,0,copy intmgmt.se66,1,copy 
	@

intmgmt.se66,0,copy : package/lib/lib/os/intmgmt.se66
intmgmt.se66,1,copy : package/lib/lib/os_sem/intmgmt.se66
.PHONY: package_ti.ndk.os.oa15fg,copy
package_ti.ndk.os.oa15fg,copy : package_ti.ndk.os.oa15fg,0,copy package_ti.ndk.os.oa15fg,1,copy 
	@

package_ti.ndk.os.oa15fg,0,copy : package/lib/lib/os/package/package_ti.ndk.os.oa15fg
package_ti.ndk.os.oa15fg,1,copy : package/lib/lib/os_sem/package/package_ti.ndk.os.oa15fg
.PHONY: package_ti.ndk.os.sa15fg,copy
package_ti.ndk.os.sa15fg,copy : package_ti.ndk.os.sa15fg,0,copy package_ti.ndk.os.sa15fg,1,copy 
	@

package_ti.ndk.os.sa15fg,0,copy : package/lib/lib/os/package/package_ti.ndk.os.sa15fg
package_ti.ndk.os.sa15fg,1,copy : package/lib/lib/os_sem/package/package_ti.ndk.os.sa15fg
.PHONY: efs.oa15fg,copy
efs.oa15fg,copy : efs.oa15fg,0,copy efs.oa15fg,1,copy 
	@

efs.oa15fg,0,copy : package/lib/lib/os/efs.oa15fg
efs.oa15fg,1,copy : package/lib/lib/os_sem/efs.oa15fg
.PHONY: efs.sa15fg,copy
efs.sa15fg,copy : efs.sa15fg,0,copy efs.sa15fg,1,copy 
	@

efs.sa15fg,0,copy : package/lib/lib/os/efs.sa15fg
efs.sa15fg,1,copy : package/lib/lib/os_sem/efs.sa15fg
.PHONY: mem.oa15fg,copy
mem.oa15fg,copy : mem.oa15fg,0,copy mem.oa15fg,1,copy 
	@

mem.oa15fg,0,copy : package/lib/lib/os/mem.oa15fg
mem.oa15fg,1,copy : package/lib/lib/os_sem/mem.oa15fg
.PHONY: mem.sa15fg,copy
mem.sa15fg,copy : mem.sa15fg,0,copy mem.sa15fg,1,copy 
	@

mem.sa15fg,0,copy : package/lib/lib/os/mem.sa15fg
mem.sa15fg,1,copy : package/lib/lib/os_sem/mem.sa15fg
.PHONY: mem_data.oa15fg,copy
mem_data.oa15fg,copy : mem_data.oa15fg,0,copy mem_data.oa15fg,1,copy 
	@

mem_data.oa15fg,0,copy : package/lib/lib/os/mem_data.oa15fg
mem_data.oa15fg,1,copy : package/lib/lib/os_sem/mem_data.oa15fg
.PHONY: mem_data.sa15fg,copy
mem_data.sa15fg,copy : mem_data.sa15fg,0,copy mem_data.sa15fg,1,copy 
	@

mem_data.sa15fg,0,copy : package/lib/lib/os/mem_data.sa15fg
mem_data.sa15fg,1,copy : package/lib/lib/os_sem/mem_data.sa15fg
.PHONY: oem.oa15fg,copy
oem.oa15fg,copy : oem.oa15fg,0,copy oem.oa15fg,1,copy 
	@

oem.oa15fg,0,copy : package/lib/lib/os/oem.oa15fg
oem.oa15fg,1,copy : package/lib/lib/os_sem/oem.oa15fg
.PHONY: oem.sa15fg,copy
oem.sa15fg,copy : oem.sa15fg,0,copy oem.sa15fg,1,copy 
	@

oem.sa15fg,0,copy : package/lib/lib/os/oem.sa15fg
oem.sa15fg,1,copy : package/lib/lib/os_sem/oem.sa15fg
.PHONY: ossys.oa15fg,copy
ossys.oa15fg,copy : ossys.oa15fg,0,copy ossys.oa15fg,1,copy 
	@

ossys.oa15fg,0,copy : package/lib/lib/os/ossys.oa15fg
ossys.oa15fg,1,copy : package/lib/lib/os_sem/ossys.oa15fg
.PHONY: ossys.sa15fg,copy
ossys.sa15fg,copy : ossys.sa15fg,0,copy ossys.sa15fg,1,copy 
	@

ossys.sa15fg,0,copy : package/lib/lib/os/ossys.sa15fg
ossys.sa15fg,1,copy : package/lib/lib/os_sem/ossys.sa15fg
.PHONY: task.oa15fg,copy
task.oa15fg,copy : task.oa15fg,0,copy task.oa15fg,1,copy 
	@

task.oa15fg,0,copy : package/lib/lib/os/task.oa15fg
task.oa15fg,1,copy : package/lib/lib/os_sem/task.oa15fg
.PHONY: task.sa15fg,copy
task.sa15fg,copy : task.sa15fg,0,copy task.sa15fg,1,copy 
	@

task.sa15fg,0,copy : package/lib/lib/os/task.sa15fg
task.sa15fg,1,copy : package/lib/lib/os_sem/task.sa15fg
.PHONY: semaphore.oa15fg,copy
semaphore.oa15fg,copy : semaphore.oa15fg,0,copy semaphore.oa15fg,1,copy 
	@

semaphore.oa15fg,0,copy : package/lib/lib/os/semaphore.oa15fg
semaphore.oa15fg,1,copy : package/lib/lib/os_sem/semaphore.oa15fg
.PHONY: semaphore.sa15fg,copy
semaphore.sa15fg,copy : semaphore.sa15fg,0,copy semaphore.sa15fg,1,copy 
	@

semaphore.sa15fg,0,copy : package/lib/lib/os/semaphore.sa15fg
semaphore.sa15fg,1,copy : package/lib/lib/os_sem/semaphore.sa15fg
.PHONY: intmgmt.oa15fg,copy
intmgmt.oa15fg,copy : intmgmt.oa15fg,0,copy intmgmt.oa15fg,1,copy 
	@

intmgmt.oa15fg,0,copy : package/lib/lib/os/intmgmt.oa15fg
intmgmt.oa15fg,1,copy : package/lib/lib/os_sem/intmgmt.oa15fg
.PHONY: intmgmt.sa15fg,copy
intmgmt.sa15fg,copy : intmgmt.sa15fg,0,copy intmgmt.sa15fg,1,copy 
	@

intmgmt.sa15fg,0,copy : package/lib/lib/os/intmgmt.sa15fg
intmgmt.sa15fg,1,copy : package/lib/lib/os_sem/intmgmt.sa15fg

$(XDCCFGDIR)%.c $(XDCCFGDIR)%.h $(XDCCFGDIR)%.xdl: $(XDCCFGDIR)%.cfg $(XDCROOT)/packages/xdc/cfg/Main.xs | .interfaces
	@$(MSG) "configuring $(_PROG_NAME) from $< ..."
	$(CONFIG) $(_PROG_XSOPTS) xdc.cfg $(_PROG_NAME) $(XDCCFGDIR)$*.cfg $(XDCCFGDIR)$*

.PHONY: release,ti_ndk_os
ifeq (,$(MK_NOGENDEPS))
-include package/rel/ti_ndk_os.tar.dep
endif
package/rel/ti_ndk_os/ti/ndk/os/package/package.rel.xml: package/package.bld.xml
package/rel/ti_ndk_os/ti/ndk/os/package/package.rel.xml: package/build.cfg
package/rel/ti_ndk_os/ti/ndk/os/package/package.rel.xml: package/package.xdc.inc
package/rel/ti_ndk_os/ti/ndk/os/package/package.rel.xml: package.bld
package/rel/ti_ndk_os/ti/ndk/os/package/package.rel.xml: package/package.cfg.xdc.inc
package/rel/ti_ndk_os/ti/ndk/os/package/package.rel.xml: lib/os.aem4f
package/rel/ti_ndk_os/ti/ndk/os/package/package.rel.xml: package/package_ti.ndk.os.c
package/rel/ti_ndk_os/ti/ndk/os/package/package.rel.xml: efs.c
package/rel/ti_ndk_os/ti/ndk/os/package/package.rel.xml: mem.c
package/rel/ti_ndk_os/ti/ndk/os/package/package.rel.xml: mem_data.c
package/rel/ti_ndk_os/ti/ndk/os/package/package.rel.xml: oem.c
package/rel/ti_ndk_os/ti/ndk/os/package/package.rel.xml: ossys.c
package/rel/ti_ndk_os/ti/ndk/os/package/package.rel.xml: task.c
package/rel/ti_ndk_os/ti/ndk/os/package/package.rel.xml: semaphore.c
package/rel/ti_ndk_os/ti/ndk/os/package/package.rel.xml: intmgmt.c
package/rel/ti_ndk_os/ti/ndk/os/package/package.rel.xml: lib/os_sem.aem4f
package/rel/ti_ndk_os/ti/ndk/os/package/package.rel.xml: lib/os.ae66
package/rel/ti_ndk_os/ti/ndk/os/package/package.rel.xml: lib/os_sem.ae66
package/rel/ti_ndk_os/ti/ndk/os/package/package.rel.xml: lib/os.aa15fg
package/rel/ti_ndk_os/ti/ndk/os/package/package.rel.xml: lib/os_sem.aa15fg
package/rel/ti_ndk_os/ti/ndk/os/package/package.rel.xml: .force
	@$(MSG) generating external release references $@ ...
	$(XS) $(JSENV) -f $(XDCROOT)/packages/xdc/bld/rel.js $(MK_RELOPTS) . $@

ti_ndk_os.tar: package/rel/ti_ndk_os.xdc.inc package/rel/ti_ndk_os/ti/ndk/os/package/package.rel.xml
	@$(MSG) making release file $@ "(because of $(firstword $?))" ...
	-$(RM) $@
	$(call MKRELTAR,package/rel/ti_ndk_os.xdc.inc,package/rel/ti_ndk_os.tar.dep)


release release,ti_ndk_os: all ti_ndk_os.tar
clean:: .clean
	-$(RM) ti_ndk_os.tar
	-$(RM) package/rel/ti_ndk_os.xdc.inc
	-$(RM) package/rel/ti_ndk_os.tar.dep

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
ifeq (,$(wildcard package/lib/lib/os))
    $(shell $(MKDIR) package/lib/lib/os)
endif
ifeq (,$(wildcard package/lib/lib/os/package))
    $(shell $(MKDIR) package/lib/lib/os/package)
endif
ifeq (,$(wildcard package/lib/lib/os_sem))
    $(shell $(MKDIR) package/lib/lib/os_sem)
endif
ifeq (,$(wildcard package/lib/lib/os_sem/package))
    $(shell $(MKDIR) package/lib/lib/os_sem/package)
endif
endif
clean::
	-$(RMDIR) package


