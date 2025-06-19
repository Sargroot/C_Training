#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int balance, process, amount;
    scanf("%d", &balance);
    scanf("%d", &process);

    switch (process) {
        case 1:
            scanf("%d", &amount);
            balance += amount;
            printf("%d\n", balance);
            break;
        case 2:
            scanf("%d", &amount);
            if (amount > balance)
                printf("Insufficient Balance\n");
            else {
                balance -= amount;
                printf("%d\n", balance);
            }
            break;
        default:
            printf("Invalid Input\n");
    }

    return 0;
}
