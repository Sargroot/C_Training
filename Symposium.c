#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int dept;
    char event;

    printf("Welcome to AsInTra\n");
    printf("1.CSE\n2.ECE\n3.MECH\n4.CIVIL\n");
    printf("Enter Department\n");
    scanf("%d", &dept);

    switch (dept) {
        case 1:
            printf("Go Straight\n");
            printf("Welcome to CSE Department\n");
            printf("a.Coding\nb.Web Designing\nc.Database\n");
            printf("Enter Event\n");
            scanf(" %c", &event);
            switch (event) {
                case 'a':
                    printf("Go to hall S108\n");
                    break;
                case 'b':
                    printf("Go to hall S208\n");
                    break;
                case 'c':
                    printf("Go to hall S206\n");
                    break;
                default:
                    printf("No Event exist\n");
            }
            break;

        case 2:
            printf("Go Right\n");
            printf("Welcome to ECE Department\n");
            printf("a.Project Expo\nb.PPT\nc.Circuit Debug\n");
            printf("Enter Event\n");
            scanf(" %c", &event);
            switch (event) {
                case 'a':
                    printf("Go to hall M108\n");
                    break;
                case 'b':
                    printf("Go to hall M208\n");
                    break;
                case 'c':
                    printf("Go to hall M206\n");
                    break;
                default:
                    printf("No Event exist\n");
            }
            break;

        case 3:
            printf("Go Left\n");
            printf("Welcome to MECH Department\n");
            printf("a.BottleRocketery\nb.PPT\nc.Mad 4 CAD\n");
            printf("Enter Event\n");
            scanf(" %c", &event);
            switch (event) {
                case 'a':
                    printf("Go to hall N108\n");
                    break;
                case 'b':
                    printf("Go to hall N208\n");
                    break;
                case 'c':
                    printf("Go to hall N206\n");
                    break;
                default:
                    printf("No Event exist\n");
            }
            break;

        case 4:
            printf("Go Straight and turn Left\n");
            printf("Welcome to CIVIL Department\n");
            printf("a.CADD Quest\nb.Brick Bonding\nc.Model Making\n");
            printf("Enter Event\n");
            scanf(" %c", &event);
            switch (event) {
                case 'a':
                    printf("Go to hall C108\n");
                    break;
                case 'b':
                    printf("Go to hall C208\n");
                    break;
                case 'c':
                    printf("Go to hall C206\n");
                    break;
                default:
                    printf("No Event exist\n");
            }
            break;

        default:
            printf("Wrong Input\n");
    }

    return 0;
}
