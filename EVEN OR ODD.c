#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a;
    scanf("%d",&a);
    if(a%2 == 0)
    {
        printf("The given input %d is Even",a);
    }
    else
    {
        printf("The given input %d is Odd",a);
    }
    return 0;
}
