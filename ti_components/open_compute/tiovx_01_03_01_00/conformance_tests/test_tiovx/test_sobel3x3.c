/*

 * Copyright (c) 2012-2017 The Khronos Group Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */




#include "test_tiovx.h"
#include <VX/vx.h>
#include "shared_functions.h"


TESTCASE(tivxSobel3x3, CT_VXContext, ct_setup_vx_context, 0)

static void referenceConvertDepth(CT_Image src, CT_Image dst, int shift, vx_enum policy)
{
    uint32_t i, j;

    ASSERT(src && dst);
    ASSERT(src->width == dst->width);
    ASSERT(src->height == dst->height);
    ASSERT((src->format == VX_DF_IMAGE_U8 && dst->format == VX_DF_IMAGE_S16) || (src->format == VX_DF_IMAGE_S16 && dst->format == VX_DF_IMAGE_U8));
    ASSERT(policy == VX_CONVERT_POLICY_WRAP || policy == VX_CONVERT_POLICY_SATURATE);

    if (shift > 16) shift = 16;
    if (shift < -16) shift = -16;

    if (src->format == VX_DF_IMAGE_U8)
    {
        if (shift < 0)
        {
            for (i = 0; i < dst->height; ++i)
                for (j = 0; j < dst->width; ++j)
                    dst->data.s16[i * dst->stride + j] = ((unsigned)src->data.y[i * src->stride + j]) >> (-shift);
        }
        else
        {
            for (i = 0; i < dst->height; ++i)
                for (j = 0; j < dst->width; ++j)
                    dst->data.s16[i * dst->stride + j] = ((unsigned)src->data.y[i * src->stride + j]) << shift;
        }
    }
    else if (policy == VX_CONVERT_POLICY_WRAP)
    {
        // down-conversion + wrap
        if (shift < 0)
        {
            for (i = 0; i < dst->height; ++i)
                for (j = 0; j < dst->width; ++j)
                    dst->data.y[i * dst->stride + j] = src->data.s16[i * src->stride + j] << (-shift);
        }
        else
        {
            for (i = 0; i < dst->height; ++i)
                for (j = 0; j < dst->width; ++j)
                    dst->data.y[i * dst->stride + j] = src->data.s16[i * src->stride + j] >> shift;
        }
    }
    else if (policy == VX_CONVERT_POLICY_SATURATE)
    {
        // down-conversion + saturate
        if (shift < 0)
        {
            for (i = 0; i < dst->height; ++i)
                for (j = 0; j < dst->width; ++j)
                {
                    int32_t v = src->data.s16[i * src->stride + j] << (-shift);
                    if (v > 255) v = 255;
                    if (v < 0) v = 0;
                    dst->data.y[i * dst->stride + j] = v;
                }
        }
        else
        {
            for (i = 0; i < dst->height; ++i)
                for (j = 0; j < dst->width; ++j)
                {
                    int32_t v = src->data.s16[i * src->stride + j] >> shift;
                    if (v > 255) v = 255;
                    if (v < 0) v = 0;
                    dst->data.y[i * dst->stride + j] = v;
                }
        }
    }
}

// Generate input to cover these requirements:
// There should be a image with randomly generated pixel intensities.
static CT_Image sobel3x3_generate_random(const char* fileName, int width, int height)
{
    CT_Image image;

    ASSERT_NO_FAILURE_(return 0,
            image = ct_allocate_ct_image_random(width, height, VX_DF_IMAGE_U8, &CT()->seed_, 0, 256));

    return image;
}

static int16_t sobel_x_get(int32_t *values)
{
    int32_t res = (-values[0])     + (values[2]) +
                  (-values[3] * 2) + (values[5] * 2) +
                  (-values[6])     + (values[8]);
    return (int16_t)res;
}

static int16_t sobel_y_get(int32_t *values)
{
    int32_t res = (-values[0])     + (values[6]) +
                  (-values[1] * 2) + (values[7] * 2) +
                  (-values[2])     + (values[8]);
    return (int16_t)res;
}

static void sobel3x3_calculate(CT_Image src, uint32_t x, uint32_t y, int16_t *sobel_x, int16_t *sobel_y)
{
    int32_t values[9] = {
        (int32_t)*CT_IMAGE_DATA_PTR_8U(src, x - 1, y - 1),
        (int32_t)*CT_IMAGE_DATA_PTR_8U(src, x + 0, y - 1),
        (int32_t)*CT_IMAGE_DATA_PTR_8U(src, x + 1, y - 1),
        (int32_t)*CT_IMAGE_DATA_PTR_8U(src, x - 1, y - 0),
        (int32_t)*CT_IMAGE_DATA_PTR_8U(src, x + 0, y - 0),
        (int32_t)*CT_IMAGE_DATA_PTR_8U(src, x + 1, y - 0),
        (int32_t)*CT_IMAGE_DATA_PTR_8U(src, x - 1, y + 1),
        (int32_t)*CT_IMAGE_DATA_PTR_8U(src, x + 0, y + 1),
        (int32_t)*CT_IMAGE_DATA_PTR_8U(src, x + 1, y + 1)
    };
    *sobel_x = sobel_x_get(values);
    *sobel_y = sobel_y_get(values);
}

