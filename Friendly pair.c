#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int sumOfDivisors(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0)
            sum += i;
    }
    return sum;
}

int main() {
    int num1, num2;
    scanf("%d %d", &num1, &num2);

    int sum1 = sumOfDivisors(num1);
    int sum2 = sumOfDivisors(num2);

    // Use double for ratio comparison
    double ratio1 = (double)sum1 / num1;
    double ratio2 = (double)sum2 / num2;

    if (ratio1 == ratio2) {
        printf("Friendly Pair\n");
    } else {
        printf("Not Friendly Pair\n");
    }

    return 0;
}
