#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int n;
    scanf("%d", &n);

    if (n > 9) {
        printf("Invalid Input\n");
        return 0;
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++)
            printf("%d", j);
        for (int j = i - 1; j >= 1; j--)
            printf("%d", j);
        printf("\n");
    }

    return 0;
}
