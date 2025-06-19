#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>

int main() {
    float num1, num2, num3;
    scanf("%f%f%f", &num1, &num2, &num3);

    float max = num3;

    if (num1 > max)
        max = num1;
    if (num2 > max)
        max = num2;

    printf("Number3 is maximum with value of %.1f\n", max);

    return 0;
}
