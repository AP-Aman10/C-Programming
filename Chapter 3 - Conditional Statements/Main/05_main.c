#include <stdio.h>

int main() {
    int num;

    printf("Enter your Num: ");
    scanf("%d", &num);

    // Check if num is divisible by 2 using ternary operator
    (num % 2 == 0) ? 
        printf("Your num is divisible by 2.\n") : 
        printf("Your num is not divisible by 2.\n");

    return 0;
}
