#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a;
    float b;
    char c,cc[100],ddd[100];
    scanf("%d %f %c",&a,&b,&c);
    scanf("%s ",cc);
    fgets(ddd,100,stdin);
    printf("Integer is %d\n",a);
    printf("Float is %.2lf\n",b);
    printf("Character is %c\n",c);
    printf("Strings are %s and %s",cc,ddd);
    return 0;
}
