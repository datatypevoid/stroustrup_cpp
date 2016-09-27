cmake_minimum_required(VERSION 3.6)
project(currency_switch_conversion)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(currency_switch_conversion ${SOURCE_FILES})