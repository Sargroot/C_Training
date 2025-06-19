#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char name[50];
    int m1, m2, m3, m4, m5;
    int total;
    float average;

    scanf("%s", name);
    scanf("%d", &m1);
    scanf("%d", &m2);
    scanf("%d", &m3);
    scanf("%d", &m4);
    scanf("%d", &m5);

    total = m1 + m2 + m3 + m4 + m5;
    average = total / 5.0f;

    printf("Name of the Student:%s\n", name);
    printf("Total marks:%d\n", total);
    printf("Average marks:%.1f\n", average);

    return 0;
}