static void sobel3x3_calculate_replicate(CT_Image src, uint32_t x_, uint32_t y_, int16_t *sobel_x, int16_t *sobel_y)
{
    int32_t x = (int)x_;
    int32_t y = (int)y_;
    int32_t values[9] = {
        (int32_t)CT_IMAGE_DATA_REPLICATE_8U(src, x - 1, y - 1),
        (int32_t)CT_IMAGE_DATA_REPLICATE_8U(src, x + 0, y - 1),
        (int32_t)CT_IMAGE_DATA_REPLICATE_8U(src, x + 1, y - 1),
        (int32_t)CT_IMAGE_DATA_REPLICATE_8U(src, x - 1, y - 0),
        (int32_t)CT_IMAGE_DATA_REPLICATE_8U(src, x + 0, y - 0),
        (int32_t)CT_IMAGE_DATA_REPLICATE_8U(src, x + 1, y - 0),
        (int32_t)CT_IMAGE_DATA_REPLICATE_8U(src, x - 1, y + 1),
        (int32_t)CT_IMAGE_DATA_REPLICATE_8U(src, x + 0, y + 1),
        (int32_t)CT_IMAGE_DATA_REPLICATE_8U(src, x + 1, y + 1)
    };
    *sobel_x = sobel_x_get(values);
    *sobel_y = sobel_y_get(values);
}

static void sobel3x3_calculate_constant(CT_Image src, uint32_t x_, uint32_t y_, vx_uint32 constant_value, int16_t *sobel_x, int16_t *sobel_y)
{
    int32_t x = (int)x_;
    int32_t y = (int)y_;
    int32_t values[9] = {
        (int32_t)CT_IMAGE_DATA_CONSTANT_8U(src, x - 1, y - 1, constant_value),
        (int32_t)CT_IMAGE_DATA_CONSTANT_8U(src, x + 0, y - 1, constant_value),
        (int32_t)CT_IMAGE_DATA_CONSTANT_8U(src, x + 1, y - 1, constant_value),
        (int32_t)CT_IMAGE_DATA_CONSTANT_8U(src, x - 1, y - 0, constant_value),
        (int32_t)CT_IMAGE_DATA_CONSTANT_8U(src, x + 0, y - 0, constant_value),
        (int32_t)CT_IMAGE_DATA_CONSTANT_8U(src, x + 1, y - 0, constant_value),
        (int32_t)CT_IMAGE_DATA_CONSTANT_8U(src, x - 1, y + 1, constant_value),
        (int32_t)CT_IMAGE_DATA_CONSTANT_8U(src, x + 0, y + 1, constant_value),
        (int32_t)CT_IMAGE_DATA_CONSTANT_8U(src, x + 1, y + 1, constant_value)
    };
    *sobel_x = sobel_x_get(values);
    *sobel_y = sobel_y_get(values);
}


void tivx_sobel3x3_create_reference_image(CT_Image src, vx_border_t border, CT_Image *p_dst_x, CT_Image *p_dst_y)
{
    CT_Image dst_x = NULL, dst_y = NULL;

    CT_ASSERT(src->format == VX_DF_IMAGE_U8);

    dst_x = ct_allocate_image(src->width, src->height, VX_DF_IMAGE_S16);
    dst_y = ct_allocate_image(src->width, src->height, VX_DF_IMAGE_S16);

    if (border.mode == VX_BORDER_UNDEFINED)
    {
        CT_FILL_IMAGE_16S(return, dst_x,
                if (x >= 1 && y >= 1 && x < src->width - 1 && y < src->height - 1)
                {
                    int16_t* dst_y_data = CT_IMAGE_DATA_PTR_16S(dst_y, x, y);
                    sobel3x3_calculate(src, x, y, dst_data, dst_y_data);
                });
    }
    else if (border.mode == VX_BORDER_REPLICATE)
    {
        CT_FILL_IMAGE_16S(return, dst_x,
                {
                    int16_t* dst_y_data = CT_IMAGE_DATA_PTR_16S(dst_y, x, y);
                    sobel3x3_calculate_replicate(src, x, y, dst_data, dst_y_data);
                });
    }
    else if (border.mode == VX_BORDER_CONSTANT)
    {
        vx_uint32 constant_value = border.constant_value.U32;
        CT_FILL_IMAGE_16S(return, dst_x,
                {
                    int16_t* dst_y_data = CT_IMAGE_DATA_PTR_16S(dst_y, x, y);
                    sobel3x3_calculate_constant(src, x, y, constant_value, dst_data, dst_y_data);
                });
    }
    else
    {
        ASSERT_(return, 0);
    }

    *p_dst_x = dst_x;
    *p_dst_y = dst_y;
}


