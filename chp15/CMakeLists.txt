cmake_minimum_required(VERSION 3.0)
project(chp15)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
INCLUDE_DIRECTORIES("./")
add_executable(ex_15_6 ./ex_15_6.cpp)
add_executable(ex_15_26 ./ex_15_26.cpp)
add_executable(ex_15_28 ./ex_15_28.cpp)
