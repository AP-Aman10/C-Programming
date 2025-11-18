#include<stdio.h>
#include<math.h>
int main() {
    int num1, num2;
    printf("Enter the num1: ");
    scanf("%d", &num1);
    printf("Enter the num2: ");
    scanf("%d", &num2);

    printf("Addition of %d + %d = %d\n", num1, num2, num1 + num2);
    printf("Subtraction of %d - %d = %d\n", num1, num2, num1 - num2);
    printf("Multiplication of %d * %d = %d\n", num1, num2, num1 * num2);
    printf("Division of %d / %d = %.2f\n", num1, num2, (double)num1 / num2);
    printf("Modulo of %d %% %d = %d\n", num1, num2, num1 % num2);
    printf("Exponentiation of %d ^ %d = %.0f\n", num1, num2, pow(num1, num2));

    return 0;
}