cmake_minimum_required(VERSION 2.8.9)
project(Pila)

include_directories(include)

set(SOURCES src/Nodo.cpp src/main.cpp src/Pila.cpp)

add_executable(pila ${SOURCES})