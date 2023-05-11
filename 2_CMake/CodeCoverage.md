# Computing the code coverage

## Tools

Tools only for linux and mac.

Linux:

```bash
sudo apt-get install gcovr
sudo apt-get install lcov
```

MacOS:

```bash
brew install gcovr
brew install lcov
```

Cmake file: *CodeCoverage.cmake* uploaded in this section.

## Commands

```bash
cd /UdemyCppPro/3_CMake/
cmake . -Bbuild -DENABLE_COVERAGE=1 -DCMAKE_BUILD_TYPE=Coverage
cmake --build build -j4
cd build
make CppTemplate_coverage
```
