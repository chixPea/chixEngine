#pragma once
#include "../Common.h"
#include "../core/window.h"
#include "../renderer/worldstate.h"

#include <string>

class Program {
private:
    Display display;


    std::string name;

    bool shouldClose;
public:
    WorldState world;

    // Program();

    bool ShouldClose();

    void Frame();
};