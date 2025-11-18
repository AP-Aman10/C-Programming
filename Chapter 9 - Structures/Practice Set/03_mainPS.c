#include <stdio.h>

typedef struct c{
    int real;
    int imaginary;
} Complex;

int main(){
    int num1, num2;
    printf("Enter the Num1: ");
    scanf("%d", &num1);
    printf("Enter the Num2: ");
    scanf("%d", &num2);

    Complex c = {num1, num2};
    printf("The value of Complex number is %d + %di ", c.real, c.imaginary);
    return 0;
}