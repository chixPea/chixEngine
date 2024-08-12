#include "frontend.h"
#include "data/vertexcache.h"

void RendererFrontend::SubmitCommand() {}

void RendererFrontend::Frame(Display display) {
    //Get contributive entities
    //Get contributive lights
    //matrices
    //register draw command
    // SubmitCommand();
    backend.BeginFrame(display);
}