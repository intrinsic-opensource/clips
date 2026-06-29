"""CLIPS Rules Engine and Programming Language."""

load(
    "@rules_cc//cc:defs.bzl",
    "cc_binary",
    "cc_library",
)
load("@rules_license//rules:license.bzl", "license")

package(
    default_applicable_licenses = [":license"],
)

license(
    name = "license",
    package_name = "clips",
    license_kinds = [
        "@rules_license//licenses/spdx:MIT-0",
    ],
    license_text = "LICENSE",
    package_url = "https://sourceforge.net/projects/clipsrules/files/CLIPS/6.31/",
)

cc_library(
    name = "clips",
    srcs = glob(
        ["src/*.c"],
        exclude = ["src/main.c"],
    ),
    hdrs = glob(["src/*.h"]) + ["clips.h"],
    copts = [
        "-Wno-array-parameter",
        "-Wno-unused-result",
        "-Wno-unused-but-set-variable",
    ],
    visibility = ["//visibility:public"],
)

# The binary provides an interactive CLIPS shell that can be used for quick experimentation.
cc_binary(
    name = "clips-bin",
    srcs = ["src/main.c"],
    visibility = ["//visibility:public"],
    deps = [":clips"],
)
