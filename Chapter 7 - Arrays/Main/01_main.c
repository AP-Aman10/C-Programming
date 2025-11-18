#include <stdio.h>
int main(){
    int marks[90], Sum = 0; // Reserve space to store 90 integers
    marks[0] = 94;
    marks[1] = 90;
    marks[2] = 99;
    marks[3] = 92;
    marks[4] = 98;
    // We can go all the way till marks[89] 
    printf("Marks of Hindi:= %d\n", marks[0]);
    printf("Marks of English:= %d\n", marks[1]);
    printf("Marks of Maths:= %d\n", marks[2]);
    printf("Marks of Science:= %d\n", marks[3]);
    printf("Marks of Social Science:= %d\n\n", marks[4]);

    Sum = marks[0]+marks[1]+marks[2]+marks[3]+marks[4];

    printf("The Sum of Marks:= %d", Sum);
    return 0;
}