cmake_minimum_required(VERSION 3.0)
project(chp5)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
INCLUDE_DIRECTORIES("./")
add_executable(ex_5_5 ./ex_5_5.cpp)
add_executable(ex_5_9 ./ex_5_9.cpp)
