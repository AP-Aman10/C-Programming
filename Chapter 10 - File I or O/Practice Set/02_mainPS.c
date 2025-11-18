#include <stdio.h>
int main(){
    FILE *fptr;

    for (int num = 1; num <= 20; num++){
        char filename[50];

        snprintf(filename, sizeof(filename), "Tables/Table_%d.txt", num);

        fptr = fopen(filename, "w");
        if (fptr == NULL){
            printf("Error opening file %s.\n", filename);
            return 1;
        }
        fprintf(fptr, "Multiplication Table:= %d\n", num);
        for (int i = 1; i <= 10; i++){
            fprintf(fptr, "%d x %d = %d\n", num, i, num * i);
        }

        fclose(fptr);
        printf("Table for %d written to %s\n", num, filename);
    }
    return 0;
}