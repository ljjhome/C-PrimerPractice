cmake_minimum_required(VERSION 3.0)
project(chp13)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
INCLUDE_DIRECTORIES("./")
add_executable(ex_13_13 ./ex_13_13.cpp)
add_executable(ex_13_17 ./ex_13_17.cpp)
add_executable(ex_13_22 ./ex_13_22.cpp)
add_executable(ex_13_25 ./ex_13_25.cpp ./StrBlob.cpp)
