#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>

int main() {
    int hours, minutes, seconds;

    scanf("%d %d %d", &hours, &minutes, &seconds);

    minutes += seconds / 60;
    seconds = seconds % 60;

    hours += minutes / 60;
    minutes = minutes % 60;

    printf("Total Number of hours is %d\n", hours);
    printf("Total Number of minutes is %d\n", minutes);
    printf("Total Number of seconds is %d\n", seconds);

    return 0;
}
