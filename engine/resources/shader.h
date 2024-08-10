#include <string>

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
    void SetUniform(const std::string name, bool val);
    void SetUniform(const std::string name, float val);
    void SetUniform(const std::string name, int val);
};