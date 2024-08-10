#pragma once
#include "Common.h"

typedef struct {
    uint vbo;
} vertexCacheData;

class VertexCache {
private:
    vertexCacheData data;
public:
    void AddData();
    void BindData();

    void RemoveData();
    void UnBind();

    int GetSize();
};

//===========================================
//Global storage object for vertex data
//===========================================
extern VertexCache vertexCache;