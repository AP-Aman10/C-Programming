#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    srand(time(0));
    int randomNumber = (rand() % 100) + 1, no_of_guesses = 0, guessed_number;
    do{
        printf("Guess the number: ");
        scanf("%d", &guessed_number);
        if (guessed_number > randomNumber){
            printf("Guess Lower number please!\n");
        }
        else if (guessed_number < randomNumber){
            printf("Guess Higher number please!\n");
        }
        else{
            printf("Congrats!!\n");
        }
        no_of_guesses++;
    } while (guessed_number != randomNumber);
    printf("You guessed the number in %d guesses", no_of_guesses);
    return 0;
}