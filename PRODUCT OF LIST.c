#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i, x;
    float product = 1;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &x);
        product *= x;
    }
    printf("The Product of list value is %.2f\n", product);
    return 0;
}

