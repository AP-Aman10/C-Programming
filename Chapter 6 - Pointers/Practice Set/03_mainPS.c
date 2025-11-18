#include <stdio.h>

// Function to swap two numbers using pointers
void swap(int *a, int *b) {
    int temp = *a;  // store value of a in temp
    *a = *b;        // assign value of b to a
    *b = temp;      // assign value of temp (original a) to b
}

int main() {
    int num1, num2;
    
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
    
    printf("Before swapping: num1 = %d, num2 = %d\n", num1, num2);
    
    swap(&num1, &num2);  // pass addresses of num1 and num2
    
    printf("After swapping: num1 = %d, num2 = %d\n", num1, num2);
    
    return 0;
}