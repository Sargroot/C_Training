#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int main() {
    int side, length, width, radius, base1, sideTri, base2;
    float perimeterSquare, perimeterRectangle, perimeterCircle, perimeterTriangle;
    const float pi = 3.14159;

    scanf("%d", &side);
    scanf("%d", &length);
    scanf("%d", &width);
    scanf("%d", &radius);
    scanf("%d", &base1);
    scanf("%d", &sideTri);
    scanf("%d", &base2);

    perimeterSquare = 4 * side;
    perimeterRectangle = 2 * (length + width);
    perimeterCircle = 2 * pi * radius;
    perimeterTriangle = base1 + sideTri + base2;

    float truncatedCircle = ((int)(perimeterCircle * 100)) / 100.0f;

    printf("Perimeter of Square:%d\n", (int)perimeterSquare);
    printf("Perimeter of Rectangle:%d\n", (int)perimeterRectangle);
    printf("Perimeter of Circle:%.2f\n", truncatedCircle);
    printf("Perimeter of Triangle:%d\n", (int)perimeterTriangle);

    return 0;
}

