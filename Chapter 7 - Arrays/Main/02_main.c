#include <stdio.h>

int main() {
    int marks[100];
    int num;
    
    printf("Enter the number of students: ");
    scanf("%d", &num);

    for (int i = 0; i < num; i++) {
        printf("Enter marks of %d students: ", i);
        scanf("%d", &marks[i]);
    }
    printf("====*====*====*====*====*====\n\n");

    for (int i = 0; i < num; i++) {
        printf("The value of marks at index %d: %4d\n", i, marks[i]);
    }

    return 0;
}
