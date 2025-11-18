#include <stdio.h>
int main() {
    int num;
    char str;
    float pi;

    printf("Enter the num: ");
    scanf("%d", &num);

    printf("Enter the Char: ");
    scanf(" %c", &str);

    printf("Enter the Value of Pi: ");
    scanf("%f", &pi);

    printf("\nThe value of num: %d\n", num);
    printf("The value of Char: %c\n", str);
    printf("The value of Pi: %.2f\n", pi);
    
    return 0;
}
