#include <stdio.h>
int main(){
    int num, i, fact = 1;
    printf("Enter the Num: ");
    scanf("%d", &num);

    for (i = 1; i <= num; i++){
        fact *= i;
    }
    printf("The Factorial of %d:= %d", num, fact);
    return 0;
}