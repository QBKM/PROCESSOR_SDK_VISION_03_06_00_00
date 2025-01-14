/*
*
* Copyright (c) 2017 Texas Instruments Incorporated
*
* All rights reserved not granted herein.
*
* Limited License.
*
* Texas Instruments Incorporated grants a world-wide, royalty-free, non-exclusive
* license under copyrights and patents it now or hereafter owns or controls to make,
* have made, use, import, offer to sell and sell ("Utilize") this software subject to the
* terms herein.  With respect to the foregoing patent license, such license is granted
* solely to the extent that any such patent is necessary to Utilize the software alone.
* The patent license shall not apply to any combinations which include this software,
* other than combinations with devices manufactured by or for TI ("TI Devices").
* No hardware patent is licensed hereunder.
*
* Redistributions must preserve existing copyright notices and reproduce this license
* (including the above copyright notice and the disclaimer and (if applicable) source
* code license limitations below) in the documentation and/or other materials provided
* with the distribution
*
* Redistribution and use in binary form, without modification, are permitted provided
* that the following conditions are met:
*
* *       No reverse engineering, decompilation, or disassembly of this software is
* permitted with respect to any software provided in binary form.
*
* *       any redistribution and use are licensed by TI for use only with TI Devices.
*
* *       Nothing shall obligate TI to provide you with source code for the software
* licensed and provided to you in object code.
*
* If software source code is provided to you, modification and redistribution of the
* source code are permitted provided that the following conditions are met:
*
* *       any redistribution and use of the source code, including any resulting derivative
* works, are licensed by TI for use only with TI Devices.
*
* *       any redistribution and use of any object code compiled from the source code
* and any resulting derivative works, are licensed by TI for use only with TI Devices.
*
* Neither the name of Texas Instruments Incorporated nor the names of its suppliers
*
* may be used to endorse or promote products derived from this software without
* specific prior written permission.
*
* DISCLAIMER.
*
* THIS SOFTWARE IS PROVIDED BY TI AND TI'S LICENSORS "AS IS" AND ANY EXPRESS
* OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
* OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
* IN NO EVENT SHALL TI AND TI'S LICENSORS BE LIABLE FOR ANY DIRECT, INDIRECT,
* INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
* BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
* DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY
* OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE
* OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED
* OF THE POSSIBILITY OF SUCH DAMAGE.
*
*/



#include <TI/tivx.h>
#include <VX/vx.h>
#include <tivx_openvx_core_kernels.h>
#include <tivx_target_kernels_priv.h>
#include <tivx_kernel_minmaxloc.h>
#include <TI/tivx_target_kernel.h>
#include <ti/vxlib/vxlib.h>
#include <tivx_kernels_target_utils.h>
#include <tivx_bam_kernel_wrapper.h>

typedef struct
{
    tivx_bam_graph_handle graph_handle;
    uint32_t min_cnt;
    uint32_t max_cnt;
    uint32_t *pMin_cnt;
    uint32_t *pMax_cnt;
    uint32_t min_cap;
    uint32_t max_cap;

} tivxMinMaxLocParams;

static tivx_target_kernel vx_minmaxloc_target_kernel = NULL;

static vx_status VX_CALLBACK tivxKernelMinMaxLocProcess(
    tivx_target_kernel_instance kernel, tivx_obj_desc_t *obj_desc[],
    uint16_t num_params, void *priv_arg);

static vx_status VX_CALLBACK tivxKernelMinMaxLocCreate(
    tivx_target_kernel_instance kernel, tivx_obj_desc_t *obj_desc[],
    uint16_t num_params, void *priv_arg);

static vx_status VX_CALLBACK tivxKernelMinMaxLocDelete(
    tivx_target_kernel_instance kernel, tivx_obj_desc_t *obj_desc[],
    uint16_t num_params, void *priv_arg);

static vx_status VX_CALLBACK tivxKernelMinMaxLocControl(
    tivx_target_kernel_instance kernel, tivx_obj_desc_t *obj_desc[],
    uint16_t num_params, void *priv_arg);