static void sobel3x3_check(CT_Image src, CT_Image dst_x, CT_Image dst_y, vx_border_t border)
{
    CT_Image dst_x_ref = NULL, dst_y_ref = NULL;

    ASSERT(src && dst_x && dst_y);

    ASSERT_NO_FAILURE(tivx_sobel3x3_create_reference_image(src, border, &dst_x_ref, &dst_y_ref));

    ASSERT_NO_FAILURE(
        if (border.mode == VX_BORDER_UNDEFINED)
        {
            ct_adjust_roi(dst_x,  1, 1, 1, 1);
            ct_adjust_roi(dst_x_ref, 1, 1, 1, 1);
            ct_adjust_roi(dst_y,  1, 1, 1, 1);
            ct_adjust_roi(dst_y_ref, 1, 1, 1, 1);
        }
    );

    EXPECT_EQ_CTIMAGE(dst_x_ref, dst_x);
    EXPECT_EQ_CTIMAGE(dst_y_ref, dst_y);
}

static void sobel3x3_sequential_check(CT_Image src, CT_Image virt1, CT_Image virt2, CT_Image dst1_x, CT_Image dst1_y, CT_Image dst2_x, CT_Image dst2_y, vx_border_t border)
{
    CT_Image dst0_x_ref = NULL, dst0_y_ref = NULL, dst1_x_ref = NULL, dst1_y_ref = NULL, dst2_x_ref = NULL, dst2_y_ref = NULL;

    ASSERT(src && virt1 && virt2 && dst1_x && dst1_y && dst2_x && dst2_y);

    ASSERT_NO_FAILURE(tivx_sobel3x3_create_reference_image(src, border, &dst0_x_ref, &dst0_y_ref));
    ASSERT_NO_FAILURE(referenceConvertDepth(dst0_x_ref, virt1, 0, VX_CONVERT_POLICY_SATURATE));
    ASSERT_NO_FAILURE(referenceConvertDepth(dst0_y_ref, virt2, 0, VX_CONVERT_POLICY_SATURATE));
    ASSERT_NO_FAILURE(tivx_sobel3x3_create_reference_image(virt1, border, &dst1_x_ref, &dst1_y_ref));
    ASSERT_NO_FAILURE(tivx_sobel3x3_create_reference_image(virt2, border, &dst2_x_ref, &dst2_y_ref));

    ASSERT_NO_FAILURE(
        if (border.mode == VX_BORDER_UNDEFINED)
        {
            ct_adjust_roi(dst1_x,  2, 2, 2, 2);
            ct_adjust_roi(dst1_x_ref, 2, 2, 2, 2);
            ct_adjust_roi(dst1_y,  2, 2, 2, 2);
            ct_adjust_roi(dst1_y_ref, 2, 2, 2, 2);
            ct_adjust_roi(dst2_x,  2, 2, 2, 2);
            ct_adjust_roi(dst2_x_ref, 2, 2, 2, 2);
            ct_adjust_roi(dst2_y,  2, 2, 2, 2);
            ct_adjust_roi(dst2_y_ref, 2, 2, 2, 2);
        }
    );

    EXPECT_EQ_CTIMAGE(dst1_x_ref, dst1_x);
    EXPECT_EQ_CTIMAGE(dst1_y_ref, dst1_y);
    EXPECT_EQ_CTIMAGE(dst2_x_ref, dst2_x);
    EXPECT_EQ_CTIMAGE(dst2_y_ref, dst2_y);
}

static void sobel3x3_check_y(CT_Image src, CT_Image dst_y, vx_border_t border)
{
    CT_Image dst_x_ref = NULL, dst_y_ref = NULL;

    ASSERT(src && dst_y);

    ASSERT_NO_FAILURE(tivx_sobel3x3_create_reference_image(src, border, &dst_x_ref, &dst_y_ref));

    ASSERT_NO_FAILURE(
        if (border.mode == VX_BORDER_UNDEFINED)
        {
            ct_adjust_roi(dst_y,  1, 1, 1, 1);
            ct_adjust_roi(dst_y_ref, 1, 1, 1, 1);
        }
    );

    EXPECT_EQ_CTIMAGE(dst_y_ref, dst_y);
}

static void sobel3x3_check_x(CT_Image src, CT_Image dst_x, vx_border_t border)
{
    CT_Image dst_x_ref = NULL, dst_y_ref = NULL;

    ASSERT(src && dst_x);

    ASSERT_NO_FAILURE(tivx_sobel3x3_create_reference_image(src, border, &dst_x_ref, &dst_y_ref));

    ASSERT_NO_FAILURE(
        if (border.mode == VX_BORDER_UNDEFINED)
        {
            ct_adjust_roi(dst_x,  1, 1, 1, 1);
            ct_adjust_roi(dst_x_ref, 1, 1, 1, 1);
        }
    );

    EXPECT_EQ_CTIMAGE(dst_x_ref, dst_x);
}

typedef struct {
    const char* testName;
    CT_Image (*generator)(const char* fileName, int width, int height);
    const char* fileName;
    vx_border_t border;
    int width, height;
} Filter_Arg;

