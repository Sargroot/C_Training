#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int mat[10][10];
    int top = 0, bottom = n - 1, left = 0, right = n - 1, num = 1;

    while (top <= bottom && left <= right) {
        for (int i = left; i <= right; i++)
            mat[top][i] = num++;
        top++;

        for (int i = top; i <= bottom; i++)
            mat[i][right] = num++;
        right--;

        for (int i = right; i >= left; i--)
            mat[bottom][i] = num++;
        bottom--;

        for (int i = bottom; i >= top; i--)
            mat[i][left] = num++;
        left++;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            printf("%d ", mat[i][j]);
        printf("\n");
    }

    return 0;
}

