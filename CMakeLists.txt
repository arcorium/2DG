cmake_minimum_required(VERSION 3.10)
project(2DG VERSION 1.0 LANGUAGES CXX)  # Set double languages so it wont got error when c files is included

# Set c++ version
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_subdirectory(thirdparty/glfw)

include_directories(src)
include_directories(thirdparty/stb/include)
include_directories(thirdparty/glad/include)
include_directories(thirdparty/glfw/include)
include_directories(thirdparty/bgfx/include)
include_directories(thirdparty/bx/include)
include_directories(thirdparty/bimg/include)

add_executable(2DG
        src/vz/main.cpp
        thirdparty/glad/glad.cpp
        src/vz/Game.cpp src/vz/Game.h src/vz/Window.cpp src/vz/Window.h src/vz/Vector.h src/vz/Core.h)

target_compile_definitions(2DG PRIVATE VZ_DEBUG)

target_precompile_headers(2DG PRIVATE src/vzpch.h)

target_link_libraries(2DG PRIVATE glfw
        "thirdparty/bgfx/libbgfxRelease.a" "thirdparty/bimg/libbimgRelease.a" "thirdparty/bx/libbxRelease.a")