#define SOBEL_PARAMETERS \
    CT_GENERATE_PARAMETERS("randomInput", ADD_VX_BORDERS_REQUIRE_UNDEFINED_ONLY, ADD_SIZE_18x18, ARG, sobel3x3_generate_random, NULL), \
    CT_GENERATE_PARAMETERS("randomInput", ADD_VX_BORDERS_REQUIRE_UNDEFINED_ONLY, ADD_SIZE_644x258, ARG, sobel3x3_generate_random, NULL), \
    CT_GENERATE_PARAMETERS("randomInput", ADD_VX_BORDERS_REQUIRE_UNDEFINED_ONLY, ADD_SIZE_1600x1200, ARG, sobel3x3_generate_random, NULL)

TEST_WITH_ARG(tivxSobel3x3, testGraphProcessing, Filter_Arg,
    SOBEL_PARAMETERS
)
{
    vx_context context = context_->vx_context_;
    vx_image src_image = 0, dst1_x_image = 0, dst1_y_image = 0;
    vx_image dst2_x_image = 0, dst2_y_image = 0, virt1, virt2, virt3, virt4;
    vx_graph graph = 0;
    vx_node node1 = 0, node2 = 0, node3 = 0, node4 = 0, node5 = 0;
    vx_perf_t perf_node1, perf_node2, perf_node3, perf_node4, perf_node5, perf_graph;
    vx_scalar shift_convertdepth = 0;
    vx_int32 sh = 0;

    CT_Image src = NULL, dst1_x = NULL, dst1_y = NULL, dst2_x = NULL, dst2_y = NULL, virt_ctimage1 = NULL, virt_ctimage2 = NULL;
    vx_border_t border = arg_->border;

    ASSERT_NO_FAILURE(src = arg_->generator(arg_->fileName, arg_->width, arg_->height));

    ASSERT_VX_OBJECT(src_image = ct_image_to_vx_image(src, context), VX_TYPE_IMAGE);

    dst1_x_image = ct_create_similar_image_with_format(src_image, VX_DF_IMAGE_S16);
    ASSERT_VX_OBJECT(dst1_x_image, VX_TYPE_IMAGE);

    dst2_x_image = ct_create_similar_image_with_format(src_image, VX_DF_IMAGE_S16);
    ASSERT_VX_OBJECT(dst2_x_image, VX_TYPE_IMAGE);

    dst1_y_image = ct_create_similar_image_with_format(src_image, VX_DF_IMAGE_S16);
    ASSERT_VX_OBJECT(dst1_y_image, VX_TYPE_IMAGE);

    dst2_y_image = ct_create_similar_image_with_format(src_image, VX_DF_IMAGE_S16);
    ASSERT_VX_OBJECT(dst2_y_image, VX_TYPE_IMAGE);

    graph = vxCreateGraph(context);
    ASSERT_VX_OBJECT(graph, VX_TYPE_GRAPH);

    ASSERT_VX_OBJECT(virt1   = vxCreateVirtualImage(graph, 0, 0, VX_DF_IMAGE_S16), VX_TYPE_IMAGE);
    ASSERT_VX_OBJECT(virt2   = vxCreateVirtualImage(graph, 0, 0, VX_DF_IMAGE_S16), VX_TYPE_IMAGE);
    ASSERT_VX_OBJECT(virt3   = vxCreateVirtualImage(graph, 0, 0, VX_DF_IMAGE_U8), VX_TYPE_IMAGE);
    ASSERT_VX_OBJECT(virt4   = vxCreateVirtualImage(graph, 0, 0, VX_DF_IMAGE_U8), VX_TYPE_IMAGE);

    ASSERT_VX_OBJECT(shift_convertdepth = vxCreateScalar(context, VX_TYPE_INT32, &sh), VX_TYPE_SCALAR);

    node1 = vxSobel3x3Node(graph, src_image, virt1, virt2);
    ASSERT_VX_OBJECT(node1, VX_TYPE_NODE);

    node2 = vxConvertDepthNode(graph, virt1, virt3, VX_CONVERT_POLICY_SATURATE, shift_convertdepth);
    ASSERT_VX_OBJECT(node2, VX_TYPE_NODE);

    node3 = vxConvertDepthNode(graph, virt2, virt4, VX_CONVERT_POLICY_SATURATE, shift_convertdepth);
    ASSERT_VX_OBJECT(node3, VX_TYPE_NODE);

    node4 = vxSobel3x3Node(graph, virt3, dst1_x_image, dst1_y_image);
    ASSERT_VX_OBJECT(node4, VX_TYPE_NODE);

    node5 = vxSobel3x3Node(graph, virt4, dst2_x_image, dst2_y_image);
    ASSERT_VX_OBJECT(node5, VX_TYPE_NODE);

    VX_CALL(vxSetNodeAttribute(node1, VX_NODE_BORDER, &border, sizeof(border)));
    VX_CALL(vxSetNodeAttribute(node4, VX_NODE_BORDER, &border, sizeof(border)));
    VX_CALL(vxSetNodeAttribute(node5, VX_NODE_BORDER, &border, sizeof(border)));

    VX_CALL(vxVerifyGraph(graph));
    VX_CALL(vxProcessGraph(graph));

    vxQueryNode(node1, VX_NODE_PERFORMANCE, &perf_node1, sizeof(perf_node1));
    vxQueryNode(node2, VX_NODE_PERFORMANCE, &perf_node2, sizeof(perf_node2));
    vxQueryNode(node3, VX_NODE_PERFORMANCE, &perf_node3, sizeof(perf_node3));
    vxQueryNode(node4, VX_NODE_PERFORMANCE, &perf_node4, sizeof(perf_node4));
    vxQueryNode(node5, VX_NODE_PERFORMANCE, &perf_node5, sizeof(perf_node5));
    vxQueryGraph(graph, VX_GRAPH_PERFORMANCE, &perf_graph, sizeof(perf_graph));

    ASSERT_NO_FAILURE(dst1_x = ct_image_from_vx_image(dst1_x_image));
    ASSERT_NO_FAILURE(dst1_y = ct_image_from_vx_image(dst1_y_image));

    ASSERT_NO_FAILURE(dst2_x = ct_image_from_vx_image(dst2_x_image));
    ASSERT_NO_FAILURE(dst2_y = ct_image_from_vx_image(dst2_y_image));

    virt_ctimage1 = ct_allocate_image(arg_->width, arg_->height, VX_DF_IMAGE_U8);
    virt_ctimage2 = ct_allocate_image(arg_->width, arg_->height, VX_DF_IMAGE_U8);

    ASSERT_NO_FAILURE(sobel3x3_sequential_check(src, virt_ctimage1, virt_ctimage2, dst1_x, dst1_y, dst2_x, dst2_y, border));

    VX_CALL(vxReleaseNode(&node1));
    VX_CALL(vxReleaseNode(&node2));
    VX_CALL(vxReleaseNode(&node3));
    VX_CALL(vxReleaseNode(&node4));
    VX_CALL(vxReleaseNode(&node5));
    VX_CALL(vxReleaseGraph(&graph));

    ASSERT(node1 == 0);
    ASSERT(node2 == 0);
    ASSERT(node3 == 0);
    ASSERT(node4 == 0);
    ASSERT(node5 == 0);
    ASSERT(graph == 0);

    VX_CALL(vxReleaseImage(&virt1));
    VX_CALL(vxReleaseImage(&virt2));
    VX_CALL(vxReleaseImage(&virt3));
    VX_CALL(vxReleaseImage(&virt4));
    VX_CALL(vxReleaseImage(&dst1_x_image));
    VX_CALL(vxReleaseImage(&dst1_y_image));
    VX_CALL(vxReleaseImage(&dst2_x_image));
    VX_CALL(vxReleaseImage(&dst2_y_image));
    VX_CALL(vxReleaseImage(&src_image));
    VX_CALL(vxReleaseScalar(&shift_convertdepth));

    ASSERT(dst1_x_image == 0);
    ASSERT(dst1_y_image == 0);
    ASSERT(dst2_x_image == 0);
    ASSERT(dst2_y_image == 0);
    ASSERT(src_image == 0);

    printPerformance(perf_node1, arg_->width*arg_->height, "N1");
    printPerformance(perf_node2, arg_->width*arg_->height, "N2");
    printPerformance(perf_node3, arg_->width*arg_->height, "N3");
    printPerformance(perf_node4, arg_->width*arg_->height, "N4");
    printPerformance(perf_node5, arg_->width*arg_->height, "N5");
    printPerformance(perf_graph, arg_->width*arg_->height, "G1");
}


