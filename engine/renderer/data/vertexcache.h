#pragma once
#include "../../Common.h"
#include "../gl/vertexarray.h"

typedef struct {
    uint vbo;

    int size;
} vertexCacheData;

class VertexCache {
private:
    vertexCacheData data;
public:
    void Alloc(void *data, int size);
    void DeAlloc();

    void AddData(int size, const void *data);
    void DeleteData();

    void BindData();
    void UnBind();

    int GetSize();
};

//===========================================
//Global storage object for vertex data
//===========================================
extern VertexCache vertexCache;