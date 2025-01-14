#
#  Do not edit this file.  This file is generated from 
#  package.bld.  Any modifications to this file will be 
#  overwritten whenever makefiles are re-generated.
#
#  target compatibility key = gnu.targets.arm.A15F{1,0,4.9,3
#
ifeq (,$(MK_NOGENDEPS))
-include package/lib/lib/servers_min_ipv4/package/package_ti.ndk.tools.servers.oa15fg.dep
package/lib/lib/servers_min_ipv4/package/package_ti.ndk.tools.servers.oa15fg.dep: ;
endif

package/lib/lib/servers_min_ipv4/package/package_ti.ndk.tools.servers.oa15fg: | .interfaces
package/lib/lib/servers_min_ipv4/package/package_ti.ndk.tools.servers.oa15fg: package/package_ti.ndk.tools.servers.c lib/servers_min_ipv4.aa15fg.mak
	@$(RM) $@.dep
	$(RM) $@
	@$(MSG) cla15fg $< ...
	$(gnu.targets.arm.A15F.rootDir)/bin/arm-none-eabi-gcc -c -MD -MF $@.dep -x c  -Wunused -Wunknown-pragmas -ffunction-sections -fdata-sections  -mcpu=cortex-a15 -mfpu=neon -mfloat-abi=hard -mabi=aapcs -g -Dfar= -D__DYNAMIC_REENT__  -Dxdc_target_name__=A15F -Dxdc_target_types__=gnu/targets/arm/std.h -Dxdc_bld__profile_release -Dxdc_bld__vers_1_0_4_9_3  -O2  -D_NDK_EXTERN_CONFIG -D_INCLUDE_NAT_CODE -D_INCLUDE_PPP_CODE -D_INCLUDE_PPPOE_CODE -D_INCLUDE_NIMU_CODE -I/datalocal1/user/surya/vsdk_02_12_RC1/ti_components/os_tools/bios_6_46_00_23/packages/gnu/targets/arm//libs/install-native/arm-none-eabi/include   -I$(PKGROOT)/ti/ndk//inc -I$(PKGROOT)/ti/ndk//inc/tools $(XDCINCS)  -o $@ $<
	-@$(FIXDEP) $@.dep $@.dep
	
package/lib/lib/servers_min_ipv4/package/package_ti.ndk.tools.servers.oa15fg: export LD_LIBRARY_PATH=

package/lib/lib/servers_min_ipv4/package/package_ti.ndk.tools.servers.sa15fg: | .interfaces
package/lib/lib/servers_min_ipv4/package/package_ti.ndk.tools.servers.sa15fg: package/package_ti.ndk.tools.servers.c lib/servers_min_ipv4.aa15fg.mak
	@$(RM) $@.dep
	$(RM) $@
	@$(MSG) cla15fg -S $< ...
	$(gnu.targets.arm.A15F.rootDir)/bin/arm-none-eabi-gcc -c -MD -MF $@.dep -x c -S -Wunused -Wunknown-pragmas -ffunction-sections -fdata-sections  -mcpu=cortex-a15 -mfpu=neon -mfloat-abi=hard -mabi=aapcs -g -Dfar= -D__DYNAMIC_REENT__  -Dxdc_target_name__=A15F -Dxdc_target_types__=gnu/targets/arm/std.h -Dxdc_bld__profile_release -Dxdc_bld__vers_1_0_4_9_3  -O2  -D_NDK_EXTERN_CONFIG -D_INCLUDE_NAT_CODE -D_INCLUDE_PPP_CODE -D_INCLUDE_PPPOE_CODE -D_INCLUDE_NIMU_CODE  -I$(PKGROOT)/ti/ndk//inc -I$(PKGROOT)/ti/ndk//inc/tools $(XDCINCS)  -o $@ $<
	-@$(FIXDEP) $@.dep $@.dep
	
package/lib/lib/servers_min_ipv4/package/package_ti.ndk.tools.servers.sa15fg: export LD_LIBRARY_PATH=

ifeq (,$(MK_NOGENDEPS))
-include package/lib/lib/servers_min_ipv4/datasrv.oa15fg.dep
package/lib/lib/servers_min_ipv4/datasrv.oa15fg.dep: ;
endif

