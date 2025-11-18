#include <stdio.h>

int main() {
    int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    // Check age using if, else if, and else
    if (age > 18) {
        printf("Your age is greater than 18.\n");
    } 
    else if (age == 18) {
        printf("You are exactly 18 years old.\n");
    } 
    else {
        printf("Your age is less than 18.\n");
    }

    return 0;
}
