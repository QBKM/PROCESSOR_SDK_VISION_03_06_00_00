#
#  Do not edit this file.  This file is generated from 
#  package.bld.  Any modifications to this file will be 
#  overwritten whenever makefiles are re-generated.
#
#  target compatibility key = ti.targets.elf.C66{1,0,7.4,2
#
ifeq (,$(MK_NOGENDEPS))
-include package/lib/lib/hal_userled_stub/package/package_ti.ndk.hal.userled_stub.oe66.dep
package/lib/lib/hal_userled_stub/package/package_ti.ndk.hal.userled_stub.oe66.dep: ;
endif

package/lib/lib/hal_userled_stub/package/package_ti.ndk.hal.userled_stub.oe66: | .interfaces
package/lib/lib/hal_userled_stub/package/package_ti.ndk.hal.userled_stub.oe66: package/package_ti.ndk.hal.userled_stub.c lib/hal_userled_stub.ae66.mak
	@$(RM) $@.dep
	$(RM) $@
	@$(MSG) cle66 $< ...
	$(ti.targets.elf.C66.rootDir)/bin/cl6x -c  -qq -pdsw225 -mv6600 --abi=eabi -eo.oe66 -ea.se66  -mi10 -mo -pdr -pden -pds=238 -pds=880 -pds1110 -ms2  -Dxdc_target_name__=C66 -Dxdc_target_types__=ti/targets/elf/std.h -Dxdc_bld__profile_release -Dxdc_bld__vers_1_0_7_4_2 -O2  -I$(PKGROOT)/ti/ndk//inc -I$(PKGROOT)/ti/ndk//inc/tools $(XDCINCS) -I$(ti.targets.elf.C66.rootDir)/include -fs=./package/lib/lib/hal_userled_stub/package -fr=./package/lib/lib/hal_userled_stub/package -fc $<
	$(MKDEP) -a $@.dep -p package/lib/lib/hal_userled_stub/package -s oe66 $< -C   -qq -pdsw225 -mv6600 --abi=eabi -eo.oe66 -ea.se66  -mi10 -mo -pdr -pden -pds=238 -pds=880 -pds1110 -ms2  -Dxdc_target_name__=C66 -Dxdc_target_types__=ti/targets/elf/std.h -Dxdc_bld__profile_release -Dxdc_bld__vers_1_0_7_4_2 -O2  -I$(PKGROOT)/ti/ndk//inc -I$(PKGROOT)/ti/ndk//inc/tools $(XDCINCS) -I$(ti.targets.elf.C66.rootDir)/include -fs=./package/lib/lib/hal_userled_stub/package -fr=./package/lib/lib/hal_userled_stub/package
	-@$(FIXDEP) $@.dep $@.dep
	
package/lib/lib/hal_userled_stub/package/package_ti.ndk.hal.userled_stub.oe66: export C_DIR=
package/lib/lib/hal_userled_stub/package/package_ti.ndk.hal.userled_stub.oe66: PATH:=$(ti.targets.elf.C66.rootDir)/bin/:$(PATH)

package/lib/lib/hal_userled_stub/package/package_ti.ndk.hal.userled_stub.se66: | .interfaces
package/lib/lib/hal_userled_stub/package/package_ti.ndk.hal.userled_stub.se66: package/package_ti.ndk.hal.userled_stub.c lib/hal_userled_stub.ae66.mak
	@$(RM) $@.dep
	$(RM) $@
	@$(MSG) cle66 -n $< ...
	$(ti.targets.elf.C66.rootDir)/bin/cl6x -c -n -s --symdebug:none -qq -pdsw225 -mv6600 --abi=eabi -eo.oe66 -ea.se66  -mi10 -mo -pdr -pden -pds=238 -pds=880 -pds1110 -ms2  -Dxdc_target_name__=C66 -Dxdc_target_types__=ti/targets/elf/std.h -Dxdc_bld__profile_release -Dxdc_bld__vers_1_0_7_4_2 -O2  -I$(PKGROOT)/ti/ndk//inc -I$(PKGROOT)/ti/ndk//inc/tools $(XDCINCS) -I$(ti.targets.elf.C66.rootDir)/include -fs=./package/lib/lib/hal_userled_stub/package -fr=./package/lib/lib/hal_userled_stub/package -fc $<
	$(MKDEP) -a $@.dep -p package/lib/lib/hal_userled_stub/package -s oe66 $< -C  -n -s --symdebug:none -qq -pdsw225 -mv6600 --abi=eabi -eo.oe66 -ea.se66  -mi10 -mo -pdr -pden -pds=238 -pds=880 -pds1110 -ms2  -Dxdc_target_name__=C66 -Dxdc_target_types__=ti/targets/elf/std.h -Dxdc_bld__profile_release -Dxdc_bld__vers_1_0_7_4_2 -O2  -I$(PKGROOT)/ti/ndk//inc -I$(PKGROOT)/ti/ndk//inc/tools $(XDCINCS) -I$(ti.targets.elf.C66.rootDir)/include -fs=./package/lib/lib/hal_userled_stub/package -fr=./package/lib/lib/hal_userled_stub/package
	-@$(FIXDEP) $@.dep $@.dep
	
package/lib/lib/hal_userled_stub/package/package_ti.ndk.hal.userled_stub.se66: export C_DIR=
package/lib/lib/hal_userled_stub/package/package_ti.ndk.hal.userled_stub.se66: PATH:=$(ti.targets.elf.C66.rootDir)/bin/:$(PATH)

