#include "program.h"

void Program::Frame() {
    display.PollEvents();

    // world.Frame(display);
    frontend.Frame(display);
}

bool Program::ShouldClose() {
    return display.ShouldClose();
}