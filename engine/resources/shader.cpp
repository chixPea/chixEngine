#include "shader.h"

void Shader::SetUniform(const std::string name, bool val) {
    glUniform1i(glGetUniformLocation(prog, name.c_str()), (int)val);
}

void Shader::SetUniform(const std::string name, float val) {
    glUniform1f(glGetUniformLocation(prog, name.c_str()), val);
}

void Shader::SetUniform(const std::string name, int val) {
    glUniform1i(glGetUniformLocation(prog, name.c_str()), val);
}