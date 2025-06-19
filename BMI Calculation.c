#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
#include <stdio.h>

int main() {
    float weight, height_cm, height_m, bmi;
    scanf("%f%f", &weight, &height_cm);

    height_m = height_cm / 100.0;
    bmi = weight / (height_m * height_m);

    if (bmi < 18.5)
        printf("You are underweight. Have an apple daily.\n");
    else if (bmi >= 18.5 && bmi < 25)
        printf("You are normal. Go walking daily and maintain it.\n");
    else if (bmi >= 25 && bmi < 30)
        printf("You are overweight. Go to the gym daily.\n");
    else
        printf("You are obese. You need to see a doctor.\n");

    return 0;
}
