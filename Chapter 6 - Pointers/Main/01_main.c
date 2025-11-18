#include <stdio.h>
int main(){
    int leo = 10;
    int *ptr = &leo; // ptr is a pointer pointing to leo (leo is an integer pointer)
    int aman = 4;
    printf("The address of Leo: %p\n", &leo);
    printf("The address of Leo: %p\n", ptr);
    printf("The address of Aman: %p\n", &aman);
    printf("====*====*====*====\n\n");

    printf("The value at address ptr: %d\n", *(&leo));
    printf("The value at address Aman: %d\n", *(&aman));
    return 0;
}