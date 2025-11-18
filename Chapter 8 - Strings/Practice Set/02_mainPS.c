#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    
    printf("Enter the encrypted password: ");
    scanf("%s", str); // take input from user

    // Decrypt: shift each character by -1
    for (int i = 0; str[i] != '\0'; i++) {
        str[i] = str[i] - 1;
    }

    printf("Decrypted Password: %s\n", str);
    
    return 0;
}