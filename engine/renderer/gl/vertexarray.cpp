#include "vertexarray.h"

VertexArray VAO;

void VertexArray::Bind() {
    std::cout << "VertexArray::vao: " << vao << '\n';
    if(!vao) glGenVertexArrays(1, &vao);
    glBindVertexArray(vao);
    std::cout << "VertexArray::vao: " << vao << '\n';
}

void VertexArray::UnBind() {
    glBindVertexArray(0);
}