TEST_WITH_ARG(tivxSobel3x3, testValidRegion, Filter_Arg,
    SOBEL_PARAMETERS
)
{
    vx_context context = context_->vx_context_;
    vx_image src_image = 0, dst1_x_image = 0, dst1_y_image = 0;
    vx_image dst2_x_image = 0, dst2_y_image = 0, virt1, virt2, virt3, virt4;
    vx_graph graph = 0;
    vx_node node1 = 0, node2 = 0, node3 = 0, node4 = 0, node5 = 0;
    vx_perf_t perf_node1, perf_node2, perf_node3, perf_node4, perf_node5, perf_graph;
    vx_scalar shift_convertdepth = 0;
    vx_int32 sh = 0;
    vx_rectangle_t rect;
    vx_bool valid_rect;

    CT_Image src = NULL, dst1_x = NULL, dst1_y = NULL, dst2_x = NULL, dst2_y = NULL, virt_ctimage1 = NULL, virt_ctimage2 = NULL;
    vx_border_t border = arg_->border;

    ASSERT_NO_FAILURE(src = arg_->generator(arg_->fileName, arg_->width, arg_->height));

    ASSERT_VX_OBJECT(src_image = ct_image_to_vx_image(src, context), VX_TYPE_IMAGE);

    dst1_x_image = ct_create_similar_image_with_format(src_image, VX_DF_IMAGE_S16);
    ASSERT_VX_OBJECT(dst1_x_image, VX_TYPE_IMAGE);

    dst2_x_image = ct_create_similar_image_with_format(src_image, VX_DF_IMAGE_S16);
    ASSERT_VX_OBJECT(dst2_x_image, VX_TYPE_IMAGE);

    dst1_y_image = ct_create_similar_image_with_format(src_image, VX_DF_IMAGE_S16);
    ASSERT_VX_OBJECT(dst1_y_image, VX_TYPE_IMAGE);

    dst2_y_image = ct_create_similar_image_with_format(src_image, VX_DF_IMAGE_S16);
    ASSERT_VX_OBJECT(dst2_y_image, VX_TYPE_IMAGE);

    graph = vxCreateGraph(context);
    ASSERT_VX_OBJECT(graph, VX_TYPE_GRAPH);

    ASSERT_VX_OBJECT(virt1   = vxCreateVirtualImage(graph, 0, 0, VX_DF_IMAGE_S16), VX_TYPE_IMAGE);
    ASSERT_VX_OBJECT(virt2   = vxCreateVirtualImage(graph, 0, 0, VX_DF_IMAGE_S16), VX_TYPE_IMAGE);
    ASSERT_VX_OBJECT(virt3   = vxCreateVirtualImage(graph, 0, 0, VX_DF_IMAGE_U8), VX_TYPE_IMAGE);
    ASSERT_VX_OBJECT(virt4   = vxCreateVirtualImage(graph, 0, 0, VX_DF_IMAGE_U8), VX_TYPE_IMAGE);

    ASSERT_VX_OBJECT(shift_convertdepth = vxCreateScalar(context, VX_TYPE_INT32, &sh), VX_TYPE_SCALAR);

    node1 = vxSobel3x3Node(graph, src_image, virt1, virt2);
    ASSERT_VX_OBJECT(node1, VX_TYPE_NODE);

    node2 = vxConvertDepthNode(graph, virt1, virt3, VX_CONVERT_POLICY_SATURATE, shift_convertdepth);
    ASSERT_VX_OBJECT(node2, VX_TYPE_NODE);

    node3 = vxConvertDepthNode(graph, virt2, virt4, VX_CONVERT_POLICY_SATURATE, shift_convertdepth);
    ASSERT_VX_OBJECT(node3, VX_TYPE_NODE);

    node4 = vxSobel3x3Node(graph, virt3, dst1_x_image, dst1_y_image);
    ASSERT_VX_OBJECT(node4, VX_TYPE_NODE);

    node5 = vxSobel3x3Node(graph, virt4, dst2_x_image, dst2_y_image);
    ASSERT_VX_OBJECT(node5, VX_TYPE_NODE);

    VX_CALL(vxSetNodeAttribute(node1, VX_NODE_BORDER, &border, sizeof(border)));
    VX_CALL(vxSetNodeAttribute(node4, VX_NODE_BORDER, &border, sizeof(border)));
    VX_CALL(vxSetNodeAttribute(node5, VX_NODE_BORDER, &border, sizeof(border)));

    VX_CALL(vxVerifyGraph(graph));
    VX_CALL(vxProcessGraph(graph));

    vxQueryNode(node1, VX_NODE_VALID_RECT_RESET, &valid_rect, sizeof(valid_rect));
    ASSERT_EQ_INT(valid_rect, vx_false_e);

    vxQueryNode(node1, VX_NODE_PERFORMANCE, &perf_node1, sizeof(perf_node1));
    vxQueryNode(node2, VX_NODE_PERFORMANCE, &perf_node2, sizeof(perf_node2));
    vxQueryNode(node3, VX_NODE_PERFORMANCE, &perf_node3, sizeof(perf_node3));
    vxQueryNode(node4, VX_NODE_PERFORMANCE, &perf_node4, sizeof(perf_node4));
    vxQueryNode(node5, VX_NODE_PERFORMANCE, &perf_node5, sizeof(perf_node5));
    vxQueryGraph(graph, VX_GRAPH_PERFORMANCE, &perf_graph, sizeof(perf_graph));

    vxGetValidRegionImage(dst1_x_image, &rect);

    ASSERT_EQ_INT((rect.end_x - rect.start_x), (arg_->width - 4));
    ASSERT_EQ_INT((rect.end_y - rect.start_y), (arg_->height - 4));

    vxGetValidRegionImage(dst1_y_image, &rect);

    ASSERT_EQ_INT((rect.end_x - rect.start_x), (arg_->width - 4));
    ASSERT_EQ_INT((rect.end_y - rect.start_y), (arg_->height - 4));

    vxGetValidRegionImage(dst2_x_image, &rect);

    ASSERT_EQ_INT((rect.end_x - rect.start_x), (arg_->width - 4));
    ASSERT_EQ_INT((rect.end_y - rect.start_y), (arg_->height - 4));

    vxGetValidRegionImage(dst2_y_image, &rect);

    ASSERT_EQ_INT((rect.end_x - rect.start_x), (arg_->width - 4));
    ASSERT_EQ_INT((rect.end_y - rect.start_y), (arg_->height - 4));

    ASSERT_NO_FAILURE(dst1_x = ct_image_from_vx_image(dst1_x_image));
    ASSERT_NO_FAILURE(dst1_y = ct_image_from_vx_image(dst1_y_image));

    ASSERT_NO_FAILURE(dst2_x = ct_image_from_vx_image(dst2_x_image));
    ASSERT_NO_FAILURE(dst2_y = ct_image_from_vx_image(dst2_y_image));

    virt_ctimage1 = ct_allocate_image(arg_->width, arg_->height, VX_DF_IMAGE_U8);
    virt_ctimage2 = ct_allocate_image(arg_->width, arg_->height, VX_DF_IMAGE_U8);

    ASSERT_NO_FAILURE(sobel3x3_sequential_check(src, virt_ctimage1, virt_ctimage2, dst1_x, dst1_y, dst2_x, dst2_y, border));

    VX_CALL(vxReleaseNode(&node1));
    VX_CALL(vxReleaseNode(&node2));
    VX_CALL(vxReleaseNode(&node3));
    VX_CALL(vxReleaseNode(&node4));
    VX_CALL(vxReleaseNode(&node5));
    VX_CALL(vxReleaseGraph(&graph));

    ASSERT(node1 == 0);
    ASSERT(node2 == 0);
    ASSERT(node3 == 0);
    ASSERT(node4 == 0);
    ASSERT(node5 == 0);
    ASSERT(graph == 0);

    VX_CALL(vxReleaseImage(&virt1));
    VX_CALL(vxReleaseImage(&virt2));
    VX_CALL(vxReleaseImage(&virt3));
    VX_CALL(vxReleaseImage(&virt4));
    VX_CALL(vxReleaseImage(&dst1_x_image));
    VX_CALL(vxReleaseImage(&dst1_y_image));
    VX_CALL(vxReleaseImage(&dst2_x_image));
    VX_CALL(vxReleaseImage(&dst2_y_image));
    VX_CALL(vxReleaseImage(&src_image));
    VX_CALL(vxReleaseScalar(&shift_convertdepth));

    ASSERT(dst1_x_image == 0);
    ASSERT(dst1_y_image == 0);
    ASSERT(dst2_x_image == 0);
    ASSERT(dst2_y_image == 0);
    ASSERT(src_image == 0);

    printPerformance(perf_node1, arg_->width*arg_->height, "N1");
    printPerformance(perf_node2, arg_->width*arg_->height, "N2");
    printPerformance(perf_node3, arg_->width*arg_->height, "N3");
    printPerformance(perf_node4, arg_->width*arg_->height, "N4");
    printPerformance(perf_node5, arg_->width*arg_->height, "N5");
    printPerformance(perf_graph, arg_->width*arg_->height, "G1");
}

