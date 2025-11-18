#include <stdio.h>
int main() {
    FILE *ptr = fopen("Main2.txt", "r");
    if (ptr == NULL) {
        printf("File not found!\n");
        return 1;
    }

    int num;
    fscanf(ptr, "%d", &num);

    printf("The Value of Num: %d\n", num);

    fclose(ptr);
    return 0;
}