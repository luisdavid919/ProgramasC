cmake_minimum_required(VERSION 3.14)
project(caracter C)

set(CMAKE_C_STANDARD 11)
set(CURSES_LIBRARY "/usr/lib/x86_64-linux-gnu/libncurses.so
")
set(CURSES_INCLUDE_PATH "/usr/include")

add_executable(caracter main.c)