package/lib/lib/servers_min_ipv4/datasrv.oa15fg: | .interfaces
package/lib/lib/servers_min_ipv4/datasrv.oa15fg: datasrv.c lib/servers_min_ipv4.aa15fg.mak
	@$(RM) $@.dep
	$(RM) $@
	@$(MSG) cla15fg $< ...
	$(gnu.targets.arm.A15F.rootDir)/bin/arm-none-eabi-gcc -c -MD -MF $@.dep -x c  -Wunused -Wunknown-pragmas -ffunction-sections -fdata-sections  -mcpu=cortex-a15 -mfpu=neon -mfloat-abi=hard -mabi=aapcs -g -Dfar= -D__DYNAMIC_REENT__  -Dxdc_target_name__=A15F -Dxdc_target_types__=gnu/targets/arm/std.h -Dxdc_bld__profile_release -Dxdc_bld__vers_1_0_4_9_3  -O2  -D_NDK_EXTERN_CONFIG -D_INCLUDE_NAT_CODE -D_INCLUDE_PPP_CODE -D_INCLUDE_PPPOE_CODE -D_INCLUDE_NIMU_CODE -I/datalocal1/user/surya/vsdk_02_12_RC1/ti_components/os_tools/bios_6_46_00_23/packages/gnu/targets/arm//libs/install-native/arm-none-eabi/include   -I$(PKGROOT)/ti/ndk//inc -I$(PKGROOT)/ti/ndk//inc/tools $(XDCINCS)  -o $@ $<
	-@$(FIXDEP) $@.dep $@.dep
	
package/lib/lib/servers_min_ipv4/datasrv.oa15fg: export LD_LIBRARY_PATH=

package/lib/lib/servers_min_ipv4/datasrv.sa15fg: | .interfaces
package/lib/lib/servers_min_ipv4/datasrv.sa15fg: datasrv.c lib/servers_min_ipv4.aa15fg.mak
	@$(RM) $@.dep
	$(RM) $@
	@$(MSG) cla15fg -S $< ...
	$(gnu.targets.arm.A15F.rootDir)/bin/arm-none-eabi-gcc -c -MD -MF $@.dep -x c -S -Wunused -Wunknown-pragmas -ffunction-sections -fdata-sections  -mcpu=cortex-a15 -mfpu=neon -mfloat-abi=hard -mabi=aapcs -g -Dfar= -D__DYNAMIC_REENT__  -Dxdc_target_name__=A15F -Dxdc_target_types__=gnu/targets/arm/std.h -Dxdc_bld__profile_release -Dxdc_bld__vers_1_0_4_9_3  -O2  -D_NDK_EXTERN_CONFIG -D_INCLUDE_NAT_CODE -D_INCLUDE_PPP_CODE -D_INCLUDE_PPPOE_CODE -D_INCLUDE_NIMU_CODE  -I$(PKGROOT)/ti/ndk//inc -I$(PKGROOT)/ti/ndk//inc/tools $(XDCINCS)  -o $@ $<
	-@$(FIXDEP) $@.dep $@.dep
	
package/lib/lib/servers_min_ipv4/datasrv.sa15fg: export LD_LIBRARY_PATH=

ifeq (,$(MK_NOGENDEPS))
-include package/lib/lib/servers_min_ipv4/echosrv.oa15fg.dep
package/lib/lib/servers_min_ipv4/echosrv.oa15fg.dep: ;
endif

package/lib/lib/servers_min_ipv4/echosrv.oa15fg: | .interfaces
package/lib/lib/servers_min_ipv4/echosrv.oa15fg: echosrv.c lib/servers_min_ipv4.aa15fg.mak
	@$(RM) $@.dep
	$(RM) $@
	@$(MSG) cla15fg $< ...
	$(gnu.targets.arm.A15F.rootDir)/bin/arm-none-eabi-gcc -c -MD -MF $@.dep -x c  -Wunused -Wunknown-pragmas -ffunction-sections -fdata-sections  -mcpu=cortex-a15 -mfpu=neon -mfloat-abi=hard -mabi=aapcs -g -Dfar= -D__DYNAMIC_REENT__  -Dxdc_target_name__=A15F -Dxdc_target_types__=gnu/targets/arm/std.h -Dxdc_bld__profile_release -Dxdc_bld__vers_1_0_4_9_3  -O2  -D_NDK_EXTERN_CONFIG -D_INCLUDE_NAT_CODE -D_INCLUDE_PPP_CODE -D_INCLUDE_PPPOE_CODE -D_INCLUDE_NIMU_CODE -I/datalocal1/user/surya/vsdk_02_12_RC1/ti_components/os_tools/bios_6_46_00_23/packages/gnu/targets/arm//libs/install-native/arm-none-eabi/include   -I$(PKGROOT)/ti/ndk//inc -I$(PKGROOT)/ti/ndk//inc/tools $(XDCINCS)  -o $@ $<
	-@$(FIXDEP) $@.dep $@.dep
	
