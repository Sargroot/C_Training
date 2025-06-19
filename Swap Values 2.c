#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main() {
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);

    printf("The First value before Swapping:%d\n", a);
    printf("The Second value before Swapping:%d\n", b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("The First value after Swapping:%d\n", a);
    printf("The Second value after Swapping:%d\n", b);

    return 0;
}
