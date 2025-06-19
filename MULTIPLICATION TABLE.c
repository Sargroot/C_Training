#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int num;
    scanf("%d", &num);

    for (int i = 1; i <= num; i++) {
        printf("%d * %d = %d\n", num, i, num * i);
    }

    return 0;
}



