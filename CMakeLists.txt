cmake_minimum_required(VERSION 3.24)
project(locadora_ultimo C)

set(CMAKE_C_STANDARD 17)

add_executable(locadora_ultimo main.c view/view_util.h.c view/view_util.h.h view/main_menu.c view/main_menu.h)
