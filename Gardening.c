#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
#include <stdio.h>

int main() {
    int rows, cols, treeNumber;
    scanf("%d %d %d", &rows, &cols, &treeNumber);

    int secondCol = 2;
    int secondLastCol = cols - 1;

    int colPosition = (treeNumber - 1) / rows + 1;

    if (colPosition == secondCol || colPosition == secondLastCol) {
        printf("It is a mango tree\n");
    } else {
        printf("It is not a mango tree\n");
    }

    return 0;
}
