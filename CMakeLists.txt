cmake_minimum_required(VERSION 3.14)
project(KeyboardLogger)

set(CMAKE_CXX_STANDARD 11)

add_executable(KeyboardLogger main.cpp logger.h logger.cpp kthief.cpp kthief.h)