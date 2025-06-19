#include <stdio.h>

int main() {
    int n, a[100], count = 0;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for (int i = 0; i < n; i++) {
        int is_unique = 1;
        for (int j = 0; j < i; j++) {
            if (a[i] == a[j]) {
                is_unique = 0;
                break;
            }
        }
        if (is_unique) count++;
    }

    if (count == 1)
        printf("There are 1 distinct element in the array.\n");
    else
        printf("There are %d distinct elements in the array.\n", count);

    return 0;
}
