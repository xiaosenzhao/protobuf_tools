load("@bazel_tools//tools/build_defs/repo:http.bzl", "http_archive", "http_file") # used to pull in grpc
load("@bazel_tools//tools/build_defs/repo:git.bzl", "git_repository")
git_repository(
    name = "rules_proto",
    commit = "f7a30f6f80006b591fa7c437fe5a951eb10bcbcf", # Latest commit working
    remote = "https://github.com/bazelbuild/rules_proto.git",
)
load("@rules_proto//proto:repositories.bzl", "rules_proto_dependencies", "rules_proto_toolchains")
rules_proto_dependencies()
rules_proto_toolchains()

load("@com_google_protobuf//:protobuf_deps.bzl", "protobuf_deps")

protobuf_deps()
