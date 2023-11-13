cmake_minimum_required(VERSION 3.26)
project(game)

set(CMAKE_CXX_STANDARD 17)

add_executable(game main.cpp
        physics.cpp
        physics.hpp
        Utils.cpp
        Utils.hpp)
target_link_libraries(game
        raylib
        GL
        m
        pthread
        dl
        rt
        X11
)