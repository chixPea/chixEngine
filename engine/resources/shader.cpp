#include "shader.h"

void CheckForShaderErrors(uint shader, std::string type) {
    int success;
    char infoLog[1024];

    glGetShaderiv(shader, GL_COMPILE_STATUS, &success);

    if (!success)
    {
        glGetShaderInfoLog(shader, 1024, NULL, infoLog);
        std::cout << "ERROR::SHADER_COMPILATION_ERROR of type: " << type << "\n" << infoLog << "\n -- --------------------------------------------------- -- " << std::endl;
    }
}

Shader::Shader(std::string path) {
    std::string vPath = DEFAULT_RESOURCE_PATH + path + ".cvp";
    std::string fPath = DEFAULT_RESOURCE_PATH + path + ".cfp";

    std::ifstream vFile;
    std::ifstream fFile;

    // ensure ifstream objects can throw exceptions:
    vFile.exceptions (std::ifstream::failbit | std::ifstream::badbit);
    fFile.exceptions (std::ifstream::failbit | std::ifstream::badbit);

    uint vShader;
    uint fShader;

    const char *vSrc;
    const char *fSrc;

    try {
        vFile.open(vPath);
        fFile.open(fPath);

        std::stringstream vShaderStream, fShaderStream;
        // read file's buffer contents into streams
        vShaderStream << vFile.rdbuf();
        fShaderStream << fFile.rdbuf();

        vFile.close();
        fFile.close();

        vSrc = vShaderStream.str().c_str();
        fSrc = fShaderStream.str().c_str();
    }
    catch(std::ifstream::failure &e) {
        std::cout << "ERROR::SHADER::FILE_NOT_SUCCESSFULLY_READ: " << e.what() << std::endl;
    }

    if(DEBUG_SHADERS) std::cout << "Shader::Shader() loaded shaders:\n\t" << vPath << fPath << '\n';

    vShader = glCreateShader(GL_VERTEX_SHADER);
    glShaderSource(vShader, 1, &vSrc, NULL);
    glCompileShader(vShader);
    CheckForShaderErrors(vShader, "VERTEX");

    fShader = glCreateShader(GL_FRAGMENT_SHADER);
    glShaderSource(fShader, 1, &fSrc, NULL);
    glCompileShader(fShader);
    CheckForShaderErrors(fShader, "FRAG");

    prog = glCreateProgram();
    glAttachShader(prog, vShader);
    glAttachShader(prog, fShader);
    glLinkProgram(prog);

    glDetachShader(prog, vShader);
    glDetachShader(prog, fShader);

    glDeleteShader(vShader);
    glDeleteShader(fShader);
}

Shader::~Shader() {
    glDeleteProgram(prog);
}

void Shader::SetUniform(const std::string name, bool val) {
    glUniform1i(glGetUniformLocation(prog, name.c_str()), (int)val);
}

void Shader::SetUniform(const std::string name, float val) {
    glUniform1f(glGetUniformLocation(prog, name.c_str()), val);
}

void Shader::SetUniform(const std::string name, int val) {
    glUniform1i(glGetUniformLocation(prog, name.c_str()), val);
}