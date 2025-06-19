#include <stdio.h>
#define PI 3.14159

int main() {
    int l, b, h, r;
    scanf("%d %d %d %d", &l, &b, &h, &r);

    float volCuboid = l * b * h;
    float volCylinder = PI * r * r * h;
    float volCone = (PI * r * r * h) / 3.0;
    float volSphere = (4.0 / 3.0) * PI * r * r * r;

    printf("Volume of Cubiod=%.2f\n", volCuboid);
    printf("Volume of Cylinder=%.2f\n", volCylinder);
    printf("Volume of Cone=%.2f\n", volCone);
    printf("Volume of Shpere=%.2f\n", volSphere);

    return 0;
}
