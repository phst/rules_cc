# Copyright 2023 The Bazel Authors. All rights reserved.
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#    http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

load("//cc:cc_binary.bzl", "cc_binary")

licenses(["notice"])

cc_binary(
    name = "main",
    srcs = ["main.cc"],
    local_defines = select(
        {
            "//cc/compiler:clang": ["COMPILER=clang"],
            "//cc/compiler:clang-cl": ["COMPILER=clang-cl"],
            "//cc/compiler:gcc": ["COMPILER=gcc"],
            "//cc/compiler:mingw-gcc": ["COMPILER=mingw-gcc"],
            "//cc/compiler:msvc-cl": ["COMPILER=msvc-cl"],
            "//conditions:default": [],
        },
        no_match_error = "Compiler not detected by Bazel",
    ),
)
