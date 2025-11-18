#include <stdio.h>
int main(){
    int num1, num2;
    printf("Enter num1: ");
    scanf("%d", &num1);
    printf("Enter num2: ");
    scanf("%d", &num2);

    printf("\n====*==== Relational Operators ====*====\n");
    printf("Equal to (==): %d == %d := %s\n", num1, num2, (num1 == num2) ? "True" : "False");
    printf("Not equal to (!=): %d != %d := %s\n", num1, num2, (num1 != num2) ? "True" : "False");
    printf("Greater than (>): %d > %d := %s\n", num1, num2, (num1 > num2) ? "True" : "False");
    printf("Less than (<): %d < %d := %s\n", num1, num2, (num1 < num2) ? "True" : "False");
    printf("Greater than or equal to (>=): %d >= %d := %s\n", num1, num2, (num1 >= num2) ? "True" : "False");
    printf("Less than or equal to (<=): %d <= %d := %s\n", num1, num2, (num1 <= num2) ? "True" : "False");

    return 0;
}