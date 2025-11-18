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
    printf("Enter your Name: ");
    scanf("%s", str);

    printf("Your Name:= %s", str);
    return 0;
}