package/lib/lib/servers_min_ipv4/echosrv.oa15fg: export LD_LIBRARY_PATH=

package/lib/lib/servers_min_ipv4/echosrv.sa15fg: | .interfaces
package/lib/lib/servers_min_ipv4/echosrv.sa15fg: echosrv.c lib/servers_min_ipv4.aa15fg.mak
	@$(RM) $@.dep
	$(RM) $@
	@$(MSG) cla15fg -S $< ...
	$(gnu.targets.arm.A15F.rootDir)/bin/arm-none-eabi-gcc -c -MD -MF $@.dep -x c -S -Wunused -Wunknown-pragmas -ffunction-sections -fdata-sections  -mcpu=cortex-a15 -mfpu=neon -mfloat-abi=hard -mabi=aapcs -g -Dfar= -D__DYNAMIC_REENT__  -Dxdc_target_name__=A15F -Dxdc_target_types__=gnu/targets/arm/std.h -Dxdc_bld__profile_release -Dxdc_bld__vers_1_0_4_9_3  -O2  -D_NDK_EXTERN_CONFIG -D_INCLUDE_NAT_CODE -D_INCLUDE_PPP_CODE -D_INCLUDE_PPPOE_CODE -D_INCLUDE_NIMU_CODE  -I$(PKGROOT)/ti/ndk//inc -I$(PKGROOT)/ti/ndk//inc/tools $(XDCINCS)  -o $@ $<
	-@$(FIXDEP) $@.dep $@.dep
	
package/lib/lib/servers_min_ipv4/echosrv.sa15fg: export LD_LIBRARY_PATH=

ifeq (,$(MK_NOGENDEPS))
-include package/lib/lib/servers_min_ipv4/newservers.oa15fg.dep
package/lib/lib/servers_min_ipv4/newservers.oa15fg.dep: ;
endif

package/lib/lib/servers_min_ipv4/newservers.oa15fg: | .interfaces
package/lib/lib/servers_min_ipv4/newservers.oa15fg: newservers.c lib/servers_min_ipv4.aa15fg.mak
	@$(RM) $@.dep
	$(RM) $@
	@$(MSG) cla15fg $< ...
	$(gnu.targets.arm.A15F.rootDir)/bin/arm-none-eabi-gcc -c -MD -MF $@.dep -x c  -Wunused -Wunknown-pragmas -ffunction-sections -fdata-sections  -mcpu=cortex-a15 -mfpu=neon -mfloat-abi=hard -mabi=aapcs -g -Dfar= -D__DYNAMIC_REENT__  -Dxdc_target_name__=A15F -Dxdc_target_types__=gnu/targets/arm/std.h -Dxdc_bld__profile_release -Dxdc_bld__vers_1_0_4_9_3  -O2  -D_NDK_EXTERN_CONFIG -D_INCLUDE_NAT_CODE -D_INCLUDE_PPP_CODE -D_INCLUDE_PPPOE_CODE -D_INCLUDE_NIMU_CODE -I/datalocal1/user/surya/vsdk_02_12_RC1/ti_components/os_tools/bios_6_46_00_23/packages/gnu/targets/arm//libs/install-native/arm-none-eabi/include   -I$(PKGROOT)/ti/ndk//inc -I$(PKGROOT)/ti/ndk//inc/tools $(XDCINCS)  -o $@ $<
	-@$(FIXDEP) $@.dep $@.dep
	
package/lib/lib/servers_min_ipv4/newservers.oa15fg: export LD_LIBRARY_PATH=

package/lib/lib/servers_min_ipv4/newservers.sa15fg: | .interfaces
package/lib/lib/servers_min_ipv4/newservers.sa15fg: newservers.c lib/servers_min_ipv4.aa15fg.mak
	@$(RM) $@.dep
	$(RM) $@
	@$(MSG) cla15fg -S $< ...
	$(gnu.targets.arm.A15F.rootDir)/bin/arm-none-eabi-gcc -c -MD -MF $@.dep -x c -S -Wunused -Wunknown-pragmas -ffunction-sections -fdata-sections  -mcpu=cortex-a15 -mfpu=neon -mfloat-abi=hard -mabi=aapcs -g -Dfar= -D__DYNAMIC_REENT__  -Dxdc_target_name__=A15F -Dxdc_target_types__=gnu/targets/arm/std.h -Dxdc_bld__profile_release -Dxdc_bld__vers_1_0_4_9_3  -O2  -D_NDK_EXTERN_CONFIG -D_INCLUDE_NAT_CODE -D_INCLUDE_PPP_CODE -D_INCLUDE_PPPOE_CODE -D_INCLUDE_NIMU_CODE  -I$(PKGROOT)/ti/ndk//inc -I$(PKGROOT)/ti/ndk//inc/tools $(XDCINCS)  -o $@ $<
	-@$(FIXDEP) $@.dep $@.dep
	
