#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(0));
    int player, computer = rand() % 3;
    /*
        0 --> Stone
        1 --> Paper
        2 --> Sizer
    */
    printf("Choose \n0 for Stone \n1 for Paper \n2 for Sizer: ");
    scanf("%d", &player);
    printf("-------------------\n");
    printf("Player Chose: %d\n",player);
    printf("Computer chose %d\n", computer);
    printf("-------------------\n");
    if (player == 0 && computer == 0){
        printf("Its a Draw!\n");
    }
    else if (player == 0 && computer == 1){
        printf("You Lose!\n");
    }
    else if (player == 0 && computer == 2){
        printf("You Win!\n");
    }
    else if (player == 1 && computer == 0){
        printf("You Win!\n");
    }
    else if (player == 1 && computer == 1){
        printf("Its a Draw!\n");
    }
    else if (player == 1 && computer == 2){
        printf("You Lose!\n");
    }
    else if (player == 2 && computer == 0){
        printf("You Lose!\n");
    }
    else if (player == 2 && computer == 1){
        printf("You Win!\n");
    }
    else if (player == 2 && computer == 2){
        printf("Its a Draw!\n");
    }
    else{
        printf("Something went wrong!");
    }
    return 0;
}