#include <stdio.h>
int main() {
    int num;
    printf("Enter the Num: ");
    scanf("%d", &num);

    printf("Number is Divisible By 2 := %s\n", (num % 2 == 0) ? "True" : "False");

    return 0;
}