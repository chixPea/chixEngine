#include "window.h"

ChixApp::ChixApp(int w, int h, std::string t) {
    glfwInit();

    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 4);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

    windowHandle = glfwCreateWindow(w, h, t.c_str(), nullptr, nullptr);

    glfwMakeContextCurrent(windowHandle);
    //init glad
}

void ChixApp::updateApp() {
    while(!glfwWindowShouldClose(windowHandle)) {
        glfwPollEvents();
        glfwSwapBuffers(windowHandle);
    }
    glfwDestroyWindow(windowHandle);
    glfwTerminate();
}

void ChixApp::frameSizeCallBack(GLFWwindow* window, int width, int height) {
#if LOG_WINDOW_SIZE == 1
    std::cout << width << "    " << height << "\n";
#endif
    glViewport(0, 0, width, height);
}