#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int countOdd = 0;
    double score = 0.0;
    int num;

    printf("Enter the numbers\n");
    while (countOdd < 3) {
        scanf("%d", &num);
        printf("%d\n", num);

        if (num < 0) {
            score -= 1;
            break;
        }
        else if (num % 2 != 0 && num > 0) {  // positive odd
            score += 1;
            countOdd++;
        }
        else if (num % 2 == 0 && num > 0) {  // positive even
            score -= 0.5;
        }
    }
    printf("%.1f\n", score);

    return 0;
}
