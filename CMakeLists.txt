#
# Created by Dynesshely on 2023.02.05.
# Changed by ChenPi11 on 2023.03.05.
# Changed by Dynesshely on 2023.04.17
#

cmake_minimum_required(VERSION 3.0)

project(CppEnhanced)

set(CMAKE_CXX_STANDARD 20)

file(GLOB SOURCE_FILES "${CMAKE_CURRENT_SOURCE_DIR}/source/*.cpp")

include_directories(
    ${CMAKE_CURRENT_SOURCE_DIR}/include
    ${CMAKE_CURRENT_SOURCE_DIR}/public
)

add_library(CppEnhanced SHARED ${SOURCE_FILES})

add_subdirectory(tests)
