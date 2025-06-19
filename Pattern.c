#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int n, i, j, num = 1;
    scanf("%d", &n);

    // Upper Half
    for(i = 1; i <= n; i++) {
        int temp = num;
        for(j = 1; j < i; j++) {
            printf("%d    ", temp++);
        }
        printf("1\n");
        num = temp;
    }

    // Lower Half
    for(i = n - 1; i >= 1; i--) {
        int k = 1;
        for(j = 1; j < i; j++) {
            printf("%d    ", k++);
        }
        printf("1\n");
    }

    return 0;
}
