cmake_minimum_required(VERSION 3.10)
project(2DG VERSION 1.0 LANGUAGES CXX)  # Set double languages so it wont got error when c files is included

# Set c++ version
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

include_directories(src)
include_directories(thirdparty/stb/include)

add_subdirectory(thirdparty/SFML)

add_executable(2DG
        src/vz/Game.cpp src/vz/Game.h
        src/vz/Core.h src/main.cpp src/vz/component/Component.h src/vz/component/Position.cpp src/vz/component/Position.h src/vz/component/Drawable.cpp src/vz/component/Drawable.h src/vz/SpriteSheet.cpp src/vz/SpriteSheet.h src/vz/Manager.cpp src/vz/Manager.h)

target_compile_definitions(2DG PRIVATE VZ_DEBUG)

target_precompile_headers(2DG PRIVATE src/vzpch.h)

target_link_libraries(2DG PRIVATE )