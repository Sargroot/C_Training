#include <stdio.h>

int is_prime(int n) {
    if (n < 2) return 0;
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0) return 0;
    return 1;
}

int main() {
    int m;
    scanf("%d", &m);
    if (m > 6) {
        printf("Enter the valid Input\n");
        return 0;
    }

    int arr[10][10];
    for (int i = 0; i < m * m; i++)
        scanf("%d", &arr[i / m][i % m]);

    printf("The Prime Array Matrix is:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
            if (is_prime(i) && is_prime(j))
                printf("F ");
            else
                printf("T ");
        }
        printf("\n");
    }

    return 0;
}
