#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int num, sum = 0, temp;
    scanf("%d", &num);

    temp = num;
    for (; temp > 0; ) {
        sum += temp % 10;
        temp /= 10;
    }

    if (num % sum == 0)
        printf("Harshad Number\n", num);
    else
        printf("Not Harshad Number\n", num);

    return 0;
}