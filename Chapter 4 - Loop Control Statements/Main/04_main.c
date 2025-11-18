#include <stdio.h>
int main(){
    int num, i;
    printf("Enter the Num to Find Even & Odd: ");
    scanf("%d", &num);

    for (i = 0; i <= num; i++){
        if (i % 2 == 0){
            printf("%d:= Is an Even Number\n", i);
        }
        else{
            printf("%d:= Is an Odd Number\n", i);
        }
    }
    return 0;
}