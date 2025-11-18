#include <stdio.h>
#include <string.h>

struct employee{
    int code;
    char name[100];
    float salary;
};

int main(){
    int num, i;

    printf("Enter the number of employees: ");
    scanf("%d", &num);

    getchar();
    struct employee e[num];

    for (i = 0; i < num; i++){
        printf("\n====*====[Employee No:= %d]====*====\n", i + 1);
        printf("Enter the code: ");
        scanf("%d", &e[i].code);

        getchar();

        printf("Enter the name: ");
        fgets(e[i].name, sizeof(e[i].name), stdin);

        e[i].name[strcspn(e[i].name, "\n")] = '\0';

        printf("Enter the salary: ");
        scanf("%f", &e[i].salary);

        getchar();
    }
    for (i = 0; i < num; i++){
        printf("\nEmployee details: %d\n", i + 1);
        printf("Code: %d\n", e[i].code);
        printf("Name: %s\n", e[i].name);
        printf("Salary: %.2f\n", e[i].salary);
    }
    return 0;
}
