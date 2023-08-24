cmake_minimum_required(VERSION 3.6)

project(CppEnhanced)

set(CMAKE_CXX_STANDARD 20)

file(GLOB SOURCE_FILES "${CMAKE_CURRENT_SOURCE_DIR}/source/*.cpp")

include_directories(
    ${CMAKE_CURRENT_SOURCE_DIR}/include
)

add_library(CppEnhanced SHARED ${SOURCE_FILES})

add_subdirectory(tests)