ifeq (,$(MK_NOGENDEPS))
-include package/lib/lib/hal_userled_stub/llled.oe66.dep
package/lib/lib/hal_userled_stub/llled.oe66.dep: ;
endif

package/lib/lib/hal_userled_stub/llled.oe66: | .interfaces
package/lib/lib/hal_userled_stub/llled.oe66: llled.c lib/hal_userled_stub.ae66.mak
	@$(RM) $@.dep
	$(RM) $@
	@$(MSG) cle66 $< ...
	$(ti.targets.elf.C66.rootDir)/bin/cl6x -c  -qq -pdsw225 -mv6600 --abi=eabi -eo.oe66 -ea.se66  -mi10 -mo -pdr -pden -pds=238 -pds=880 -pds1110 -ms2  -Dxdc_target_name__=C66 -Dxdc_target_types__=ti/targets/elf/std.h -Dxdc_bld__profile_release -Dxdc_bld__vers_1_0_7_4_2 -O2  -I$(PKGROOT)/ti/ndk//inc -I$(PKGROOT)/ti/ndk//inc/tools $(XDCINCS) -I$(ti.targets.elf.C66.rootDir)/include -fs=./package/lib/lib/hal_userled_stub -fr=./package/lib/lib/hal_userled_stub -fc $<
	$(MKDEP) -a $@.dep -p package/lib/lib/hal_userled_stub -s oe66 $< -C   -qq -pdsw225 -mv6600 --abi=eabi -eo.oe66 -ea.se66  -mi10 -mo -pdr -pden -pds=238 -pds=880 -pds1110 -ms2  -Dxdc_target_name__=C66 -Dxdc_target_types__=ti/targets/elf/std.h -Dxdc_bld__profile_release -Dxdc_bld__vers_1_0_7_4_2 -O2  -I$(PKGROOT)/ti/ndk//inc -I$(PKGROOT)/ti/ndk//inc/tools $(XDCINCS) -I$(ti.targets.elf.C66.rootDir)/include -fs=./package/lib/lib/hal_userled_stub -fr=./package/lib/lib/hal_userled_stub
	-@$(FIXDEP) $@.dep $@.dep
	
package/lib/lib/hal_userled_stub/llled.oe66: export C_DIR=
package/lib/lib/hal_userled_stub/llled.oe66: PATH:=$(ti.targets.elf.C66.rootDir)/bin/:$(PATH)

package/lib/lib/hal_userled_stub/llled.se66: | .interfaces
package/lib/lib/hal_userled_stub/llled.se66: llled.c lib/hal_userled_stub.ae66.mak
	@$(RM) $@.dep
	$(RM) $@
	@$(MSG) cle66 -n $< ...
	$(ti.targets.elf.C66.rootDir)/bin/cl6x -c -n -s --symdebug:none -qq -pdsw225 -mv6600 --abi=eabi -eo.oe66 -ea.se66  -mi10 -mo -pdr -pden -pds=238 -pds=880 -pds1110 -ms2  -Dxdc_target_name__=C66 -Dxdc_target_types__=ti/targets/elf/std.h -Dxdc_bld__profile_release -Dxdc_bld__vers_1_0_7_4_2 -O2  -I$(PKGROOT)/ti/ndk//inc -I$(PKGROOT)/ti/ndk//inc/tools $(XDCINCS) -I$(ti.targets.elf.C66.rootDir)/include -fs=./package/lib/lib/hal_userled_stub -fr=./package/lib/lib/hal_userled_stub -fc $<
	$(MKDEP) -a $@.dep -p package/lib/lib/hal_userled_stub -s oe66 $< -C  -n -s --symdebug:none -qq -pdsw225 -mv6600 --abi=eabi -eo.oe66 -ea.se66  -mi10 -mo -pdr -pden -pds=238 -pds=880 -pds1110 -ms2  -Dxdc_target_name__=C66 -Dxdc_target_types__=ti/targets/elf/std.h -Dxdc_bld__profile_release -Dxdc_bld__vers_1_0_7_4_2 -O2  -I$(PKGROOT)/ti/ndk//inc -I$(PKGROOT)/ti/ndk//inc/tools $(XDCINCS) -I$(ti.targets.elf.C66.rootDir)/include -fs=./package/lib/lib/hal_userled_stub -fr=./package/lib/lib/hal_userled_stub
	-@$(FIXDEP) $@.dep $@.dep
	
package/lib/lib/hal_userled_stub/llled.se66: export C_DIR=
package/lib/lib/hal_userled_stub/llled.se66: PATH:=$(ti.targets.elf.C66.rootDir)/bin/:$(PATH)

clean,e66 ::
	-$(RM) package/lib/lib/hal_userled_stub/package/package_ti.ndk.hal.userled_stub.oe66
	-$(RM) package/lib/lib/hal_userled_stub/llled.oe66
	-$(RM) package/lib/lib/hal_userled_stub/package/package_ti.ndk.hal.userled_stub.se66
	-$(RM) package/lib/lib/hal_userled_stub/llled.se66

lib/hal_userled_stub.ae66: package/lib/lib/hal_userled_stub/package/package_ti.ndk.hal.userled_stub.oe66 package/lib/lib/hal_userled_stub/llled.oe66 lib/hal_userled_stub.ae66.mak

clean::
	-$(RM) lib/hal_userled_stub.ae66.mak
