#include <stdio.h>

int main() {
    int rows, cols;
    scanf("%d %d", &rows, &cols);
    int mat[rows][cols];

    for (int i = 0; i < rows * cols; i++)
        scanf("%d", &mat[i / cols][i % cols]);

    for (int j = 0; j < cols; j++) {
        int max = mat[0][j];
        for (int i = 1; i < rows; i++) {
            if (mat[i][j] > max)
                max = mat[i][j];
        }
        printf("Maximum value in column %d is %d\n", j + 1, max);
    }

    return 0;
}
