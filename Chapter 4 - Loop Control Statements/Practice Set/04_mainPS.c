#include <stdio.h>
int main(){
    int num, i, j, isPrime;

    printf("Enter the number to find prime numbers up to: ");
    scanf("%d", &num);

    printf("Prime numbers from 2 to %d are:\n", num);

    for (i = 0; i <= num; i++){
        isPrime = 1; // assume number is prime

        for (j = 2; j * j <= i; j++){ // check divisibility
            if (i % j == 0){
                isPrime = 0;
                break;
            }
        }

        if (isPrime){
            printf("%d:= Is an Prime Number\n", i);
        }
    }

    return 0;
}