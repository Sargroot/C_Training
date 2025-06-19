#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    float t,v;
    scanf("%f %f",&t,&v);
    float wcf = 35.74 + 0.6215*t + (0.4275*t - 35.75) * pow(v,0.16);
    printf("%.2f",wcf);
    return 0;
}