#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int mat[n][n];
    for (int i = 0; i < n * n; i++)
        scanf("%d", &mat[i / n][i % n]);

    printf("Array elements are:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            printf("%d ", mat[i][j]);
        printf("\n");
    }

    printf("Transpose matrix is:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            printf("%d ", mat[j][i]);
        printf("\n");
    }

    return 0;
}
