cmake_minimum_required(VERSION 3.21)
project(2DG VERSION 1.0)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

include_directories(src)
include_directories(thirdparty/stb/include)

add_executable(2DG
        src/vz/main.cpp
        )

target_precompile_headers(2DG PRIVATE src/vzpch.h)