package/lib/lib/servers_min_ipv4/newservers.sa15fg: export LD_LIBRARY_PATH=

ifeq (,$(MK_NOGENDEPS))
-include package/lib/lib/servers_min_ipv4/nullsrv.oa15fg.dep
package/lib/lib/servers_min_ipv4/nullsrv.oa15fg.dep: ;
endif

package/lib/lib/servers_min_ipv4/nullsrv.oa15fg: | .interfaces
package/lib/lib/servers_min_ipv4/nullsrv.oa15fg: nullsrv.c lib/servers_min_ipv4.aa15fg.mak
	@$(RM) $@.dep
	$(RM) $@
	@$(MSG) cla15fg $< ...
	$(gnu.targets.arm.A15F.rootDir)/bin/arm-none-eabi-gcc -c -MD -MF $@.dep -x c  -Wunused -Wunknown-pragmas -ffunction-sections -fdata-sections  -mcpu=cortex-a15 -mfpu=neon -mfloat-abi=hard -mabi=aapcs -g -Dfar= -D__DYNAMIC_REENT__  -Dxdc_target_name__=A15F -Dxdc_target_types__=gnu/targets/arm/std.h -Dxdc_bld__profile_release -Dxdc_bld__vers_1_0_4_9_3  -O2  -D_NDK_EXTERN_CONFIG -D_INCLUDE_NAT_CODE -D_INCLUDE_PPP_CODE -D_INCLUDE_PPPOE_CODE -D_INCLUDE_NIMU_CODE -I/datalocal1/user/surya/vsdk_02_12_RC1/ti_components/os_tools/bios_6_46_00_23/packages/gnu/targets/arm//libs/install-native/arm-none-eabi/include   -I$(PKGROOT)/ti/ndk//inc -I$(PKGROOT)/ti/ndk//inc/tools $(XDCINCS)  -o $@ $<
	-@$(FIXDEP) $@.dep $@.dep
	
package/lib/lib/servers_min_ipv4/nullsrv.oa15fg: export LD_LIBRARY_PATH=

package/lib/lib/servers_min_ipv4/nullsrv.sa15fg: | .interfaces
package/lib/lib/servers_min_ipv4/nullsrv.sa15fg: nullsrv.c lib/servers_min_ipv4.aa15fg.mak
	@$(RM) $@.dep
	$(RM) $@
	@$(MSG) cla15fg -S $< ...
	$(gnu.targets.arm.A15F.rootDir)/bin/arm-none-eabi-gcc -c -MD -MF $@.dep -x c -S -Wunused -Wunknown-pragmas -ffunction-sections -fdata-sections  -mcpu=cortex-a15 -mfpu=neon -mfloat-abi=hard -mabi=aapcs -g -Dfar= -D__DYNAMIC_REENT__  -Dxdc_target_name__=A15F -Dxdc_target_types__=gnu/targets/arm/std.h -Dxdc_bld__profile_release -Dxdc_bld__vers_1_0_4_9_3  -O2  -D_NDK_EXTERN_CONFIG -D_INCLUDE_NAT_CODE -D_INCLUDE_PPP_CODE -D_INCLUDE_PPPOE_CODE -D_INCLUDE_NIMU_CODE  -I$(PKGROOT)/ti/ndk//inc -I$(PKGROOT)/ti/ndk//inc/tools $(XDCINCS)  -o $@ $<
	-@$(FIXDEP) $@.dep $@.dep
	
package/lib/lib/servers_min_ipv4/nullsrv.sa15fg: export LD_LIBRARY_PATH=

ifeq (,$(MK_NOGENDEPS))
-include package/lib/lib/servers_min_ipv4/oobsrv.oa15fg.dep
package/lib/lib/servers_min_ipv4/oobsrv.oa15fg.dep: ;
endif

