#include <stdio.h>
int main() {
    int size, i, j, k;
    printf("Enter the Size: ");
    scanf("%d", &size);

    for (i = 1; i <= size; i++) {
        for (j = i; j < size; j++)
            printf("  ");
        for (k = 1; k <= (2 * i - 1); k++)
            printf("* ");
        printf("\n");
    }
    return 0;
}
