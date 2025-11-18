#include <stdio.h>
int main() {
    FILE *ptr = fopen("Main.txt", "r");
    if (ptr == NULL) {
        printf("File not found!\n");
        return 1;
    }
 
    fclose(ptr);
    return 0;
}