#include <stdio.h>

int main() {
    int n, i;
    scanf("%d", &n);
    int nums[n];
    for (i = 0; i < n; i++) scanf("%d", &nums[i]);

    int low = 0, mid = 0, high = n - 1, temp;

    while (mid <= high) {
        if (nums[mid] == 0) {
            temp = nums[low];
            nums[low] = nums[mid];
            nums[mid] = temp;
            low++;
            mid++;
        } else if (nums[mid] == 1) {
            mid++;
        } else {
            temp = nums[mid];
            nums[mid] = nums[high];
            nums[high] = temp;
            high--;
        }
    }

    for (i = 0; i < n; i++) printf("%d ", nums[i]);
    return 0;
}
