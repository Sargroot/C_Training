#include <stdio.h>
#include <stdlib.h>

int cmp_asc(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int cmp_desc(const void *a, const void *b) {
    return (*(int*)b - *(int*)a);
}

int main() {
    int n;
    scanf("%d", &n);
    int v1[800], v2[800];

    for (int i = 0; i < n; i++) scanf("%d", &v1[i]);
    for (int i = 0; i < n; i++) scanf("%d", &v2[i]);

    qsort(v1, n, sizeof(int), cmp_asc);
    qsort(v2, n, sizeof(int), cmp_desc);

    long long result = 0;
    for (int i = 0; i < n; i++) result += (long long)v1[i] * v2[i];

    printf("%lld\n", result);
    return 0;
}
