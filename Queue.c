#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    int a[100];
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);

    int buses = 1, current = 0;
    for (int i = 0; i < n; i++) {
        if (current + a[i] > m) {
            buses++;
            current = a[i];
        } else {
            current += a[i];
        }
    }

    printf("%d\n", buses);
    return 0;
}
