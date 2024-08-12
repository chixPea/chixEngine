#include "backend.h"

void RenderBackend::DrawCameraView(Display display) {
    VAO.Bind();

    glDrawArrays(GL_TRIANGLES, 0, 3);

    EndFrame(display);
}

void RenderBackend::ExecuteCommand(backenCommand_s cmd, Display display) {
    switch(cmd.id) {
        case BKE_NO_COMM: break;
        case BKE_DRAW_VIEW:
            DrawCameraView(display);
            break;
        case BKE_CLEAR_COLOR:
            glClearColor(0.0, 0.6, 0.8, 1.0);
            break;
        case BKE_CLEAR:
            glClear(GL_COLOR_BUFFER_BIT);
            break;
    }
}

// void RenderBackend::ExecuteCommands(CommandBuffer buff) {
//     //execution timer
//     for(int i = 0; i < buff.count; ++i) {}
// }

void RenderBackend::BeginFrame(Display display) {
    // glClear(GL_COLOR_BUFFER_BIT);

    backenCommand_s cmd {
        .id = BKE_DRAW_VIEW,
    };
    ExecuteCommand(cmd, display);
}

void RenderBackend::EndFrame(Display display) {
    display.SwapBuffers();
}