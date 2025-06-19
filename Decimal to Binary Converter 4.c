#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int num;
    scanf("%d", &num);

    if (num == 0) {
        printf("Binary number is: 0\n");
        return 0;
    }

    int binary[32], i = 0;
    while (num > 0) {
        binary[i] = num % 2;
        num = num / 2;
        i++;
    }

    printf("Binary number is: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    printf("\n");

    return 0;
}
