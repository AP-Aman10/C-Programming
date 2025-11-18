#include <stdio.h>
int main(){
    int num1, num2, result;

    printf("Enter the Num1: ");
    scanf("%d", &num1);
    printf("Enter the Num2: ");
    scanf("%d", &num2);

    printf("\n====*==== Assignment Operators ====*====\n\n");

    // Simple assignment
    result = num1;
    printf("1) result = num1 := result = %d\n", result);

    // Addition assignment
    result = num1;
    result += num2;
    printf("2) result += num2 := result = %d\n", result);

    // Subtraction assignment
    result = num1;
    result -= num2;
    printf("3) result -= num2 := result = %d\n", result);

    // Multiplication assignment
    result = num1;
    result *= num2;
    printf("4) result *= num2 := result = %d\n", result);

    // Division assignment
    result = num1;
    if (num2 != 0){
        result /= num2;
        printf("5) result /= num2 := result = %d\n", result);
    }
    else{
        printf("5) Division by zero is not allowed.\n");
    }

    // Modulus assignment
    result = num1;
    if (num2 != 0){
        result %= num2;
        printf("6) result %%= num2 := result = %d\n", result);
    }
    else{
        printf("6) Modulus by zero is not allowed.\n");
    }

    return 0;
}