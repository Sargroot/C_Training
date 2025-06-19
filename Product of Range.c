#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);

    int product = 1;
    for (int i = 1; i <= n; i++) {
        product *= i;
    }

    printf("Product of value is %d\n", product);

    return 0;
}
