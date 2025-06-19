#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main() {
    int base, height, side1, side2, side3;
    float area, perimeter;

    scanf("%d", &base);
    scanf("%d", &height);
    scanf("%d", &side1);
    scanf("%d", &side2);
    scanf("%d", &side3);

    area = 0.5f * base * height;
    perimeter = side1 + side2 + side3;

    printf("Area of Triangle is %.2f\n", area);
    printf("Perimeter of Triangle is %.2f\n", perimeter);

    return 0;
}

