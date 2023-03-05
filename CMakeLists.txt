#
# Created by Dynesshely on 2023.02.05.
# Changed by ChenPi11 on 2023.03.05.
#
cmake_minimum_required(VERSION 3.0)
project(CppEnhanced)
set(CMAKE_CXX_STANDARD 20)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include ${CMAKE_CURRENT_SOURCE_DIR}/public)
file(GLOB SOURCE_FILES "${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp")
add_library(CppEnhanced SHARED ${SOURCE_FILES})