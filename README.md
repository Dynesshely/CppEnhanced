# About

Your powerful tool for C++ development.

Whole project use CMake, you can easily import CppEnhanced through CMake.  
In future, you will be able to import CppEnhanced from vcpkg and other package manager.

# Build

## Dependencies

+ CMake ( Version > 3.6 )
+ C/C++ build toolchains
  - (MSVC is required on Windows platform)

## Command

Origin way:

```shell
mkdir build
cd build
cmake ..
cmake --build . --config=Release
```

or use script,

```shell
# on gnu/linux or macos
./build.sh

# or on windows os
./build.ps1
```

# Components

- DateTime  
  DateTime is a C++ time format and operate class (Deported from dotnet core source code)

# Usage

All components supports chaining methods style.

Take `DateTime` class for example:

```cpp
auto date = CppEnhanced::DateTime()
    .SetYear(2023)
    .SetMonth(1)
    .SetDay(4)
    ;
printf("%s\n", date.ToString(1).c_str());
// Output: 2023.1.4
```

# License

We are using AGPLv3.0 now.

# More

- [In Wiki] [Add `Developer PowerShell for VS` profile to VSCode terminals](https://github.com/Dynesshely/CppEnhanced/wiki/Add-%60Developer-PowerShell-for-VS%60-info-your-VSCode)
