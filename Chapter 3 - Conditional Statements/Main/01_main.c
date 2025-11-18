#include <stdio.h>

int main() {
    int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    // Check if age is greater than 10
    if (age >= 18) {
        printf("Your age is greater than 18.\n");
    } 
    if (age <= 18) {
        printf("Your age is 17 or less.\n");
    }

    return 0;
}
