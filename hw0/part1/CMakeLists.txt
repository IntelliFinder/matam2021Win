cmake_minimum_required(VERSION 3.20)
project(hw0 C)

set(CMAKE_C_STANDARD 11)

include_directories(code)

add_executable(hw0
        code/mtm_tot.c
        code/mtm_tot.h)
