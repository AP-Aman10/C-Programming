#include <stdio.h>
int main() {
    int size, i, j, k;
    printf("Enter the size: ");
    scanf("%d", &size);

    // upper half
    for (i = 1; i <= size; i++) {
        for (j = i; j < size; j++)
            printf("  ");
        for (k = 1; k <= (2 * i - 1); k++) {
            if (k == 1 || k == (2 * i - 1))
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }

    // lower half
    for (i = size - 1; i >= 1; i--) {
        for (j = size; j > i; j--)
            printf("  ");
        for (k = 1; k <= (2 * i - 1); k++) {
            if (k == 1 || k == (2 * i - 1))
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }

    return 0;
}