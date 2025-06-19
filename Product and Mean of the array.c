#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int n, i, x;
    float product = 1, sum = 0, mean;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &x);
        product *= x;
        sum += x;
    }
    mean = sum / n;
    mean = floor(mean * 1000) / 1000;
    printf("Product of the array:%.2f\n", product);
    printf("Mean of the array:%.3f\n", mean);
    return 0;
}
