cmake_minimum_required(VERSION 3.28)
project(chixLib)

set(CMAKE_CXX_STANDARD 17)

add_library(chixLib SHARED
        math/vector.h
        math/vector.cpp)