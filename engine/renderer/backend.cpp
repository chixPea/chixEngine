#include "backend.h"
#include "vertexcache.h"

void Backend::DrawCameraView() {
    vertexCache.BindData();

    glDrawArrays(GL_TRIANGLES, 0, vertexCache.GetSize());
    EndFrame();
}

void Backend::EndFrame() {
    vertexCache.UnBind();
    display.SwapBuffers();
}