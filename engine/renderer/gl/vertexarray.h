#pragma once
#include "../../Common.h"

class VertexArray {
private:
    uint vao;
public:
    void Bind();
    void UnBind();
};

//==================================
//Global vertex array for attributes
//==================================
extern VertexArray VAO;