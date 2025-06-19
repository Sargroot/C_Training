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

    int term = 6, diff = 3;

    for (int i = 1; i <= n; i++) {
        printf("%d", term);
        if (i != n) printf(" ");

        term += diff;
        diff += 2;
    }

    return 0;
}
