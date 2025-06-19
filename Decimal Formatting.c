#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    float a;
    scanf("%f",&a);
    printf("%.5f\n",a);
    printf("%.4f\n",a);
    printf("%.3f\n",a);
    printf("%.2f\n",a);
    printf("%.1f\n",a);
    printf("%.0f\n",floor(a));


    return 0;
}
