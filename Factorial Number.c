#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n, i;
    unsigned long long factorial = 1;

    scanf("%d", &n);

    if (n < 0) {
        printf("Invalid Input\n");
    } else {
        for (i = 1; i <= n; i++) {
            factorial *= i;
        }
        printf("The Factorial of %d is %llu\n", n, factorial);
    }

    return 0;
}
