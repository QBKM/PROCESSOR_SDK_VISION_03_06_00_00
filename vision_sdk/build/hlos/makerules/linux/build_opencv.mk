include env.mk

vision_sdk_opencv_linux:
ifeq ($(PROFILE),debug)
	$(MKDIR) -p $(OpenCV_SRC_PATH)/$(OpenCV_BUILD_PATH)
	$(call chdir, $(OpenCV_SRC_PATH)/$(OpenCV_BUILD_PATH))
	$(CMAKE) -DCMAKE_TOOLCHAIN_FILE=../platforms/linux/arm-gnueabi.toolchain_vsdk.cmake -DBUILD_DOCS:BOOL=OFF -DBUILD_PACKAGE:BOOL=OFF -DBUILD_PERF_TESTS:BOOL=OFF -DBUILD_SHARED_LIBS:BOOL=OFF -DBUILD_TESTS:BOOL=OFF -DBUILD_WITH_DEBUG_INFO:BOOL=ON -DBUILD_opencv_apps:BOOL=OFF -DCMAKE_BUILD_TYPE:STRING=Debug -DCMAKE_VERBOSE_MAKEFILE:BOOL=TRUE -DENABLE_NEON:BOOL=ON -DWITH_1394:BOOL=OFF -DWITH_CUFFT:BOOL=OFF -DWITH_EIGEN:BOOL=OFF -DWITH_FFMPEG:BOOL=OFF -DWITH_GIGEAPI:BOOL=OFF -DWITH_GSTREAMER:BOOL=OFF -DWITH_JASPER:BOOL=OFF -DWITH_JPEG:BOOL=OFF -DWITH_MATLAB:BOOL=OFF -DWITH_OPENCL:BOOL=ON WITH_OPENCLAMDBLAS:BOOL=OFF -DWITH_OPENCLAMDFFT:BOOL=OFF -DWITH_OPENEXR:BOOL=OFF -DWITH_PNG:BOOL=OFF -DWITH_PTHREADS_PF:BOOL=ON -DWITH_PVAPI:BOOL=OFF -DWITH_TIFF:BOOL=OFF -DWITH_WEBP:BOOL=OFF ../
else ifeq ($(PROFILE),release)
	$(MKDIR) -p $(OpenCV_SRC_PATH)/$(OpenCV_BUILD_PATH)
	$(call chdir, $(OpenCV_SRC_PATH)/$(OpenCV_BUILD_PATH))
	$(CMAKE) -DCMAKE_TOOLCHAIN_FILE=../platforms/linux/arm-gnueabi.toolchain_vsdk.cmake -DBUILD_DOCS:BOOL=OFF -DBUILD_PACKAGE:BOOL=OFF -DBUILD_PERF_TESTS:BOOL=OFF -DBUILD_SHARED_LIBS:BOOL=OFF -DBUILD_TESTS:BOOL=OFF -DBUILD_WITH_DEBUG_INFO:BOOL=OFF -DBUILD_opencv_apps:BOOL=OFF -DCMAKE_BUILD_TYPE:STRING=Release -DCMAKE_VERBOSE_MAKEFILE:BOOL=TRUE -DENABLE_NEON:BOOL=ON -DWITH_1394:BOOL=OFF -DWITH_CUFFT:BOOL=OFF -DWITH_EIGEN:BOOL=OFF -DWITH_FFMPEG:BOOL=OFF -DWITH_GIGEAPI:BOOL=OFF -DWITH_GSTREAMER:BOOL=OFF -DWITH_JASPER:BOOL=OFF -DWITH_JPEG:BOOL=OFF -DWITH_MATLAB:BOOL=OFF -DWITH_OPENCL:BOOL=ON WITH_OPENCLAMDBLAS:BOOL=OFF -DWITH_OPENCLAMDFFT:BOOL=OFF -DWITH_OPENEXR:BOOL=OFF -DWITH_PNG:BOOL=OFF -DWITH_PTHREADS_PF:BOOL=ON -DWITH_PVAPI:BOOL=OFF -DWITH_TIFF:BOOL=OFF -DWITH_WEBP:BOOL=OFF ../
endif
	$(MAKE) -s
	$(MAKE) install
	$(call chdir, $(vision_sdk_PATH))

_vision_sdk_opencx:
ifeq ($(BUILD_OS), Linux)
ifeq ($(PROFILE),debug)
	$(eval OpenCV_BUILD_PATH := build_linux_debug)
else ifeq ($(PROFILE),release)
	$(eval OpenCV_BUILD_PATH := build_linux_release)
endif
	export OpenCV_BUILD_PATH
ifeq ($(BUILD_OPENCV_SRC), yes)	
	$(MAKE) -fbuild_opencv.mk -C$(vision_sdk_PATH)/build/hlos/makerules/linux vision_sdk_opencv_linux PROFILE=$(PROFILE)
endif
	$(MAKE) -fMakefile -C$(vision_sdk_PATH)/build vision_sdk OpenCV_BUILD_PATH=$(OpenCV_BUILD_PATH)
endif

_vision_sdk_opencx_clean:
ifeq ($(BUILD_OS), Linux)
ifeq ($(PROFILE),debug)
	$(eval OpenCV_BUILD_PATH := build_linux_debug)
else ifeq ($(PROFILE),release)
	$(eval OpenCV_BUILD_PATH := build_linux_release)
endif
	$(RM) -r $(OpenCV_SRC_PATH)/$(OpenCV_BUILD_PATH)/*
endif

