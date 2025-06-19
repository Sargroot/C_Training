#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a, b;
    char op;
    scanf("%d %d %c", &a, &b, &op);

    switch (op) {
        case '+':
            printf("Addition of two number is %.1f\n", (float)(a + b));
            break;
        case '-':
            printf("Subtraction of two number is %.1f\n", (float)(a - b));
            break;
        case '*':
            printf("Multiplication of two number is %.1f\n", (float)(a * b));
            break;
        case '/':
            if (b == 0)
                printf("Invalid Input\n");
            else
                printf("Division of two number is %.1f\n", (float)a / b);
            break;
        case '%':
            if (b == 0)
                printf("Invalid Input\n");
            else
                printf("Modulo of two number is %.1f\n", (float)(a % b));
            break;
        default:
            printf("Invalid Input\n");
    }

    return 0;
}

