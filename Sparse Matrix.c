#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int mat[n][n], zeroCount = 0;

    for (int i = 0; i < n * n; i++) {
        scanf("%d", &mat[i / n][i % n]);
        if (mat[i / n][i % n] == 0)
            zeroCount++;
    }

    int total = n * n;
    if (zeroCount > total / 2)
        printf("Matrix is a Sparse Matrix\n");
    else
        printf("Matrix is not a Sparse Matrix\n");

    return 0;
}
