cmake_minimum_required(VERSION 2.8.9)
project(Cola)

include_directories(include)

set(SOURCES src/Nodo.cpp src/main.cpp src/Cola.cpp)

add_executable(cola ${SOURCES})