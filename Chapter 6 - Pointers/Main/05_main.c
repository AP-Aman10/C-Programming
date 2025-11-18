#include <stdio.h>

void swap(int* x, int* y);  // Function declaration
void swap(int* x, int* y) {
    int temp;
    temp = *x;  // Store the value at address x
    *x = *y;    // Copy the value at address y into address x
    *y = temp;  // Copy the stored value into address y
}

int main() {
    int num1, num2;
    printf("Enter the Num1: ");
    scanf("%d", &num1);
    printf("Enter the Num2: ");
    scanf("%d", &num2);

    printf("\nBefore swapping: num1 = %d, num2 = %d\n", num1, num2);

    swap(&num1, &num2);  // Pass addresses to swap

    printf("After swapping: num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}
