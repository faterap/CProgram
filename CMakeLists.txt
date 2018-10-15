cmake_minimum_required(VERSION 3.12)
project(c C)

set(CMAKE_C_STANDARD 99)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "~/CLionProjects/c")

add_executable(c main.c bst.c std.c life.c life.h bst.h std.h)