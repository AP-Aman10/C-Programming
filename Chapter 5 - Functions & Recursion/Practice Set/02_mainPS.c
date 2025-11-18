#include <stdio.h>
int Factorial(int x) {
    if (x == 1 || x == 0)
        return 1;
    else
        return x * Factorial(x - 1);
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("The Factorial of %d: %d\n", num, Factorial(num));

    return 0;
}