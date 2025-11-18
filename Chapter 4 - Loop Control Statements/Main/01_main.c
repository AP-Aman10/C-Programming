#include <stdio.h>
int main(){
    int num, i;
    printf("Enter the Num: ");
    scanf("%d", &num);
    for (i = 1; i <= num; i++){
        printf("Har Har Mahadev!:= %d\n", i);
    }
    return 0;
}