#include <stdio.h>

int main() {
    int m, n;
    scanf("%d %d", &m, &n);

    int accounts[m][n];
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &accounts[i][j]);

    int maxWealth = 0;
    for (int i = 0; i < m; i++) {
        int sum = 0;
        for (int j = 0; j < n; j++)
            sum += accounts[i][j];
        if (sum > maxWealth)
            maxWealth = sum;
    }

    printf("Richest Customer Wealth is %d\n", maxWealth);
    return 0;
}
