cmake_minimum_required(VERSION 3.10)

project(CharacterGame)

set(CMAKE_CXX_STANDARD 11)

include_directories(src)

file(GLOB_RECURSE SOURCES
    src/*.cpp
)

add_executable(CharacterGame ${SOURCES})