#include <stdio.h>
int main() {
    int size, i, j, k;
    printf("Enter the Size: ");
    scanf("%d", &size);

    // upper half
    for (i = 1; i <= size; i++) {
        for (j = i; j < size; j++)
            printf("  ");
        for (k = 1; k <= (2 * i - 1); k++)
            printf("* ");
        printf("\n");
    }

    // lower half
    for (i = size - 1; i >= 1; i--) {
        for (j = size; j > i; j--)
            printf("  ");
        for (k = 1; k <= (2 * i - 1); k++)
            printf("* ");
        printf("\n");
    }

    return 0;
}
