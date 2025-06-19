#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    int n, k, i;
    scanf("%d", &n);
    int a[n];
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    scanf("%d", &k);
    qsort(a, n, sizeof(int), compare);
    printf("The elements are in the order:");
    for (i = 0; i < n; i++)
        printf(" %d", a[i]);
    printf("\nThe Kth value is %d and Largest elements are", k);
    for (i = n - 1; i >= n - k; i--)
        printf(" %d", a[i]);
    printf("\n");
    return 0;
}
