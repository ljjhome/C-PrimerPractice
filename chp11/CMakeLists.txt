cmake_minimum_required(VERSION 3.0)
project(chp13)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
INCLUDE_DIRECTORIES("./")
add_executable(ex_11_3 ./ex_11_3.cpp)
add_executable(ex_11_7 ./ex_11_7.cpp)
add_executable(ex_11_8 ./ex_11_8.cpp)
add_executable(ex_11_12 ./ex_11_12.cpp)
