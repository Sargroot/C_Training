#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
#include <stdio.h>

int main() {
    int num, square;
    scanf("%d", &num);

    if (num < 0 || num > 9) {
        printf("Invalid Input\n");
        return 0;
    }

    square = num * num;

    if (square % 10 == num)
        printf("Automorphic Number\n");
    else
        printf("Not Automorphic Number\n");

    return 0;
}
