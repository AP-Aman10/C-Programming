#include <stdio.h>
int main(){
    int leo = 10;
    int* ptr = &leo;
    int** leo1 = &ptr;

    printf("The value of Leo: %d\n", leo);
    printf("The value of Leo: %d\n", *ptr);
    printf("The value of Leo: %d\n", *(&leo));
    printf("The value of Leo: %d\n", **(&ptr));
    return 0;
}