TEST_WITH_ARG(tivxSobel3x3, testOptionalParametersX, Filter_Arg,
    SOBEL_PARAMETERS
)
{
    vx_context context = context_->vx_context_;
    vx_image src_image = 0, dst_x_image = 0;
    vx_graph graph = 0;
    vx_node node = 0;
    vx_perf_t perf_node1, perf_graph;

    CT_Image src = NULL, dst_x = NULL;
    vx_border_t border = arg_->border;

    ASSERT_NO_FAILURE(src = arg_->generator(arg_->fileName, arg_->width, arg_->height));

    ASSERT_VX_OBJECT(src_image = ct_image_to_vx_image(src, context), VX_TYPE_IMAGE);

    dst_x_image = ct_create_similar_image_with_format(src_image, VX_DF_IMAGE_S16);
    ASSERT_VX_OBJECT(dst_x_image, VX_TYPE_IMAGE);

    graph = vxCreateGraph(context);
    ASSERT_VX_OBJECT(graph, VX_TYPE_GRAPH);

    node = vxSobel3x3Node(graph, src_image, dst_x_image, NULL);
    ASSERT_VX_OBJECT(node, VX_TYPE_NODE);

    VX_CALL(vxSetNodeAttribute(node, VX_NODE_BORDER, &border, sizeof(border)));

    VX_CALL(vxVerifyGraph(graph));
    VX_CALL(vxProcessGraph(graph));

    vxQueryNode(node, VX_NODE_PERFORMANCE, &perf_node1, sizeof(perf_node1));
    vxQueryGraph(graph, VX_GRAPH_PERFORMANCE, &perf_graph, sizeof(perf_graph));

    ASSERT_NO_FAILURE(dst_x = ct_image_from_vx_image(dst_x_image));

    ASSERT_NO_FAILURE(sobel3x3_check_x(src, dst_x, border));

    VX_CALL(vxReleaseNode(&node));
    VX_CALL(vxReleaseGraph(&graph));

    ASSERT(node == 0);
    ASSERT(graph == 0);

    VX_CALL(vxReleaseImage(&dst_x_image));
    VX_CALL(vxReleaseImage(&src_image));

    ASSERT(dst_x_image == 0);
    ASSERT(src_image == 0);

    printPerformance(perf_node1, arg_->width*arg_->height, "N1");
    printPerformance(perf_graph, arg_->width*arg_->height, "G1");
}

