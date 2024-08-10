#include <iostream>

#include "../../program/program.h"

int main() {
    Program prog;

    // prog.world.AddPrimitive();

    while(!prog.ShouldClose())
    {
        prog.Frame();
    }
}