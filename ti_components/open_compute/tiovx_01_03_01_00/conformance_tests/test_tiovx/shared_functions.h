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
#include <VX/vxu.h>

CT_Image tivx_box3x3_create_reference_image(CT_Image src, vx_border_t border);
void tivx_sobel3x3_create_reference_image(CT_Image src, vx_border_t border, CT_Image *p_dst_x, CT_Image *p_dst_y);

void tivx_gaussian_pyramid_fill_reference(CT_Image input, vx_pyramid pyr, vx_size levels, vx_float32 scale, vx_border_t border);

void tivx_filter_create_reference_image(vx_enum function, CT_Image src, vx_coordinates2d_t* origin, vx_size cols, vx_size rows, vx_uint8* mask, CT_Image* pdst, vx_border_t* border);
