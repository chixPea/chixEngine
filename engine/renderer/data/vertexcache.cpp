#include "vertexcache.h"

VertexCache vertexCache;

void VertexCache::BindData() {
    glBindBuffer(GL_ARRAY_BUFFER, data.vbo);
}

//TODO: Study idTech 4's headers

//======================================================================
// VertexCache::Alloc
// Allocates vertex data to vertexCacheData
// NOTE: This will also automatically setup the default shaders vertex attributes
//======================================================================
void VertexCache::Alloc(void *vData, int size) {
    vertexCacheData dataBlock;

    //if vbo is uninitialized gen a buffer
    if(!dataBlock.vbo) {
        if(DEBUG_VERTEX_CACHE) std::cout << "VertexCache::Alloc(), Creating VBO\n";
        glGenBuffers(1, &dataBlock.vbo);
    }

    //if we do have a vbo we can send data to it
    if(dataBlock.vbo) {
        glEnableVertexAttribArray(0);
        glVertexAttribPointer(0, 3, GL_FLOAT, false, 3 * sizeof(float), (void*)0);

        if(DEBUG_VERTEX_CACHE) std::cout << "VertexCache::Alloc(), Binding VBO\n";

        glBindBuffer(GL_ARRAY_BUFFER, dataBlock.vbo);
        glBufferData(GL_ARRAY_BUFFER, size, vData, GL_STATIC_DRAW);
        dataBlock.size = size;
    }
    else return;

    if(DEBUG_VERTEX_CACHE) std::cout << "VertexCache::Alloc(), VBO size: " << dataBlock.size << '\n';

    data = dataBlock;
}

int VertexCache::GetSize() {
    return data.size;
}

// void VertexCache::AddData(int size, const void *data) {
//     BindData();

//     glBufferSubData(GL_ARRAY_BUFFER, GetSize() * sizeof(float), size, data);
// }

void VertexCache::UnBind() {
    glBindBuffer(GL_ARRAY_BUFFER, 0);
}