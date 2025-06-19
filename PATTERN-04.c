#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n, num = 1;
    scanf("%d", &n);
    int arr[n][n];

    // Fill the array with numbers
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            arr[i][j] = num++;
        }
    }

    // Print the pattern
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(i == 0 || i == n - 1 || j == 0 || j == n - 1)
                printf("%-4d", arr[i][j]);
            else
                printf("    ");
        }
        printf("\n");
    }

    return 0;
}
