#include <stdio.h>
int main(){
    FILE *ptr;
    int num;
    ptr = fopen("Int.txt", "r");
    fscanf(ptr, "%d", &num);
    fclose(ptr);

    ptr = fopen("Int.txt", "w");
    fprintf(ptr, "%d + %d = %d", num, num, num + num);
    fclose(ptr);
    return 0;
}