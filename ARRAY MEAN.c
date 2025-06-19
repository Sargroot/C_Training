#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i, x, sum = 0;
    float mean;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &x);
        sum += x;
    }
    mean = (float)sum / n;
    printf("Array Mean Value is %.2f\n", mean);
    return 0;
}
