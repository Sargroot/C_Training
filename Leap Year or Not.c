#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int year;
    scanf("%d", &year);

    if ((year % 100 == 0 && year % 400 == 0) || (year % 100 != 0 && year % 4 == 0))
        printf("The Given Year %d is a Leap Year.\n", year);
    else
        printf("The Given Year %d is Not a Leap Year.\n", year);

    return 0;
}

