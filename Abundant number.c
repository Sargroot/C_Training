#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int num, sum = 0;
    scanf("%d", &num);

    for (int i = 1; i < num; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }

    if (sum > num)
        printf("Abundant Number\n");
    else
        printf("Not Abundant Number\n");

    return 0;
}
