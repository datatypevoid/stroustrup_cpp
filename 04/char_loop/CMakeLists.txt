cmake_minimum_required(VERSION 3.6)
project(char_loop)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(char_loop ${SOURCE_FILES})