#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    printf("x-coordinate:%d\n",a);
    printf("y-coordinate:%d\n",b);
    printf("Length:%d\n",c);
    printf("Centre of the ground is at (%d,%d)",a+(c/2),b+(c/2));

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
