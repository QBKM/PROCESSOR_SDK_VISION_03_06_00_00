#
# Set config variables to known default value, these are over ridden in MAKECONFIG specific config file
#
PROC_IPU1_0_INCLUDE=no
PROC_IPU1_1_INCLUDE=no
PROC_IPU2_INCLUDE=no
PROC_A15_0_INCLUDE=no
PROC_DSP1_INCLUDE=no
PROC_DSP2_INCLUDE=no
PROC_EVE1_INCLUDE=no
PROC_EVE2_INCLUDE=no
PROC_EVE3_INCLUDE=no
PROC_EVE4_INCLUDE=no

DUAL_A15_SMP_BIOS=no
IPU1_SMP_BIOS=no
DDR_MEM=DDR_MEM_512M
#Look at build_pdk.mk for all config supported for EMIF MODE
EMIFMODE?=SINGLE_EMIF_512MB
NDK_PROC_TO_USE=none
NSP_TFDTP_INCLUDE=no
NDK_ENABLE_IPV6=no
TDA2EX_ETHSRV_BOARD=no
FATFS_PROC_TO_USE=none

BUILD_ALGORITHMS?=no
BUILD_INFOADAS?=no

KW_BUILD?=no
CPLUSPLUS_BUILD?=no

IPU_PRIMARY_CORE=ipu1_0
IPU_SECONDARY_CORE=ipu2
A15_TARGET_OS=Bios

IVAHD_INCLUDE=no
VPE_INCLUDE=no
DSS_INCLUDE=no
CAL_INCLUDE=no
ISS_INCLUDE=no
ISS_ENABLE_DEBUG_TAPS=no
WDR_LDC_INCLUDE=no

RTI_INCLUDE=no
ECC_FFI_INCLUDE=no
DCC_ESM_INCLUDE=no

AVB_INCLUDE=no
DCAN_INCLUDE=no
RADAR_ONLY=no
RADAR_BOARD=none
FAST_BOOT_INCLUDE=no
SRV_FAST_BOOT_INCLUDE=no
CPU_IDLE_ENABLED=no
DATA_VIS_INCLUDE=no
OPENCL_INCLUDE=no
ENABLE_OPENCV=no
HS_DEVICE=no
ULTRASONIC_INCLUDE=no

DEFAULT_UBOOT_CONFIG=dra7xx_evm_vision_config
DEFAULT_KERNEL_CONFIG=ti_sdk_dra7x_release_defconfig
DEFAULT_DTB=dra7-evm-infoadas.dtb
IPUMM_INCLUDE=no
CMEM_INCLUDE=no

ENABLE_UART_LOG=yes
ENABLE_NETWORK_LOG=no
ENABLE_CCS_LOG=no

NEED_PROC_IPU1_0=no
NEED_PROC_IPU1_1=no
NEED_PROC_IPU2=no
NEED_PROC_A15_0=no
NEED_PROC_DSP1=no
NEED_PROC_DSP2=no
NEED_PROC_EVE1=no
NEED_PROC_EVE2=no
NEED_PROC_EVE3=no
NEED_PROC_EVE4=no

ROBUST_RVC_INCLUDE=no
IPC_LIB_INCLUDE?=no
AUTOSAR_APP?=no


OPENVX_INCLUDE=no

WORKQ_INCLUDE=no

TDA2EX_17X17=no

CIO_REDIRECT=no

ENABLE_UIA_PROFILING=no

BUILD_ADAM_CAR=no
ENABLE_OPENCV_TESTS=no

ENABLE_TASK_PROFILE_UTIL=no
EARLY_USECASE_ENABLE=no
