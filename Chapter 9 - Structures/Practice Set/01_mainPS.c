#include <stdio.h>
struct vector{
    int i;
    int j;
};

int main(){
    int num1, num2;
    printf("Enter the Num1: ");
    scanf("%d", &num1);
    printf("Enter the Num2: ");
    scanf("%d", &num2);
    
    struct vector v = {num1, num2};
    printf("The value of vector:= %di + %dj", v.i, v.j);
    return 0;
}