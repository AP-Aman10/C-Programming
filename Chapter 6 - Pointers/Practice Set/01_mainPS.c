#include<stdio.h>
int main(){
    int *ptr;
    int x;

    ptr = &x;       // ptr now points to x
    *ptr = 0;       // set the value of x through ptr to 0

    printf("x = %d\n", x);
    printf("*ptr = %d\n", *ptr);
    
    *ptr += 10;     // add 10 to the value pointed by ptr (i.e., x = x + 10)
    printf("x = %d\n", x);
    printf("*ptr = %d\n", *ptr);
    
    (*ptr)++;       // increment the value pointed by ptr by 1 (x = x + 1)
    printf("x = %d\n", x);
    printf("*ptr = %d\n", *ptr);
    return 0;
}