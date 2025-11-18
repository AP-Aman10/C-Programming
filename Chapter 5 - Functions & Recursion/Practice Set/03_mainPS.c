#include <stdio.h>
int sumNatural(int x) {
    if (x == 0)
        return 0;
    else
        return x + sumNatural(x - 1);
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Sum of first %d natural numbers: %d\n", num, sumNatural(num));

    return 0;
}