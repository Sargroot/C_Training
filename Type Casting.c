#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a ,b;
    char c ,d;
    
    scanf("%d ",&a);
    scanf("%c ",&c);
    b = (int)c;
    d = (char)a;
    printf("Integer of %d is %c\n",a,d);
    printf("Character of %c is %d",c,b);

    
    
    return 0;
}
