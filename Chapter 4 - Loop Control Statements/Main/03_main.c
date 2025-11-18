#include <stdio.h>
int main(){
    int Start, End, i;
    printf("Enter the Start Num: ");
    scanf("%d", &Start);
    printf("Enter the End Num: ");
    scanf("%d", &End);

    if (Start <= End){
        // Ascending order
        for (i = Start; i <= End; i++){
            printf("Har Har Mahadev! := %d\n", i);
        }
    }
    else{
        // Descending order
        for (i = Start; i >= End; i--){
            printf("Har Har Mahadev! := %d\n", i);
        }
    }

    return 0;
}
