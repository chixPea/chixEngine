#pragma once
#include "../Common.h"
#include "../core/window.h"

#include "camera.h"

class WorldState {
private:
    Camera mainCamera;
public:
    void Frame(Display display);
};