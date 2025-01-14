#
#  Do not edit this file.  This file is generated from 
#  package.bld.  Any modifications to this file will be 
#  overwritten whenever makefiles are re-generated.
#
#  target compatibility key = ti.targets.arm.elf.M3{1,0,16.9,2
#
ifeq (,$(MK_NOGENDEPS))
-include package/lib/lib/m3/release/ti.sdo.edma3.drv/package/package_ti.sdo.edma3.drv.oem3.dep
package/lib/lib/m3/release/ti.sdo.edma3.drv/package/package_ti.sdo.edma3.drv.oem3.dep: ;
endif

package/lib/lib/m3/release/ti.sdo.edma3.drv/package/package_ti.sdo.edma3.drv.oem3: | .interfaces
package/lib/lib/m3/release/ti.sdo.edma3.drv/package/package_ti.sdo.edma3.drv.oem3: package/package_ti.sdo.edma3.drv.c lib/m3/release/ti.sdo.edma3.drv.aem3.mak
	@$(RM) $@.dep
	$(RM) $@
	@$(MSG) clem3 $< ...
	$(ti.targets.arm.elf.M3.rootDir)/bin/armcl -c  -qq -pdsw225 --endian=little -mv7M3 --abi=eabi -eo.oem3 -ea.sem3   -Dxdc_target_name__=M3 -Dxdc_target_types__=ti/targets/arm/elf/std.h -Dxdc_bld__profile_release -Dxdc_bld__vers_1_0_16_9_2 -O2  $(XDCINCS) -I$(ti.targets.arm.elf.M3.rootDir)/include  -fs=./package/lib/lib/m3/release/ti.sdo.edma3.drv/package -fr=./package/lib/lib/m3/release/ti.sdo.edma3.drv/package -fc $<
	$(MKDEP) -a $@.dep -p package/lib/lib/m3/release/ti.sdo.edma3.drv/package -s oem3 $< -C   -qq -pdsw225 --endian=little -mv7M3 --abi=eabi -eo.oem3 -ea.sem3   -Dxdc_target_name__=M3 -Dxdc_target_types__=ti/targets/arm/elf/std.h -Dxdc_bld__profile_release -Dxdc_bld__vers_1_0_16_9_2 -O2  $(XDCINCS) -I$(ti.targets.arm.elf.M3.rootDir)/include  -fs=./package/lib/lib/m3/release/ti.sdo.edma3.drv/package -fr=./package/lib/lib/m3/release/ti.sdo.edma3.drv/package
	-@$(FIXDEP) $@.dep $@.dep
	
package/lib/lib/m3/release/ti.sdo.edma3.drv/package/package_ti.sdo.edma3.drv.oem3: export C_DIR=
package/lib/lib/m3/release/ti.sdo.edma3.drv/package/package_ti.sdo.edma3.drv.oem3: PATH:=$(ti.targets.arm.elf.M3.rootDir)/bin/:$(PATH)

package/lib/lib/m3/release/ti.sdo.edma3.drv/package/package_ti.sdo.edma3.drv.sem3: | .interfaces
package/lib/lib/m3/release/ti.sdo.edma3.drv/package/package_ti.sdo.edma3.drv.sem3: package/package_ti.sdo.edma3.drv.c lib/m3/release/ti.sdo.edma3.drv.aem3.mak
	@$(RM) $@.dep
	$(RM) $@
	@$(MSG) clem3 -n $< ...
	$(ti.targets.arm.elf.M3.rootDir)/bin/armcl -c -n -s --symdebug:none -qq -pdsw225 --endian=little -mv7M3 --abi=eabi -eo.oem3 -ea.sem3   -Dxdc_target_name__=M3 -Dxdc_target_types__=ti/targets/arm/elf/std.h -Dxdc_bld__profile_release -Dxdc_bld__vers_1_0_16_9_2 -O2  $(XDCINCS) -I$(ti.targets.arm.elf.M3.rootDir)/include  -fs=./package/lib/lib/m3/release/ti.sdo.edma3.drv/package -fr=./package/lib/lib/m3/release/ti.sdo.edma3.drv/package -fc $<
	$(MKDEP) -a $@.dep -p package/lib/lib/m3/release/ti.sdo.edma3.drv/package -s oem3 $< -C  -n -s --symdebug:none -qq -pdsw225 --endian=little -mv7M3 --abi=eabi -eo.oem3 -ea.sem3   -Dxdc_target_name__=M3 -Dxdc_target_types__=ti/targets/arm/elf/std.h -Dxdc_bld__profile_release -Dxdc_bld__vers_1_0_16_9_2 -O2  $(XDCINCS) -I$(ti.targets.arm.elf.M3.rootDir)/include  -fs=./package/lib/lib/m3/release/ti.sdo.edma3.drv/package -fr=./package/lib/lib/m3/release/ti.sdo.edma3.drv/package
	-@$(FIXDEP) $@.dep $@.dep
	
