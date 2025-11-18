#include <stdio.h>
int main(){
    int num, i;
    printf("Enter the num: ");
    scanf("%d", &num);

    for (i = 1; i <= num; i++){
        if (i % 4 == 0){
            continue;
        }
        printf("%d\t", i);
    }
    return 0;
}