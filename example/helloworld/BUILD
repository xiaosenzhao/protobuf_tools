cc_library(
    name = "hello-lib",
    srcs = ["hello_lib.cpp"],
    hdrs = ["hello_lib.h"],
)

cc_binary(
    name = "hello-world",
    srcs = ["hello_world.cpp"],
    deps = [":hello-lib"],
)
