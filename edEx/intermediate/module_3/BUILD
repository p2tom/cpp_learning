cc_library(
    name = "module_3_lib",
    srcs = [
        "person.cc",
        "student.cc",
    ],
    hdrs = [
        "person.h",
        "student.h",
    ],
)

cc_binary(
    name = "module_3",
    srcs = ["main.cc"],
    deps = [
        ":module_3_lib",
    ],    
)