package/lib/lib/m3/release/ti.sdo.edma3.drv/package/package_ti.sdo.edma3.drv.sem3: export C_DIR=
package/lib/lib/m3/release/ti.sdo.edma3.drv/package/package_ti.sdo.edma3.drv.sem3: PATH:=$(ti.targets.arm.elf.M3.rootDir)/bin/:$(PATH)

ifeq (,$(MK_NOGENDEPS))
-include package/lib/lib/m3/release/ti.sdo.edma3.drv/src/edma3_drv_init.oem3.dep
package/lib/lib/m3/release/ti.sdo.edma3.drv/src/edma3_drv_init.oem3.dep: ;
endif

package/lib/lib/m3/release/ti.sdo.edma3.drv/src/edma3_drv_init.oem3: | .interfaces
package/lib/lib/m3/release/ti.sdo.edma3.drv/src/edma3_drv_init.oem3: src/edma3_drv_init.c lib/m3/release/ti.sdo.edma3.drv.aem3.mak
	@$(RM) $@.dep
	$(RM) $@
	@$(MSG) clem3 $< ...
	$(ti.targets.arm.elf.M3.rootDir)/bin/armcl -c  -qq -pdsw225 --endian=little -mv7M3 --abi=eabi -eo.oem3 -ea.sem3   -Dxdc_target_name__=M3 -Dxdc_target_types__=ti/targets/arm/elf/std.h -Dxdc_bld__profile_release -Dxdc_bld__vers_1_0_16_9_2 -O2  $(XDCINCS) -I$(ti.targets.arm.elf.M3.rootDir)/include  -fs=./package/lib/lib/m3/release/ti.sdo.edma3.drv/src -fr=./package/lib/lib/m3/release/ti.sdo.edma3.drv/src -fc $<
	$(MKDEP) -a $@.dep -p package/lib/lib/m3/release/ti.sdo.edma3.drv/src -s oem3 $< -C   -qq -pdsw225 --endian=little -mv7M3 --abi=eabi -eo.oem3 -ea.sem3   -Dxdc_target_name__=M3 -Dxdc_target_types__=ti/targets/arm/elf/std.h -Dxdc_bld__profile_release -Dxdc_bld__vers_1_0_16_9_2 -O2  $(XDCINCS) -I$(ti.targets.arm.elf.M3.rootDir)/include  -fs=./package/lib/lib/m3/release/ti.sdo.edma3.drv/src -fr=./package/lib/lib/m3/release/ti.sdo.edma3.drv/src
	-@$(FIXDEP) $@.dep $@.dep
	
package/lib/lib/m3/release/ti.sdo.edma3.drv/src/edma3_drv_init.oem3: export C_DIR=
package/lib/lib/m3/release/ti.sdo.edma3.drv/src/edma3_drv_init.oem3: PATH:=$(ti.targets.arm.elf.M3.rootDir)/bin/:$(PATH)

