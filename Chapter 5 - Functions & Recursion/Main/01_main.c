#include <stdio.h>
#include <math.h>

void calculator(int, int);
void calculator(int x, int y) {
    printf("\n");
    printf("Addition: %d + %d = %d\n", x, y, x + y);
    printf("Subtraction: %d - %d = %d\n", x, y, x - y);
    printf("Division: %d / %d = %.2f\n", x, y, (float)x / y);
    printf("Multiplication: %d * %d = %d\n", x, y, x * y);
    printf("Modular: %d %% %d = %d\n", x, y, x % y);
    printf("Exponentiation: %d ^ %d = %.0f\n", x, y, pow(x, y));
}

int main() {
    int num1, num2;
    printf("Enter the Num1: ");
    scanf("%d", &num1);
    printf("Enter the Num2: ");
    scanf("%d", &num2);

    calculator(num1, num2);
    return 0;
}