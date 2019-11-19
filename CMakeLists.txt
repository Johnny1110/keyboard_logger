cmake_minimum_required(VERSION 3.14)
project(KeyboardLogger)

set(CMAKE_CXX_STANDARD 11)

add_executable(KeyboardLogger keyboard_logger/main.cpp keyboard_logger/logger.h keyboard_logger/logger.cpp keyboard_logger/kthief.cpp keyboard_logger/kthief.h)