#include <stdio.h>
int main(){
    int num, i, sum = 0;
    printf("Enter the num: ");
    scanf("%d", &num);

    for (i = 1; i <= num; i++){
        sum += i;
    }
    printf("The Sum of First n Natural numbers:= %d", sum);
    return 0;
}