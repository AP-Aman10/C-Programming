#include <stdio.h>
void printString(char arr[]);
void printString(char arr[]){
    int i;
    for (i = 0; arr[i] != '\0'; i++){
        printf("%c", arr[i]);
    }
    printf("\n");
}

int main(){
    char str[100];
    printf("Enter your Full Name: ");
    fgets(str, sizeof(str), stdin); // Reads full line including spaces

    printf("Your Name: %s", str);
    return 0;
}