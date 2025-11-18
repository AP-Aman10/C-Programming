#include <stdio.h>
int main(){
    int num, i;
    printf("Enter the End Num: ");
    scanf("%d", &num);
    for (i = num; i >= 1; i--){
        printf("Har Har Mahadev!:= %d\n", i);
    }
    return 0;
}