#pragma once
#include "../Common.h"
#include "data/command.h"

class RenderBackend {
private:
    void DrawCameraView(Display display);
    void EndFrame(Display display);
public:
    // RenderBackend();
    void ExecuteCommands(CommandBuffer buff);
    void ExecuteCommand(backenCommand_s cmd, Display display);
    void BeginFrame(Display display);
};