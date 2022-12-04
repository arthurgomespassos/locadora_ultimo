cmake_minimum_required(VERSION 3.24)
project(locadora_ultimo C)

set(CMAKE_C_STANDARD 17)

add_executable(locadora_ultimo main.c view/main_menu.c view/main_menu.h view/view_util.c view/view_util.h entities/types.h)
