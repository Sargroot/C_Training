#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    scanf("%s", s);
    int len = strlen(s);

    for (int i = 0; i < len; i++) {
        if (i == 0) {
            for (int j = 0; j < len; j++)
                printf("%c", s[j]);
        } else if (i == len - 1) {
            for (int j = len - 1; j >= 0; j--)
                printf("%c", s[j]);
        } else {
            printf("%c", s[i]);
            for (int j = 0; j < len - 2; j++)
                printf(" ");
            printf("%c", s[len - 1 - i]);
        }
        printf("\n");
    }

    return 0;
}
