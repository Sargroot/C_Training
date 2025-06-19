#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main() {
    int n, i, x;
    int min = INT_MAX, second = INT_MAX;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &x);
        if (x < min) {
            second = min;
            min = x;
        } else if (x > min && x < second) {
            second = x;
        }
    }
    if (second == INT_MAX)
        printf("No second minimum\n");
    else
        printf("%d\n", second);
    return 0;
}
