#pragma once
#include "../Common.h"
#include "../core/window.h"
#include "../renderer/frontend.h"

#include <string>

class Program {
private:
    Display display;
    RendererFrontend frontend;
    

    std::string name;

    bool shouldClose;

public:
    bool ShouldClose();

    void Frame();
};