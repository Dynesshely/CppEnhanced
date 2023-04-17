# About CppEnhanced

Your powerful tool for C++ development.

Whole project use CMake, you can easily import CppEnhanced through CMake.  
In future, you will be able to import CppEnhanced from vcpkg and other package manager.

# Build

## Get source codes

```shell
git clone git@github.com:Dynesshely/CppEnhanced.git
```

## On Linux, Unix, Cygwin, MacOS or other unix-like OS

Prepare CMake, C++ compiler and other tool chain first.

```shell
# Way 1 (Recommended)
./build.sh

# Way 2 (Manually)
mkdir build
cd build
cmake ..
make
cd ..
```

## On Windows (build with MSVC)

Make sure CMake and MSVC environment installed.

```shell
# You need execute commands in `Developer PowerShell for VS`
# So that path of `MSBuild.exe` can be located
# You can also query path of `MSBuild.exe` by following command

# Way 1 (Recommended)
./build.ps1

# Way 2 (Manually)
mkdir build
cd build
cmake ..
msbuild ./ALL_BUILD.vcxproj
cd ..
```

You can also query path of `MSBuild.exe` by following command:
```cmd
reg.exe query "HKLM\SOFTWARE\Microsoft\MSBuild\ToolsVersions\4.0" /v MSBuildToolsPath
```

# Components

- DateTime  
  DateTime is a C++ time format and operate class

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



