#include <stdio.h>

int sum(int *, int *); // Function declaration (prototype)
int sum(int* x, int* y) { 
    // Function definition
    // Now x and y are pointers (addresses of num1 and num2)
    *x = 100;  // This WILL affect the original variable 'num1' in main
    return (*x + *y);
}

int main() {
    int num1, num2;
    printf("Enter the num1: ");
    scanf("%d", &num1);
    printf("Enter the num2: ");
    scanf("%d", &num2);
    printf("====*====*====*====\n\n");

    printf("The value of num1 before sum(): %d\n", num1);
    printf("The value of num2 before sum(): %d\n", num2);

    printf("The sum of %d and %d: %d\n", num1, num2, sum(&num1, &num2));

    printf("\nAfter calling sum():\n");
    printf("The value of num1: %d\n", num1);
    printf("The value of num2: %d\n", num2);

    return 0;
}