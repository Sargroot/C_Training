#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char name[50];
    int arrears, cgpa;

    scanf("%s %d %d", name, &arrears, &cgpa);

    printf("Name of the Student:%s\n", name);

    if ((arrears == 1 && cgpa > 70) || ((arrears == 1 || arrears == 2) && cgpa > 75))
        printf("%s is Eligible for Placement\n", name);
    else
        printf("%s is Not Eligible for Placement\n", name);

    return 0;
}
