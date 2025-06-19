#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int num, sum = 0;
    do {
        scanf("%d", &num);
        if (num != -1)
            sum += num;
    } while (num != -1);

    printf("%d\n", sum);

    return 0;
}
