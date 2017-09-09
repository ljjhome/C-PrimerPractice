cmake_minimum_required(VERSION 3.0)
project(chp14)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
INCLUDE_DIRECTORIES("./")
add_executable(ex_14_2 ./ex_14_2.cpp)
add_executable(ex_14_34 ./ex_14_34.cpp)
add_executable(ex_14_35 ./ex_14_35.cpp)
add_executable(ex_14_37 ./ex_14_37.cpp)
add_executable(ex_14_38 ./ex_14_38.cpp)
add_executable(ex_14_40 ./ex_14_40.cpp)
add_executable(ex_14_42 ./ex_14_42.cpp)

