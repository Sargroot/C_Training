#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int x;
    scanf("%d",&x);
    if(x > 0)
    {
        printf("The Given Number %d is Positive.\n",x);
    }
    else if(x <0)
    {
        printf("The Given Number %d is Negative.\n",x);
    }
    else
    {
        printf("The Given Number %d is Zero.\n",x);
    }
    return 0;
}