package/lib/lib/m3/release/ti.sdo.edma3.drv/src/edma3_drv_init.sem3: | .interfaces
package/lib/lib/m3/release/ti.sdo.edma3.drv/src/edma3_drv_init.sem3: src/edma3_drv_init.c lib/m3/release/ti.sdo.edma3.drv.aem3.mak
	@$(RM) $@.dep
	$(RM) $@
	@$(MSG) clem3 -n $< ...
	$(ti.targets.arm.elf.M3.rootDir)/bin/armcl -c -n -s --symdebug:none -qq -pdsw225 --endian=little -mv7M3 --abi=eabi -eo.oem3 -ea.sem3   -Dxdc_target_name__=M3 -Dxdc_target_types__=ti/targets/arm/elf/std.h -Dxdc_bld__profile_release -Dxdc_bld__vers_1_0_16_9_2 -O2  $(XDCINCS) -I$(ti.targets.arm.elf.M3.rootDir)/include  -fs=./package/lib/lib/m3/release/ti.sdo.edma3.drv/src -fr=./package/lib/lib/m3/release/ti.sdo.edma3.drv/src -fc $<
	$(MKDEP) -a $@.dep -p package/lib/lib/m3/release/ti.sdo.edma3.drv/src -s oem3 $< -C  -n -s --symdebug:none -qq -pdsw225 --endian=little -mv7M3 --abi=eabi -eo.oem3 -ea.sem3   -Dxdc_target_name__=M3 -Dxdc_target_types__=ti/targets/arm/elf/std.h -Dxdc_bld__profile_release -Dxdc_bld__vers_1_0_16_9_2 -O2  $(XDCINCS) -I$(ti.targets.arm.elf.M3.rootDir)/include  -fs=./package/lib/lib/m3/release/ti.sdo.edma3.drv/src -fr=./package/lib/lib/m3/release/ti.sdo.edma3.drv/src
	-@$(FIXDEP) $@.dep $@.dep
	
package/lib/lib/m3/release/ti.sdo.edma3.drv/src/edma3_drv_init.sem3: export C_DIR=
package/lib/lib/m3/release/ti.sdo.edma3.drv/src/edma3_drv_init.sem3: PATH:=$(ti.targets.arm.elf.M3.rootDir)/bin/:$(PATH)

ifeq (,$(MK_NOGENDEPS))
-include package/lib/lib/m3/release/ti.sdo.edma3.drv/src/edma3_drv_basic.oem3.dep
package/lib/lib/m3/release/ti.sdo.edma3.drv/src/edma3_drv_basic.oem3.dep: ;
endif

package/lib/lib/m3/release/ti.sdo.edma3.drv/src/edma3_drv_basic.oem3: | .interfaces
package/lib/lib/m3/release/ti.sdo.edma3.drv/src/edma3_drv_basic.oem3: src/edma3_drv_basic.c lib/m3/release/ti.sdo.edma3.drv.aem3.mak
	@$(RM) $@.dep
	$(RM) $@
	@$(MSG) clem3 $< ...
	$(ti.targets.arm.elf.M3.rootDir)/bin/armcl -c  -qq -pdsw225 --endian=little -mv7M3 --abi=eabi -eo.oem3 -ea.sem3   -Dxdc_target_name__=M3 -Dxdc_target_types__=ti/targets/arm/elf/std.h -Dxdc_bld__profile_release -Dxdc_bld__vers_1_0_16_9_2 -O2  $(XDCINCS) -I$(ti.targets.arm.elf.M3.rootDir)/include  -fs=./package/lib/lib/m3/release/ti.sdo.edma3.drv/src -fr=./package/lib/lib/m3/release/ti.sdo.edma3.drv/src -fc $<
	$(MKDEP) -a $@.dep -p package/lib/lib/m3/release/ti.sdo.edma3.drv/src -s oem3 $< -C   -qq -pdsw225 --endian=little -mv7M3 --abi=eabi -eo.oem3 -ea.sem3   -Dxdc_target_name__=M3 -Dxdc_target_types__=ti/targets/arm/elf/std.h -Dxdc_bld__profile_release -Dxdc_bld__vers_1_0_16_9_2 -O2  $(XDCINCS) -I$(ti.targets.arm.elf.M3.rootDir)/include  -fs=./package/lib/lib/m3/release/ti.sdo.edma3.drv/src -fr=./package/lib/lib/m3/release/ti.sdo.edma3.drv/src
	-@$(FIXDEP) $@.dep $@.dep
	
package/lib/lib/m3/release/ti.sdo.edma3.drv/src/edma3_drv_basic.oem3: export C_DIR=
package/lib/lib/m3/release/ti.sdo.edma3.drv/src/edma3_drv_basic.oem3: PATH:=$(ti.targets.arm.elf.M3.rootDir)/bin/:$(PATH)

