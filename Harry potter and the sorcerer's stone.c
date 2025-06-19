#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int a,a1,a2;
    scanf("%d",&a);
    a1=a%10;
    a2=a/1000;
    printf("%d",a1+a2);
    
    return 0;
}