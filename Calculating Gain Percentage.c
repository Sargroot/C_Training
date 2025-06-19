#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    double A, B, C;
    scanf("%lf", &A);
    scanf("%lf", &B);
    scanf("%lf", &C);

    double cost_price = A + B;
    double gain = C - cost_price;
    double gain_percent = (gain / cost_price) * 100;

    printf("%.2lf\n", gain_percent);

    return 0;
}