package/lib/lib/m3/release/ti.sdo.edma3.drv/src/edma3_drv_basic.sem3: | .interfaces
package/lib/lib/m3/release/ti.sdo.edma3.drv/src/edma3_drv_basic.sem3: src/edma3_drv_basic.c lib/m3/release/ti.sdo.edma3.drv.aem3.mak
	@$(RM) $@.dep
	$(RM) $@
	@$(MSG) clem3 -n $< ...
	$(ti.targets.arm.elf.M3.rootDir)/bin/armcl -c -n -s --symdebug:none -qq -pdsw225 --endian=little -mv7M3 --abi=eabi -eo.oem3 -ea.sem3   -Dxdc_target_name__=M3 -Dxdc_target_types__=ti/targets/arm/elf/std.h -Dxdc_bld__profile_release -Dxdc_bld__vers_1_0_16_9_2 -O2  $(XDCINCS) -I$(ti.targets.arm.elf.M3.rootDir)/include  -fs=./package/lib/lib/m3/release/ti.sdo.edma3.drv/src -fr=./package/lib/lib/m3/release/ti.sdo.edma3.drv/src -fc $<
	$(MKDEP) -a $@.dep -p package/lib/lib/m3/release/ti.sdo.edma3.drv/src -s oem3 $< -C  -n -s --symdebug:none -qq -pdsw225 --endian=little -mv7M3 --abi=eabi -eo.oem3 -ea.sem3   -Dxdc_target_name__=M3 -Dxdc_target_types__=ti/targets/arm/elf/std.h -Dxdc_bld__profile_release -Dxdc_bld__vers_1_0_16_9_2 -O2  $(XDCINCS) -I$(ti.targets.arm.elf.M3.rootDir)/include  -fs=./package/lib/lib/m3/release/ti.sdo.edma3.drv/src -fr=./package/lib/lib/m3/release/ti.sdo.edma3.drv/src
	-@$(FIXDEP) $@.dep $@.dep
	
package/lib/lib/m3/release/ti.sdo.edma3.drv/src/edma3_drv_basic.sem3: export C_DIR=
package/lib/lib/m3/release/ti.sdo.edma3.drv/src/edma3_drv_basic.sem3: PATH:=$(ti.targets.arm.elf.M3.rootDir)/bin/:$(PATH)

ifeq (,$(MK_NOGENDEPS))
-include package/lib/lib/m3/release/ti.sdo.edma3.drv/src/edma3_drv_adv.oem3.dep
package/lib/lib/m3/release/ti.sdo.edma3.drv/src/edma3_drv_adv.oem3.dep: ;
endif

package/lib/lib/m3/release/ti.sdo.edma3.drv/src/edma3_drv_adv.oem3: | .interfaces
package/lib/lib/m3/release/ti.sdo.edma3.drv/src/edma3_drv_adv.oem3: src/edma3_drv_adv.c lib/m3/release/ti.sdo.edma3.drv.aem3.mak
	@$(RM) $@.dep
	$(RM) $@
	@$(MSG) clem3 $< ...
	$(ti.targets.arm.elf.M3.rootDir)/bin/armcl -c  -qq -pdsw225 --endian=little -mv7M3 --abi=eabi -eo.oem3 -ea.sem3   -Dxdc_target_name__=M3 -Dxdc_target_types__=ti/targets/arm/elf/std.h -Dxdc_bld__profile_release -Dxdc_bld__vers_1_0_16_9_2 -O2  $(XDCINCS) -I$(ti.targets.arm.elf.M3.rootDir)/include  -fs=./package/lib/lib/m3/release/ti.sdo.edma3.drv/src -fr=./package/lib/lib/m3/release/ti.sdo.edma3.drv/src -fc $<
	$(MKDEP) -a $@.dep -p package/lib/lib/m3/release/ti.sdo.edma3.drv/src -s oem3 $< -C   -qq -pdsw225 --endian=little -mv7M3 --abi=eabi -eo.oem3 -ea.sem3   -Dxdc_target_name__=M3 -Dxdc_target_types__=ti/targets/arm/elf/std.h -Dxdc_bld__profile_release -Dxdc_bld__vers_1_0_16_9_2 -O2  $(XDCINCS) -I$(ti.targets.arm.elf.M3.rootDir)/include  -fs=./package/lib/lib/m3/release/ti.sdo.edma3.drv/src -fr=./package/lib/lib/m3/release/ti.sdo.edma3.drv/src
	-@$(FIXDEP) $@.dep $@.dep
	
