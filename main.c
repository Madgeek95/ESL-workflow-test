#include <stdio.h>
#include "vector3.h"

int main() {
    Vector3 v1 = {1.0f, 2.0f, 3.0f};
    Vector3 v2 = {4.0f, 5.0f, 6.0f};

    Vector3 sum = vec3_add(v1, v2);
    Vector3 sub = vec3_sub(v1, v2);
    float dot = vec3_dot(v1, v2);
    Vector3 cross = vec3_cross(v1, v2);

    printf("Vector 1: (%.1f, %.1f, %.1f)\n", v1.x, v1.y, v1.z);
    printf("Vector 2: (%.1f, %.1f, %.1f)\n", v2.x, v2.y, v2.z);
    printf("Sum:   (%.1f, %.1f, %.1f)\n", sum.x, sum.y, sum.z);
    printf("Sub:   (%.1f, %.1f, %.1f)\n", sub.x, sub.y, sub.z);
    printf("Dot:   %.1f\n", dot);
    printf("Cross: (%.1f, %.1f, %.1f)\n", cross.x, cross.y, cross.z);

    return 0;
}