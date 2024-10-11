cmake_minimum_required(VERSION 3.29)
project(TD1_OOP)

set(CMAKE_CXX_STANDARD 20)
include_directories(source)
include_directories(headers)

add_executable(TD1_OOP main.cpp
        main.cpp
        source/Complex.cpp
        headers/Complex.h
        source/Singleton.cpp
        headers/Singleton.h
        source/Cercle.cpp
        headers/Cercle.h
        source/Point.cpp
        headers/Point.h
)
