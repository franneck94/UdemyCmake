# Cross Compilation with Toolchain Files

## Install ARM Compiler on x86 64 Ubuntu

```shell
sudo apt update
sudo apt install libc6-armel-cross libc6-dev-armel-cross binutils-arm-linux-gnueabi libncurses5-dev build-essential bison flex libssl-dev bc

sudo apt install gcc-arm-linux-gnueabihf g++-arm-linux-gnueabihf
sudo apt install gcc-arm-linux-gnueabi g++-arm-linux-gnueabi
```

## Install MingW Cross Compiler on x86 64 Ubuntu

```shell
sudo apt-get install mingw-w64
```

## ARM 32 Cross

```shell
cmake -B build_arm32 -DCMAKE_TOOLCHAIN_FILE=Toolchains/arm32-cross-toolchain.cmake
cmake --build build_arm32 -j8
```

## ARM 32 Native

```shell
cmake -B build -DCMAKE_TOOLCHAIN_FILE=Toolchains/arm32-native-toolchain.cmake
cmake --build build -j8
```

## x86 64 MingW

```shell
cmake -B build_mingw -DCMAKE_TOOLCHAIN_FILE=Toolchains/x86-64-mingw-toolchain.cmake
cmake --build build_mingw -j8
```

## x86 64 Native

```shell
cmake -B build -DCMAKE_TOOLCHAIN_FILE=Toolchains/x86-64-native-toolchain.cmake
cmake --build build -j8
```
