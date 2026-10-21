#ifndef VECTOR3_H
#define VECTOR3_H

typedef struct {
    float x;
    float y;
    float z;
} Vector3;

Vector3 vec3_add(Vector3 a, Vector3 b);
Vector3 vec3_sub(Vector3 a, Vector3 b);
float vec3_dot(Vector3 a, Vector3 b);
Vector3 vec3_cross(Vector3 a, Vector3 b);

#endif