static vx_status VX_CALLBACK tivxKernelMinMaxLocProcess(
    tivx_target_kernel_instance kernel, tivx_obj_desc_t *obj_desc[],
    uint16_t num_params, void *priv_arg)
{
    vx_status status = VX_SUCCESS;
    tivxMinMaxLocParams *prms = NULL;
    uint32_t size;

    if (num_params != TIVX_KERNEL_MML_MAX_PARAMS)
    {
        status = VX_FAILURE;
    }
    else
    {
        if ((NULL == obj_desc[TIVX_KERNEL_MML_IN_IMG_IDX]) ||
            (NULL == obj_desc[TIVX_KERNEL_MML_OUT_MIN_SC_IDX]) ||
            (NULL == obj_desc[TIVX_KERNEL_MML_OUT_MAX_SC_IDX]))
        {
            status = VX_ERROR_NO_MEMORY;
        }
    }

    if (VX_SUCCESS == status)
    {
        status = tivxGetTargetKernelInstanceContext(kernel,
            (void **)&prms, &size);

        if ((VX_SUCCESS != status) || (NULL == prms) ||
            (sizeof(tivxMinMaxLocParams) != size))
        {
            status = VX_FAILURE;
        }
    }

    if (VX_SUCCESS == status)
    {
        tivx_obj_desc_image_t *src;
        uint8_t *src_addr;
        tivx_obj_desc_scalar_t *sc[4U];
        tivx_obj_desc_array_t *arr[2U];
        uint32_t min_val, max_val;
        void *img_ptrs[1];
        void *src_target_ptr;
        void *arr0_target_ptr = NULL;
        void *arr1_target_ptr = NULL;

        src = (tivx_obj_desc_image_t *)obj_desc[TIVX_KERNEL_MML_IN_IMG_IDX];
        sc[0U] = (tivx_obj_desc_scalar_t*)obj_desc[TIVX_KERNEL_MML_OUT_MIN_SC_IDX];
        sc[1U] = (tivx_obj_desc_scalar_t*)obj_desc[TIVX_KERNEL_MML_OUT_MAX_SC_IDX];
        sc[2U] = (tivx_obj_desc_scalar_t*)obj_desc[TIVX_KERNEL_MML_OUT_MIN_SC_C_IDX];
        sc[3U] = (tivx_obj_desc_scalar_t*)obj_desc[TIVX_KERNEL_MML_OUT_MAX_SC_C_IDX];
        arr[0U] = (tivx_obj_desc_array_t *)obj_desc[TIVX_KERNEL_MML_OUT_MIN_ARR_IDX];
        arr[1U] = (tivx_obj_desc_array_t *)obj_desc[TIVX_KERNEL_MML_OUT_MAX_ARR_IDX];

        src_target_ptr = tivxMemShared2TargetPtr(
            src->mem_ptr[0].shared_ptr, src->mem_ptr[0].mem_heap_region);

        tivxSetPointerLocation(src, &src_target_ptr, &src_addr);

        img_ptrs[0] = src_addr;
        tivxBamUpdatePointers(prms->graph_handle, 1U, 0U, img_ptrs);

        if (NULL != arr[0u])
        {
            arr0_target_ptr = tivxMemShared2TargetPtr(
                arr[0U]->mem_ptr.shared_ptr, arr[0U]->mem_ptr.mem_heap_region);
            tivxMemBufferMap(arr0_target_ptr, arr[0U]->mem_size,
                VX_MEMORY_TYPE_HOST, VX_WRITE_ONLY);

            tivxBamControlNode(prms->graph_handle, 0,
                               VXLIB_MINMAXLOC_I8U_CMD_SET_MIN_LOC_PTR,
                               arr0_target_ptr);
        }

        if (NULL != arr[1u])
        {
            arr1_target_ptr = tivxMemShared2TargetPtr(
                arr[1U]->mem_ptr.shared_ptr, arr[1U]->mem_ptr.mem_heap_region);
            tivxMemBufferMap(arr1_target_ptr, arr[1U]->mem_size,
                VX_MEMORY_TYPE_HOST, VX_WRITE_ONLY);

            tivxBamControlNode(prms->graph_handle, 0,
                               VXLIB_MINMAXLOC_I8U_CMD_SET_MAX_LOC_PTR,
                               arr1_target_ptr);
        }

        status  = tivxBamProcessGraph(prms->graph_handle);

        tivxBamControlNode(prms->graph_handle, 0,
                           VXLIB_MINMAXLOC_I8U_CMD_GET_MIN_VAL,
                           &min_val);

        tivxBamControlNode(prms->graph_handle, 0,
                           VXLIB_MINMAXLOC_I8U_CMD_GET_MAX_VAL,
                           &max_val);

        if (VX_DF_IMAGE_U8 == src->format)
        {
            sc[0U]->data.u08 = min_val;
            sc[1U]->data.u08 = max_val;
        }
        else
        {
            sc[0U]->data.s16 = min_val;
            sc[1U]->data.s16 = max_val;
        }

        if (NULL != sc[2U])
        {
            sc[2U]->data.u32 = prms->min_cnt;
        }
        if (NULL != sc[3U])
        {
            sc[3U]->data.u32 = prms->max_cnt;
        }
        if (NULL != arr[0u])
        {
            if (prms->min_cnt > prms->min_cap)
            {
                arr[0u]->num_items = prms->min_cap;
            }
            else
            {
                arr[0u]->num_items = prms->min_cnt;
            }
        }
        if (NULL != arr[1u])
        {
            if (prms->max_cnt > prms->max_cap)
            {
                arr[1u]->num_items = prms->max_cap;
            }
            else
            {
                arr[1u]->num_items = prms->max_cnt;
            }
        }

        if (NULL != arr[0u])
        {
            tivxMemBufferUnmap(arr0_target_ptr, arr[0U]->mem_size,
                VX_MEMORY_TYPE_HOST, VX_WRITE_ONLY);
        }
        if (NULL != arr[1u])
        {
            tivxMemBufferUnmap(arr1_target_ptr, arr[1U]->mem_size,
                VX_MEMORY_TYPE_HOST, VX_WRITE_ONLY);
        }
    }

    return (status);
}

