#include <stdio.h>
int main() {
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);

    if (ch >= 'A' && ch <= 'Z') {
        printf("%c:= Is an Upper Case letter.\n", ch);
    }
    else if (ch >= 'a' && ch <= 'z') {
        printf("%c:= Is a Lower Case letter.\n", ch);
    }
    else {
        printf("%c:= Is not an alphabet letter.\n", ch);
    }

    return 0;
}
