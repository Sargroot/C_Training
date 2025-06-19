#include <stdio.h>

int main() {
    int n, i;
    scanf("%d", &n);
    int nums[n], ans[2 * n];

    for (i = 0; i < n; i++) scanf("%d", &nums[i]);

    for (i = 0; i < n; i++) {
        ans[i] = nums[i];
        ans[i + n] = nums[i];
    }

    for (i = 0; i < 2 * n; i++) printf("%d ", ans[i]);

    return 0;
}
