#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    double speed, distance, time;
    scanf("%lf", &speed);
    scanf("%lf", &distance);
    scanf("%lf", &time);

    double speed_mps = speed / 3600.0;

 
    double time_needed = distance / speed_mps;

    if (time_needed < time)
        printf("Yes\n");
    else
        printf("No\n");

    return 0;
}

