cmake_minimum_required(VERSION 3.24)
project(CppEnhanced)

set(CMAKE_CXX_STANDARD 23)

file(GLOB INCLUDE_FILES "${CMAKE_CURRENT_SOURCE_DIR}/include/**/*.h")
file(GLOB SOURCE_FILES "${CMAKE_CURRENT_SOURCE_DIR}/source/**/*.cpp")

add_library(
    CppEnhanced
    SHARED
    library.cpp
    ${INCLUDE_FILES}
    ${SOURCE_FILES}
)