package/lib/lib/servers_min_ipv4/oobsrv.oa15fg: | .interfaces
package/lib/lib/servers_min_ipv4/oobsrv.oa15fg: oobsrv.c lib/servers_min_ipv4.aa15fg.mak
	@$(RM) $@.dep
	$(RM) $@
	@$(MSG) cla15fg $< ...
	$(gnu.targets.arm.A15F.rootDir)/bin/arm-none-eabi-gcc -c -MD -MF $@.dep -x c  -Wunused -Wunknown-pragmas -ffunction-sections -fdata-sections  -mcpu=cortex-a15 -mfpu=neon -mfloat-abi=hard -mabi=aapcs -g -Dfar= -D__DYNAMIC_REENT__  -Dxdc_target_name__=A15F -Dxdc_target_types__=gnu/targets/arm/std.h -Dxdc_bld__profile_release -Dxdc_bld__vers_1_0_4_9_3  -O2  -D_NDK_EXTERN_CONFIG -D_INCLUDE_NAT_CODE -D_INCLUDE_PPP_CODE -D_INCLUDE_PPPOE_CODE -D_INCLUDE_NIMU_CODE -I/datalocal1/user/surya/vsdk_02_12_RC1/ti_components/os_tools/bios_6_46_00_23/packages/gnu/targets/arm//libs/install-native/arm-none-eabi/include   -I$(PKGROOT)/ti/ndk//inc -I$(PKGROOT)/ti/ndk//inc/tools $(XDCINCS)  -o $@ $<
	-@$(FIXDEP) $@.dep $@.dep
	
package/lib/lib/servers_min_ipv4/oobsrv.oa15fg: export LD_LIBRARY_PATH=

package/lib/lib/servers_min_ipv4/oobsrv.sa15fg: | .interfaces
package/lib/lib/servers_min_ipv4/oobsrv.sa15fg: oobsrv.c lib/servers_min_ipv4.aa15fg.mak
	@$(RM) $@.dep
	$(RM) $@
	@$(MSG) cla15fg -S $< ...
	$(gnu.targets.arm.A15F.rootDir)/bin/arm-none-eabi-gcc -c -MD -MF $@.dep -x c -S -Wunused -Wunknown-pragmas -ffunction-sections -fdata-sections  -mcpu=cortex-a15 -mfpu=neon -mfloat-abi=hard -mabi=aapcs -g -Dfar= -D__DYNAMIC_REENT__  -Dxdc_target_name__=A15F -Dxdc_target_types__=gnu/targets/arm/std.h -Dxdc_bld__profile_release -Dxdc_bld__vers_1_0_4_9_3  -O2  -D_NDK_EXTERN_CONFIG -D_INCLUDE_NAT_CODE -D_INCLUDE_PPP_CODE -D_INCLUDE_PPPOE_CODE -D_INCLUDE_NIMU_CODE  -I$(PKGROOT)/ti/ndk//inc -I$(PKGROOT)/ti/ndk//inc/tools $(XDCINCS)  -o $@ $<
	-@$(FIXDEP) $@.dep $@.dep
	
package/lib/lib/servers_min_ipv4/oobsrv.sa15fg: export LD_LIBRARY_PATH=

clean,a15fg ::
	-$(RM) package/lib/lib/servers_min_ipv4/package/package_ti.ndk.tools.servers.oa15fg
	-$(RM) package/lib/lib/servers_min_ipv4/datasrv.oa15fg
	-$(RM) package/lib/lib/servers_min_ipv4/echosrv.oa15fg
	-$(RM) package/lib/lib/servers_min_ipv4/newservers.oa15fg
	-$(RM) package/lib/lib/servers_min_ipv4/nullsrv.oa15fg
	-$(RM) package/lib/lib/servers_min_ipv4/oobsrv.oa15fg
	-$(RM) package/lib/lib/servers_min_ipv4/package/package_ti.ndk.tools.servers.sa15fg
	-$(RM) package/lib/lib/servers_min_ipv4/datasrv.sa15fg
	-$(RM) package/lib/lib/servers_min_ipv4/echosrv.sa15fg
	-$(RM) package/lib/lib/servers_min_ipv4/newservers.sa15fg
	-$(RM) package/lib/lib/servers_min_ipv4/nullsrv.sa15fg
	-$(RM) package/lib/lib/servers_min_ipv4/oobsrv.sa15fg

lib/servers_min_ipv4.aa15fg: package/lib/lib/servers_min_ipv4/package/package_ti.ndk.tools.servers.oa15fg package/lib/lib/servers_min_ipv4/datasrv.oa15fg package/lib/lib/servers_min_ipv4/echosrv.oa15fg package/lib/lib/servers_min_ipv4/newservers.oa15fg package/lib/lib/servers_min_ipv4/nullsrv.oa15fg package/lib/lib/servers_min_ipv4/oobsrv.oa15fg lib/servers_min_ipv4.aa15fg.mak

clean::
	-$(RM) lib/servers_min_ipv4.aa15fg.mak