TEST_WITH_ARG(tivxSobel3x3, testOptionalParametersY, Filter_Arg,
    SOBEL_PARAMETERS
)
{
    vx_context context = context_->vx_context_;
    vx_image src_image = 0, dst_y_image = 0;
    vx_graph graph = 0;
    vx_node node = 0;
    vx_perf_t perf_node1, perf_graph;

    CT_Image src = NULL, dst_y = NULL;
    vx_border_t border = arg_->border;

    ASSERT_NO_FAILURE(src = arg_->generator(arg_->fileName, arg_->width, arg_->height));

    ASSERT_VX_OBJECT(src_image = ct_image_to_vx_image(src, context), VX_TYPE_IMAGE);

    dst_y_image = ct_create_similar_image_with_format(src_image, VX_DF_IMAGE_S16);
    ASSERT_VX_OBJECT(dst_y_image, VX_TYPE_IMAGE);

    graph = vxCreateGraph(context);
    ASSERT_VX_OBJECT(graph, VX_TYPE_GRAPH);

    node = vxSobel3x3Node(graph, src_image, NULL, dst_y_image);
    ASSERT_VX_OBJECT(node, VX_TYPE_NODE);

    VX_CALL(vxSetNodeAttribute(node, VX_NODE_BORDER, &border, sizeof(border)));

    VX_CALL(vxVerifyGraph(graph));
    VX_CALL(vxProcessGraph(graph));

    vxQueryNode(node, VX_NODE_PERFORMANCE, &perf_node1, sizeof(perf_node1));
    vxQueryGraph(graph, VX_GRAPH_PERFORMANCE, &perf_graph, sizeof(perf_graph));

    ASSERT_NO_FAILURE(dst_y = ct_image_from_vx_image(dst_y_image));

    ASSERT_NO_FAILURE(sobel3x3_check_y(src, dst_y, border));

    VX_CALL(vxReleaseNode(&node));
    VX_CALL(vxReleaseGraph(&graph));

    ASSERT(node == 0);
    ASSERT(graph == 0);

    VX_CALL(vxReleaseImage(&dst_y_image));
    VX_CALL(vxReleaseImage(&src_image));

    ASSERT(dst_y_image == 0);
    ASSERT(src_image == 0);

    printPerformance(perf_node1, arg_->width*arg_->height, "N1");
    printPerformance(perf_graph, arg_->width*arg_->height, "G1");
}

