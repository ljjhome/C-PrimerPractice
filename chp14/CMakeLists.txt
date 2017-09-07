cmake_minimum_required(VERSION 3.0)
project(chp14)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
INCLUDE_DIRECTORIES("./")
add_executable(ex_14_2 ./ex_14_2.cpp)
