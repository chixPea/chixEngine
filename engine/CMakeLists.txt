cmake_minimum_required(VERSION 3.28)
project(chixEngine)

set(CMAKE_CXX_STANDARD 17)

#Add GLFW
add_subdirectory("external/glfw")
#Link:
# - OpenGL
# - GLAD
# - chixLib (NO GLM!!!)
# - chixGUI
# - stb_image