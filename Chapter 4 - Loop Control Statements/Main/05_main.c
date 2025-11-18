#include <stdio.h>
int main(){
    int num, i;
    printf("Enter the num: ");
    scanf("%d", &num);

    i = 1;
    while (i <= num){
        printf("Har Har Mahadev!:= %d\n", i);
        i++;
    }
    return 0;
}

