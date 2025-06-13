// Copyright 2024 The Bazel Authors. All rights reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//    http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include <gtest/gtest.h>

#include "asm_answer.h"
#include "dynamic_answer.h"
#include "static_answer.h"

TEST(Static, ProperlyLinked) {
  EXPECT_EQ(static_answer(), 42);
}

TEST(Dynamic, ProperlyLinked) {
  EXPECT_EQ(dynamic_answer(), 24);
}

TEST(Asm, ProperlyLinked) {
  EXPECT_EQ(asm_answer, 0xFE4B67C4);
}
