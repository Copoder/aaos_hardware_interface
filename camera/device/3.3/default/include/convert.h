/*
 * Copyright (C) 2017 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef HARDWARE_INTERFACES_CAMERA_DEVICE_V3_3_DEFAULT_INCLUDE_CONVERT_H_

#define HARDWARE_INTERFACES_CAMERA_DEVICE_V3_3_DEFAULT_INCLUDE_CONVERT_H_

#include <set>


#include <android/hardware/graphics/common/1.0/types.h>
#include <android/hardware/camera/device/3.3/types.h>
#include "hardware/camera3.h"
#include "../../3.2/default/include/convert.h"

namespace android {
namespace hardware {
namespace camera {
namespace device {
namespace V3_3 {
namespace implementation {

using ::android::hardware::camera::device::V3_2::implementation::Camera3Stream;

void convertToHidl(const Camera3Stream* src, HalStream* dst);

void convertToHidl(const camera3_stream_configuration_t& src, HalStreamConfiguration* dst);

}  // namespace implementation
}  // namespace V3_3
}  // namespace device
}  // namespace camera
}  // namespace hardware
}  // namespace android

#endif  // HARDWARE_INTERFACES_CAMERA_DEVICE_V3_3_DEFAULT_INCLUDE_CONVERT_H_
