#include <GLFW/glfw3.h>

#include <string>

class ChixApp {
private:
    int width, height;

    GLFWwindow *windowHandle;

    void frameSizeCallBack(GLFWwindow* window, int width, int height);

public:
    ChixApp(int w, int h, std::string t);
    // ~ChixApp();

    void updateApp();
};