#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i, x, even = 0, odd = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &x);
        if (x % 2 == 0)
            even++;
        else
            odd++;
    }
    if (even == n)
        printf("Even\n");
    else if (odd == n)
        printf("Odd\n");
    else
        printf("Mixed\n");
    return 0;
}
