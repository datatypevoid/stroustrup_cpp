cmake_minimum_required(VERSION 3.6)
project(square_root)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(square_root ${SOURCE_FILES})