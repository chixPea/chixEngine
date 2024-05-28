#ifndef VECTOR_H
#define VECTOR_H

class chixVec3f {
public:
    float x;
    float y;
    float z;

    chixVec3f(float x, float y, float z);
    ~chixVec3f();

    float length();
    float normalize();
};

#endif //VECTOR_H
