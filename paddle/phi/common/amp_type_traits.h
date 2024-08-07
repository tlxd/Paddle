/* Copyright (c) 2022 PaddlePaddle Authors. All Rights Reserved.

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License. */

#pragma once

#include "paddle/phi/common/bfloat16.h"
#include "paddle/phi/common/float16.h"
#include "paddle/phi/common/float8_e4m3fn.h"
#include "paddle/phi/common/float8_e5m2.h"

namespace phi {
namespace dtype {

template <typename T>
class MPTypeTrait {
 public:
  using Type = T;
};

template <>
class MPTypeTrait<phi::dtype::float16> {
 public:
  using Type = float;
};

template <>
class MPTypeTrait<phi::dtype::bfloat16> {
 public:
  using Type = float;
};

template <>
class MPTypeTrait<phi::dtype::float8_e4m3fn> {
 public:
  using Type = float;
};

template <>
class MPTypeTrait<phi::dtype::float8_e5m2> {
 public:
  using Type = float;
};

}  // namespace dtype
}  // namespace phi
