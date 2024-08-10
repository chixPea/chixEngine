#include "Common.h"

class TrianglePrimitive {
private:
    float vertexData[9] = {
        0.5f, 0.0f, 0.0f,
        0.0f, 0.5f, 0.0f,
       -0.5f, 0.0f, 0.0f
    };

    uint vbo;
    uint vao;

public:
    TrianglePrimitive();
};