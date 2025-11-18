#include <stdio.h>
int main() {
    int num, i;
    float Price[100], sum = 0, Total;

    printf("Enter the number of items: ");
    scanf("%d", &num);

    for (i = 0; i < num; i++) {
        printf("Enter Price[%d]: ", i);
        scanf("%f", &Price[i]);
    }
    printf("====*====*====*====\n\n");

    for (i = 0; i < num; i++) {
        Total = Price[i] + (0.18f * Price[i]);
        printf("Final Price[%d]: %.2f\n", i, Total);
        sum += Total;
    }
    printf("====*====*====*====\n\n");

    printf("Total Price: %.2f\n", sum);
    return 0;
}