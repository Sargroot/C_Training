#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>

int main() {
    int num, digit1, digit2, sum;
    scanf("%d", &num);

    if (num >= 10 && num <= 99) {
        digit1 = num / 10;
        digit2 = num % 10;
        sum = digit1 + digit2;
        printf("Sum of Digit %d is %03d\n", num, sum);
    } else {
        printf("Invalid Input\n");
    }

    return 0;
}
