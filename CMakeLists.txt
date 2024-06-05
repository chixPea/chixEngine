cmake_minimum_required(VERSION 3.22.1)
project(ChixEngine)

option(BUILD_CHIXLIB "Builds chixLib" ON)
option(BUILD_ENGINE "Builds the engine" ON)
option(BUILD_GAME "Builds the game" ON)
option(BUILD_GUI "Builds the GUI" ON)

set(CMAKE_CXX_STANDARD 17)

add_subdirectory(engine/)

# add_executable(ChixEngine)
