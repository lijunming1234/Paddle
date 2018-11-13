// Copyright (c) 2018 PaddlePaddle Authors. All Rights Reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#pragma once

#include <vector>
#include "paddle/fluid/framework/op_desc.h"
#include "paddle/fluid/imperative/engine.h"

namespace paddle {
namespace imperative {

class Tracer {
 public:
  Tracer() {}

  void Trace(framework::OpDesc* op_desc) {
    LOG(ERROR) << "tracing " << op_desc->Type();
  }

 private:
  std::vector<Runnable*> runnables_;
};

}  // namespace imperative
}  // namespace paddle