static vx_status VX_CALLBACK tivxKernelMinMaxLocCreate(
    tivx_target_kernel_instance kernel, tivx_obj_desc_t *obj_desc[],
    uint16_t num_params, void *priv_arg)
{
    vx_status status = VX_SUCCESS;
    tivxMinMaxLocParams *prms = NULL;

    if (num_params != TIVX_KERNEL_MML_MAX_PARAMS)
    {
        status = VX_FAILURE;
    }
    else
    {
        if ((NULL == obj_desc[TIVX_KERNEL_MML_IN_IMG_IDX]) ||
            (NULL == obj_desc[TIVX_KERNEL_MML_OUT_MIN_SC_IDX]) ||
            (NULL == obj_desc[TIVX_KERNEL_MML_OUT_MAX_SC_IDX]))
        {
            status = VX_ERROR_NO_MEMORY;
        }
    }

    if (VX_SUCCESS == status)
    {
        tivx_obj_desc_image_t *src;
        tivx_obj_desc_scalar_t *sc[4U];
        tivx_obj_desc_array_t *arr[2U];
        uint32_t min_cap = 0, max_cap = 0;

        src = (tivx_obj_desc_image_t *)obj_desc[TIVX_KERNEL_MML_IN_IMG_IDX];
        sc[2U] = (tivx_obj_desc_scalar_t*)obj_desc[TIVX_KERNEL_MML_OUT_MIN_SC_C_IDX];
        sc[3U] = (tivx_obj_desc_scalar_t*)obj_desc[TIVX_KERNEL_MML_OUT_MAX_SC_C_IDX];
        arr[0U] = (tivx_obj_desc_array_t *)obj_desc[TIVX_KERNEL_MML_OUT_MIN_ARR_IDX];
        arr[1U] = (tivx_obj_desc_array_t *)obj_desc[TIVX_KERNEL_MML_OUT_MAX_ARR_IDX];

        prms = tivxMemAlloc(sizeof(tivxMinMaxLocParams), TIVX_MEM_EXTERNAL);

        if (NULL != prms)
        {
            tivx_bam_kernel_details_t kernel_details;
            BAM_VXLIB_minMaxLoc_i8u_params kernel_params;
            VXLIB_bufParams2D_t vxlib_src;
            VXLIB_bufParams2D_t *buf_params[1];

            memset(prms, 0, sizeof(tivxMinMaxLocParams));

            tivxInitBufParams(src, &vxlib_src);

            if (NULL != arr[0u])
            {
                min_cap = arr[0U]->mem_size / arr[0u]->item_size;
            }

            if (NULL != arr[1u])
            {
                max_cap = arr[1U]->mem_size / arr[1u]->item_size;
            }

            /* Fill in the frame level sizes of buffers here. If the port
             * is optionally disabled, put NULL */
            buf_params[0] = &vxlib_src;

            kernel_params.minLocCapacity  = min_cap;
            kernel_params.maxLocCapacity  = max_cap;
            prms->min_cap = min_cap;
            prms->max_cap = max_cap;

            kernel_details.compute_kernel_params = (void*)&kernel_params;

            prms->pMin_cnt = NULL;
            prms->pMax_cnt = NULL;

            if ((NULL != sc[2u]) || (min_cap > 0))
            {
                prms->pMin_cnt = &prms->min_cnt;
            }

            if ((NULL != sc[2u]) || (min_cap > 0))
            {
                prms->pMax_cnt = &prms->max_cnt;
            }

            if (VX_DF_IMAGE_U8 == src->format)
            {
                BAM_VXLIB_minMaxLoc_i8u_getKernelInfo( &kernel_params,
                                                       &kernel_details.kernel_info);

                status = tivxBamCreateHandleSingleNode(BAM_KERNELID_VXLIB_MINMAXLOC_I8U,
                                                       buf_params, &kernel_details,
                                                       &prms->graph_handle);
            }
            else
            {
                BAM_VXLIB_minMaxLoc_i16s_getKernelInfo( (BAM_VXLIB_minMaxLoc_i16s_params*)&kernel_params,
                                                        &kernel_details.kernel_info);

                status = tivxBamCreateHandleSingleNode(BAM_KERNELID_VXLIB_MINMAXLOC_I16S,
                                                       buf_params, &kernel_details,
                                                       &prms->graph_handle);
            }

            if ((VX_SUCCESS == status) && (NULL != prms->graph_handle))
            {
                tivxBamControlNode(prms->graph_handle, 0,
                                   VXLIB_MINMAXLOC_I8U_CMD_SET_MIN_CNT_PTR,
                                   prms->pMin_cnt);

                tivxBamControlNode(prms->graph_handle, 0,
                                   VXLIB_MINMAXLOC_I8U_CMD_SET_MAX_CNT_PTR,
                                   prms->pMax_cnt);
            }

        }
        else
        {
            status = VX_ERROR_NO_MEMORY;
        }

        if (VX_SUCCESS == status)
        {
            tivxSetTargetKernelInstanceContext(kernel, prms,
                sizeof(tivxMinMaxLocParams));
        }
        else
        {
            if (NULL != prms)
            {
                tivxMemFree(prms, sizeof(tivxMinMaxLocParams), TIVX_MEM_EXTERNAL);
            }
        }
    }

    return status;
}

