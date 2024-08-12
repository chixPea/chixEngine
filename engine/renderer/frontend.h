#pragma once
#include "../Common.h"

#include "data/backenddata.h"
#include "data/command.h"
#include "backend.h"

class RendererFrontend {
private:
    RenderBackend backend;

    void SubmitCommand();
public:
    void Frame(Display display);
};