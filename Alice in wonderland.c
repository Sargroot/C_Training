#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a,a1,a2;
    scanf("%d",&a);
        a1=a%10,a2=a/10;

    printf("Bird said:%d\n",a);
    printf("Alice must go in path-%d",a1+a2);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
