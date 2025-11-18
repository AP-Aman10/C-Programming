#include <stdio.h>
int main(){
    int num;
    while (1){
        printf("Enter a number: ");
        scanf("%d", &num);

        if (num % 2 != 0){
            printf("You entered an odd number (%d). Program stopped.\n", num);
            break;
        }
        else{
            printf("%d is even. Try again.\n", num);
        }
    }

    return 0;
}
