#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i, x, target, found = 0;
    scanf("%d", &n);
    int a[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    scanf("%d", &target);
    for (i = 0; i < n; i++) {
        if (a[i] == target) {
            found = 1;
            break;
        }
    }
    if (found)
        printf("%d is presented in an array.\n", target);
    else
        printf("%d is not presented in an array.\n", target);
    return 0;
}
