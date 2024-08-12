#include <iostream>

#include "../../program/program.h"
#include "../../Common.h"

int main() {
    Program prog;

    // std::cout << glBindVertexArray << std::endl;

    float triangle[] = {
        0.0f, 0.5f, 0.0f,
        0.5f, 0.0f, 0.0f,
       -0.5f, 0.0f, 0.0f
    };

    VAO.Bind();
    vertexCache.Alloc(triangle, sizeof(triangle)); // / 9-1

    while(!prog.ShouldClose()) {
        prog.Frame();
    }
}