package/lib/lib/m3/release/ti.sdo.edma3.drv/src/edma3_drv_adv.oem3: export C_DIR=
package/lib/lib/m3/release/ti.sdo.edma3.drv/src/edma3_drv_adv.oem3: PATH:=$(ti.targets.arm.elf.M3.rootDir)/bin/:$(PATH)

package/lib/lib/m3/release/ti.sdo.edma3.drv/src/edma3_drv_adv.sem3: | .interfaces
package/lib/lib/m3/release/ti.sdo.edma3.drv/src/edma3_drv_adv.sem3: src/edma3_drv_adv.c lib/m3/release/ti.sdo.edma3.drv.aem3.mak
	@$(RM) $@.dep
	$(RM) $@
	@$(MSG) clem3 -n $< ...
	$(ti.targets.arm.elf.M3.rootDir)/bin/armcl -c -n -s --symdebug:none -qq -pdsw225 --endian=little -mv7M3 --abi=eabi -eo.oem3 -ea.sem3   -Dxdc_target_name__=M3 -Dxdc_target_types__=ti/targets/arm/elf/std.h -Dxdc_bld__profile_release -Dxdc_bld__vers_1_0_16_9_2 -O2  $(XDCINCS) -I$(ti.targets.arm.elf.M3.rootDir)/include  -fs=./package/lib/lib/m3/release/ti.sdo.edma3.drv/src -fr=./package/lib/lib/m3/release/ti.sdo.edma3.drv/src -fc $<
	$(MKDEP) -a $@.dep -p package/lib/lib/m3/release/ti.sdo.edma3.drv/src -s oem3 $< -C  -n -s --symdebug:none -qq -pdsw225 --endian=little -mv7M3 --abi=eabi -eo.oem3 -ea.sem3   -Dxdc_target_name__=M3 -Dxdc_target_types__=ti/targets/arm/elf/std.h -Dxdc_bld__profile_release -Dxdc_bld__vers_1_0_16_9_2 -O2  $(XDCINCS) -I$(ti.targets.arm.elf.M3.rootDir)/include  -fs=./package/lib/lib/m3/release/ti.sdo.edma3.drv/src -fr=./package/lib/lib/m3/release/ti.sdo.edma3.drv/src
	-@$(FIXDEP) $@.dep $@.dep
	
package/lib/lib/m3/release/ti.sdo.edma3.drv/src/edma3_drv_adv.sem3: export C_DIR=
package/lib/lib/m3/release/ti.sdo.edma3.drv/src/edma3_drv_adv.sem3: PATH:=$(ti.targets.arm.elf.M3.rootDir)/bin/:$(PATH)

clean,em3 ::
	-$(RM) package/lib/lib/m3/release/ti.sdo.edma3.drv/package/package_ti.sdo.edma3.drv.oem3
	-$(RM) package/lib/lib/m3/release/ti.sdo.edma3.drv/src/edma3_drv_init.oem3
	-$(RM) package/lib/lib/m3/release/ti.sdo.edma3.drv/src/edma3_drv_basic.oem3
	-$(RM) package/lib/lib/m3/release/ti.sdo.edma3.drv/src/edma3_drv_adv.oem3
	-$(RM) package/lib/lib/m3/release/ti.sdo.edma3.drv/package/package_ti.sdo.edma3.drv.sem3
	-$(RM) package/lib/lib/m3/release/ti.sdo.edma3.drv/src/edma3_drv_init.sem3
	-$(RM) package/lib/lib/m3/release/ti.sdo.edma3.drv/src/edma3_drv_basic.sem3
	-$(RM) package/lib/lib/m3/release/ti.sdo.edma3.drv/src/edma3_drv_adv.sem3

lib/m3/release/ti.sdo.edma3.drv.aem3: package/lib/lib/m3/release/ti.sdo.edma3.drv/package/package_ti.sdo.edma3.drv.oem3 package/lib/lib/m3/release/ti.sdo.edma3.drv/src/edma3_drv_init.oem3 package/lib/lib/m3/release/ti.sdo.edma3.drv/src/edma3_drv_basic.oem3 package/lib/lib/m3/release/ti.sdo.edma3.drv/src/edma3_drv_adv.oem3 lib/m3/release/ti.sdo.edma3.drv.aem3.mak

clean::
	-$(RM) lib/m3/release/ti.sdo.edma3.drv.aem3.mak
