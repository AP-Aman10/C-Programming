#include <stdio.h>
int main(){
    int num, i;
    printf("Enter the Num: ");
    scanf("%d", &num);

    i = 1;
    do{
        printf("Har Har Mahadev!:= %d\n", i);
        i++;
    } while (i <= num);
    return 0;
}