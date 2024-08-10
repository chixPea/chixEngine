#pragma once
#include "../Common.h"

#include <string>

class Display {
private:
    int width, height;

    GLFWwindow *windowHandle;

    void InitOpenGL();
    void frameSizeCallBack(GLFWwindow* window, int width, int height);

public:
    Display(int w = 800, int h = 600, std::string t = "title");
    ~Display();

    bool ShouldClose();

    void PollEvents();
    void SwapBuffers();
    void Destroy();
    void Run();
};