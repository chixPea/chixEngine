cmake_minimum_required(VERSION 3.22.1)
project(chixEngine)

set(CMAKE_CXX_STANDARD 17)

add_subdirectory("external/glfw")

set(BINARY_NAME "chixEngine")

# Disable building GLFW's documentation, tests, and examples
set(GLFW_BUILD_DOCS OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_TESTS OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_EXAMPLES OFF CACHE BOOL "" FORCE)

#Add GLAD headers
# include_directories("lib/glad/include")

set(ENGINE_HEADERS src/*.h)
set(ENGINE_SOURCES src/*.cpp)

#Add GLAD headers
include_directories("external/glad/include")


if(UNIX)
        # Compile GLAD's implementation file with
        add_executable(${BINARY_NAME}
                external/glad/src/glad.c

                core/window.h
                core/window.cpp

                resources/shader.cpp

                program/program.cpp

                sys/linux/main.cpp
        )
        #OpenGL is a system library, no need for external packages or libraries
        target_link_libraries(${BINARY_NAME} PRIVATE glfw GL)
endif()