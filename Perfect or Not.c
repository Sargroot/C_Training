#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>

int main() {
    int n, sum = 0;
    scanf("%d", &n);

    if (n < 0) {
        printf("Invalid Input\n");
        return 0;
    }

    for (int i = 1; i <= n / 2; i++) {
        if (n % i == 0) {
            sum += i;
        }
    }

    if (sum == n && n != 0) {
        printf("The Number %.1f is a Perfect Number.\n", (float)n);
    } else {
        printf("The Number %.1f is a Not Perfect Number.\n", (float)n);
    }

    return 0;
}

