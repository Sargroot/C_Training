#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[n], i, e = 0, o = 0;
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int even[n], odd[n];
    for (i = 0; i < n; i++) {
        if (i % 2 == 0)
            even[e++] = arr[i];
        else
            odd[o++] = arr[i];
    }

    qsort(even, e, sizeof(int), compare);
    qsort(odd, o, sizeof(int), compare);

    if (e < 2 || o < 2) {
        printf("Not enough elements\n");
        return 0;
    }

    int second_largest_even = even[e - 2];
    int second_smallest_odd = odd[1];
    int sum = second_largest_even + second_smallest_odd;

    printf("Sum=%d\n", sum);
    return 0;
}