#define NEGATIVE_SOBEL_PARAMETERS \
    CT_GENERATE_PARAMETERS("randomInput", ADD_VX_BORDERS_REQUIRE_REPLICATE_ONLY, ADD_SIZE_18x18, ARG, sobel3x3_generate_random, NULL), \
    CT_GENERATE_PARAMETERS("randomInput", ADD_VX_BORDERS_REQUIRE_CONSTANT_ONLY, ADD_SIZE_18x18, ARG, sobel3x3_generate_random, NULL)

TEST_WITH_ARG(tivxSobel3x3, negativeTestBorderMode, Filter_Arg,
    NEGATIVE_SOBEL_PARAMETERS
)
{
    vx_context context = context_->vx_context_;
    vx_image src_image = 0, dst_y_image = 0;
    vx_graph graph = 0;
    vx_node node = 0;

    CT_Image src = NULL, dst_y = NULL;
    vx_border_t border = arg_->border;

    ASSERT_NO_FAILURE(src = arg_->generator(arg_->fileName, arg_->width, arg_->height));

    ASSERT_VX_OBJECT(src_image = ct_image_to_vx_image(src, context), VX_TYPE_IMAGE);

    dst_y_image = ct_create_similar_image_with_format(src_image, VX_DF_IMAGE_S16);
    ASSERT_VX_OBJECT(dst_y_image, VX_TYPE_IMAGE);

    graph = vxCreateGraph(context);
    ASSERT_VX_OBJECT(graph, VX_TYPE_GRAPH);

    node = vxSobel3x3Node(graph, src_image, NULL, dst_y_image);
    ASSERT_VX_OBJECT(node, VX_TYPE_NODE);

    VX_CALL(vxSetNodeAttribute(node, VX_NODE_BORDER, &border, sizeof(border)));

    ASSERT_EQ_VX_STATUS(vxVerifyGraph(graph), VX_ERROR_NOT_SUPPORTED);

    VX_CALL(vxReleaseNode(&node));
    VX_CALL(vxReleaseGraph(&graph));

    ASSERT(node == 0);
    ASSERT(graph == 0);

    VX_CALL(vxReleaseImage(&dst_y_image));
    VX_CALL(vxReleaseImage(&src_image));

    ASSERT(dst_y_image == 0);
    ASSERT(src_image == 0);
}

TESTCASE_TESTS(tivxSobel3x3, testGraphProcessing, testValidRegion, testOptionalParametersX, testOptionalParametersY, negativeTestBorderMode)
