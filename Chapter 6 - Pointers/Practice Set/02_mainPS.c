#include <stdio.h>

int main() {
    int i = 45;       // a normal integer
    int *ptr = &i;       // pointer to i
    int **pptr = &ptr;     // pointer to pointer to i

    // Print value using pointer to pointer
    printf("Value of i: %d\n", **pptr);

    return 0;
}
