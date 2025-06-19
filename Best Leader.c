#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n], res[n], count = 0;
    
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);

    int max = arr[n - 1];
    res[count++] = max;

    for (int i = n - 2; i >= 0; i--) {
        if (arr[i] > max) {
            max = arr[i];
            res[count++] = max;
        }
    }

    printf("The Best Leaders are");
    for (int i = 0; i < count; i++) {
        printf(" %d", res[i]);
    }
    printf("\n");
    
    return 0;
}
