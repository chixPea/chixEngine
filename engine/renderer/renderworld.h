#pragma once
#include "../Common.h"

#include "../core/window.h"

class RenderWorld {
private:
    float staticMeshData[512];
    //entity storage
    //light storage
public:
    void Draw(Display display);
};