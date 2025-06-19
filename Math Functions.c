#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    float value;
    int squareInput, base, power;

    scanf("%f %d %d %d", &value, &squareInput, &base, &power);

    printf("%d\n", (int)floor(value));
    printf("%d\n", (int)ceil(value));
    printf("%d\n", (int)sqrt(squareInput));
    printf("%d\n", (int)pow(base, power));

    return 0;
}
