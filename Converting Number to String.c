#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);

    if (n < 0 || n > 9) {
        printf("Invalid Input\n");
        return 0;
    }

    printf("Integer is %d and String is ", n);
    switch (n) {
        case 0: printf("Zero\n"); break;
        case 1: printf("One\n"); break;
        case 2: printf("Two\n"); break;
        case 3: printf("Three\n"); break;
        case 4: printf("Four\n"); break;
        case 5: printf("Five\n"); break;
        case 6: printf("Six\n"); break;
        case 7: printf("Seven\n"); break;
        case 8: printf("Eight\n"); break;
        case 9: printf("Nine\n"); break;
    }

    return 0;
}

