#include <stdio.h>
#include <math.h>

int main(){
    double num, square;
    printf("Enter a number: ");
    scanf("%lf", &num);

    square = pow(num, 2);

    printf("The square of %.2lf is %.2lf\n", num, square);

    return 0;
}