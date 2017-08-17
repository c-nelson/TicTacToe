cmake_minimum_required(VERSION 3.8)
project(clion)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES TicTacToe.cpp TicTacToe.hpp Board.cpp Board.hpp)
add_executable(clion ${SOURCE_FILES})