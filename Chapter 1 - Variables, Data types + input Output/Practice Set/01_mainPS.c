#include <stdio.h>
int main() {
    float size, area;

    printf("Enter the size of the square: ");
    scanf("%f", &size);

    area = size * size;  // Calculate area

    printf("The area of the square: %.2f\n", area);

    return 0;
}