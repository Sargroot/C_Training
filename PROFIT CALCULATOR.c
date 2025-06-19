#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int x,a,b;
    scanf("%d %d %d",&x,&a,&b);
    printf("Number of copies sold:%d\n",x);
    printf("Cost of each copy:%d\n",a);
    printf("Cost spent by agency on each newspaper:%d\n",b);
    float g =((x*a)-(x*b))-100;
    printf("The profit obtained is Rs.%.2f",g);
    return 0;
}
