#include <stdio.h>
int main() {
    int num, i, j;

    printf("Enter the number of tables to print: ");
    scanf("%d", &num);

    int Table[num]; // Declare an array to store the tables

    // Input the numbers for which tables will be printed
    for(i = 0; i < num; i++) {
        printf("Enter the number for Table[%d]: ", i + 1);
        scanf("%d", &Table[i]);
    }

    // Print the multiplication tables
    for(i = 0; i < num; i++) {
        printf("\nMultiplication Table of %d:\n", Table[i]);
        for(j = 1; j <= 10; j++) {
            printf("%d X %d = %d\n", Table[i], j, Table[i] * j);
        }
    }
    return 0;
}