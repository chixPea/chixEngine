#include "vector.h"

#include <cmath>

chixVec3f::chixVec3f(float x, float y, float z) : x(x), y(y), z(z) {
}

float chixVec3f::length() {
    return sqrt(x * x + y * y + z * z);
}
float chixVec3f::normalize() {
    return (x / length() + y / length() + z / length());
}

