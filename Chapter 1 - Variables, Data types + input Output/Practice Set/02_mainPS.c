#include <stdio.h>
int main() {
    float radius, area, pi = 3.14;

    printf("Enter the radius of the Circle: ");
    scanf("%f", &radius);

    area = pi * (radius * radius);

    printf("The area of the Circle: %.2f\n", area);

    return 0;
}