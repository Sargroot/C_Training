#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int n, i, x, count = 0, sum = 0;
    scanf("%d", &n);
    int a[n];
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("The Perfect Square Values are");
    for (i = 0; i < n; i++) {
        int root = sqrt(a[i]);
        if (root * root == a[i]) {
            printf(" %d", a[i]);
            count++;
            sum += a[i];
        }
    }
    printf("\nThe Number of Perfect Squares are %d\n", count);
    printf("The Sum of Perfect Square is %d\n", sum);
    return 0;
}
