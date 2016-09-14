cmake_minimum_required(VERSION 2.8.9)
project(ListaDL)

include_directories(include)

set(SOURCES src/Nodo.cpp src/main.cpp src/ListaDL.cpp)

add_executable(listadl ${SOURCES})