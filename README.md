## 编译
```bash
bazel build :hello-world --macos_sdk_version=14.2
```
查看macos sdk版本
```bash
❯ xcode-select -p
/Library/Developer/CommandLineTools
❯ ls $(xcode-select -p)/SDKs
MacOSX.sdk     MacOSX12.3.sdk MacOSX12.sdk   MacOSX13.3.sdk MacOSX13.sdk   MacOSX14.2.sdk MacOSX14.sdk
```