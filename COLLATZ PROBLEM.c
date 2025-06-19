#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>

int main() {
    int n, count = 0;
    printf("Enter a number\n");
    scanf("%d", &n);
    
    while (n != 1) {
        printf("%d\n", n);
        if (n % 2 == 0)
            n = n / 2;
        else
            n = 3 * n + 1;
        count++;
    }
    printf("1\n");
    printf("count:%d\n", count);
    
    return 0;
}
