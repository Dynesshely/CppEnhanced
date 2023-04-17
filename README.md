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

building ...

# License

We are using AGPLv3.0 now.



