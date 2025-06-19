#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdbool.h>

bool isPrime(int num) {
    if (num < 2) return false;
    for (int i = 2; i*i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

int main() {
    int n, count = 0, num = 101;
    scanf("%d", &n);

    while (count < n) {
        if (isPrime(num)) {
            printf("%d", num);
            count++;
            if (count != n) printf(" ");
        }
        num++;
    }
    return 0;
}
