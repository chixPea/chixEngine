#pragma once
#include <string>
#include <fstream>
#include <sstream>

#include "../Common.h"

class Shader {
private:
    uint prog;
public:
    // =======================================================================
    //
    // Shader
    // NOTE: The shader will opened from the predefined, DEFAULT_RESOURCE_PATH
    // =======================================================================
    Shader(std::string path);
    ~Shader();

    void Use();

    void SetUniform(const std::string name, bool val);
    void SetUniform(const std::string name, float val);
    void SetUniform(const std::string name, int val);
};

typedef struct {
    Shader defaultShader;
} shaderBuffer_t;

extern shaderBuffer_t shaderBuffer_g;