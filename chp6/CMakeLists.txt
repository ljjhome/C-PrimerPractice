cmake_minimum_required(VERSION 3.0)
project(chp6)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
INCLUDE_DIRECTORIES("./")
add_executable(ex_6_5 ./ex_6_5.cpp)
