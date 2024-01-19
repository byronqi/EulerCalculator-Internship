cmake_minimum_required(VERSION 3.27)
project(Euler_K1_Calc)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Euler_K1_Calc
        euler.cpp
        euler.h)
