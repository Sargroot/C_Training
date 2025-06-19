#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int nums[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &nums[i]);

    int first = 0, second = 0;
    for (int i = 0; i < n; i++) {
        if (nums[i] > first) {
            second = first;
            first = nums[i];
        } else if (nums[i] > second) {
            second = nums[i];
        }
    }

    int result = (first - 1) * (second - 1);
    printf("Maximum product of two elements in an array is %d\n", result);
    return 0;
}
