#include <stdio.h>
#include <string.h>
struct employee{
    int code; // This declares a new user defined data type!
    float salary;
    char name[100];
}; // semicolon is important
int main(){
    struct employee e1;
    e1.code = 1045;
    strcpy(e1.name, "Aman Patidar");
    e1.salary = 10000000;

    printf("Code:= %d \nName:= %s \nSalary:= %.2f", e1.code, e1.name, e1.salary);
    return 0;
}