#include <stdio.h>
#include <string.h>

int main(){
    char str[100];
    printf("Enter the Password: ");
    scanf("%s", str);

    for (int i = 0; str[i] != '\0'; i++){
        str[i] = str[i] + 1;
    }

    printf("Encrypted Password: %s\n", str);
    return 0;
}