static vx_status VX_CALLBACK tivxKernelMinMaxLocDelete(
    tivx_target_kernel_instance kernel, tivx_obj_desc_t *obj_desc[],
    uint16_t num_params, void *priv_arg)
{
    vx_status status = VX_SUCCESS;
    uint32_t size;
    tivxMinMaxLocParams *prms = NULL;

    if (num_params != TIVX_KERNEL_MML_MAX_PARAMS)
    {
        status = VX_FAILURE;
    }
    else
    {
        if ((NULL == obj_desc[TIVX_KERNEL_MML_IN_IMG_IDX]) ||
            (NULL == obj_desc[TIVX_KERNEL_MML_OUT_MIN_SC_IDX]) ||
            (NULL == obj_desc[TIVX_KERNEL_MML_OUT_MAX_SC_IDX]))
        {
            status = VX_ERROR_NO_MEMORY;
        }
    }

    if (VX_SUCCESS == status)
    {
        status = tivxGetTargetKernelInstanceContext(kernel,
            (void **)&prms, &size);

        if ((VX_SUCCESS == status) && (NULL != prms) &&
            (sizeof(tivxMinMaxLocParams) == size))
        {
            tivxBamDestroyHandle(prms->graph_handle);
            tivxMemFree(prms, sizeof(tivxMinMaxLocParams), TIVX_MEM_EXTERNAL);
        }
    }

    return (status);
}

static vx_status VX_CALLBACK tivxKernelMinMaxLocControl(
    tivx_target_kernel_instance kernel, tivx_obj_desc_t *obj_desc[],
    uint16_t num_params, void *priv_arg)
{
    return (VX_SUCCESS);
}

void tivxAddTargetKernelBamMinMaxLoc(void)
{
    char target_name[TIVX_TARGET_MAX_NAME];
    vx_enum self_cpu;

    self_cpu = tivxGetSelfCpuId();

    if ((self_cpu == TIVX_CPU_ID_DSP1) || (self_cpu == TIVX_CPU_ID_DSP2))
    {
        if (self_cpu == TIVX_CPU_ID_DSP1)
        {
            strncpy(target_name, TIVX_TARGET_DSP1,
                TIVX_TARGET_MAX_NAME);
        }
        else
        {
            strncpy(target_name, TIVX_TARGET_DSP2,
                TIVX_TARGET_MAX_NAME);
        }

        vx_minmaxloc_target_kernel = tivxAddTargetKernel(
            VX_KERNEL_MINMAXLOC,
            target_name,
            tivxKernelMinMaxLocProcess,
            tivxKernelMinMaxLocCreate,
            tivxKernelMinMaxLocDelete,
            tivxKernelMinMaxLocControl,
            NULL);
    }
}


void tivxRemoveTargetKernelBamMinMaxLoc(void)
{
    tivxRemoveTargetKernel(vx_minmaxloc_target_kernel);
}
