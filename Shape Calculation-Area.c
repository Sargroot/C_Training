#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int side , l, b,rad,bas,h;
    scanf("%d %d %d %d %d %d",&side,&l, &b,&rad,&bas,&h);
    printf("Area of Square=%d\n",side*side);
    printf("Area of Rectangle=%d\n",l*b);
    printf("Area of Circle=%.2f\n",(3.141)*(rad*rad));
    
    printf("Area of Triangle=%d",h*3);

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
