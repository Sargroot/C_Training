#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
#include <stdio.h>

int main() {
    int wallLength, wallBreadth;
    int p1Length, p1Breadth;
    int p2Length, p2Breadth;
    
    scanf("%d%d%d%d%d%d", &wallLength, &wallBreadth, &p1Length, &p1Breadth, &p2Length, &p2Breadth);

    int wallArea = wallLength * wallBreadth;
    int totalPaintingsArea = (p1Length * p1Breadth) + (p2Length * p2Breadth);

    if (totalPaintingsArea <= wallArea)
        printf("Raj can fix both painting\n");
    else
        printf("Raj cannot fix both painting\n");

    return 0;
}
