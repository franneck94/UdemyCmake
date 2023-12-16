# Cross Compilation with Toolchain Files

## ARM 32 Cross

```shell
cmake -B build -DCMAKE_TOOLCHAIN_FILE=Toolchains/arm32-cross-toolchain.cmake
cmake --build build -j8
```

## ARM 32 Native

```shell
cmake -B build -DCMAKE_TOOLCHAIN_FILE=Toolchains/arm32-native-toolchain.cmake
cmake --build build -j8
```

## ARM 64 Cross

```shell
cmake -B build -DCMAKE_TOOLCHAIN_FILE=Toolchains/arm64-cross-toolchain.cmake
cmake --build build -j8
```

## ARM 64 Native

```shell
cmake -B build -DCMAKE_TOOLCHAIN_FILE=Toolchains/arm64-native-toolchain.cmake
cmake --build build -j8
```

## x86 64 MingW

```shell
cmake -B build -DCMAKE_TOOLCHAIN_FILE=Toolchains/x86-64-mingw-toolchain.cmake
cmake --build build -j8
```

## x86 64 Native

```shell
cmake -B build -DCMAKE_TOOLCHAIN_FILE=Toolchains/x86-64-native-toolchain.cmake
cmake --build build -j8
```
