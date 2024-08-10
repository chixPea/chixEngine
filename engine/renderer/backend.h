#pragma once
#include "../Common.h"
#include "window.h"

class Backend {
private:
    Display display;

    void DrawCameraView();
    void EndFrame();
public:
    void ExecuteCommandBuffer();
};