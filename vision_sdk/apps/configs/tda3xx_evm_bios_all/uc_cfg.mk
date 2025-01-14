UC_fast_boot_iss_capture_isp_simcop_pd_display=yes
UC_iss_capture_isp_simcop_display=yes
UC_iss_monochrome_capt_isp_display=no
UC_iss_mult_capture_isp_2d_3d_sv_tda3x=yes
UC_iss_mult_capture_isp_dewarp_3dsv_tda3xx=yes
UC_iss_mult_capture_isp_dewarp_3dsv_rearview_tda3xx=yes
UC_iss_mult_capture_isp_dewarp_stereo_tda3xx=yes
UC_iss_mult_capture_isp_dewarp_stereoplus_tda3xx=yes
UC_iss_mult_capture_isp_simcop_stereo_tda3xx=yes
UC_iss_mult_capture_isp_stereo_autocalib_tda3xx=yes
UC_iss_mult_capture_isp_simcop_sv_tda3xx=yes
UC_srv_calibration=yes
UC_lvds_vip_multi_cam_view_tda3xx=yes
UC_lvds_vip_sv_tda3xx=yes
#SRV to work, Diabling NW UC from default config
UC_network_rx_tx=no
UC_tfdtprx_display=no
UC_saveDisFrame=yes
UC_vip_single_cam_analytics2=yes
UC_vip_single_cam_dense_optical_flow=yes
UC_vip_single_cam_edge_detection=yes
UC_vip_single_cam_frame_copy=yes
UC_vip_single_cam_frame_copy_safety=yes
UC_vip_single_cam_lane_detection=yes
UC_vip_single_cam_object_detection2=yes
UC_vip_single_cam_sfm=yes
UC_vip_single_cam_sparse_optical_flow=yes
UC_vip_single_cam_subframe_copy=yes
UC_vip_single_cam_tlr=yes
UC_vip_single_cam_view=yes
UC_vip_single_cam_view_dsswb=yes
UC_vip_single_cam_display_metadata=yes
UC_csi2_cal_multi_cam_view=yes
UC_csi2_cal_sv_standalone=yes
UC_rear_view_panorama_tda3xx=no
ifeq ($(OPENVX_INCLUDE),yes)
UC_vip_single_cam_openvx=yes
endif

# TI Deep Learning Use Case
UC_tidl=yes

UC_null_src_display=yes
