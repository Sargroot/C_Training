#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;
    scanf(" %c", &ch);
    
    if (isalpha(ch)) {
        char lower = tolower(ch);
        if (lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u')
            printf("The Character %c is Vowel\n", ch);
        else
            printf("The Character %c is Consonant\n", ch);
    } else {
        printf("Invalid Input\n");
    }

    return 0;
}
