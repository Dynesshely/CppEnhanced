cmake_minimum_required(VERSION 3.24)
project(CppEnhanced)

set(CMAKE_CXX_STANDARD 23)

add_library(CppEnhanced SHARED library.cpp include/classes/datetime.cpp include/classes/datetime.h)
