#include <stdio.h>
int main(){
    float English, Hindi, Maths, Science, Social_Science, Total, Percentage;

    printf("Enter the marks of English: ");
    scanf("%f", &English);
    printf("Enter the marks of Hindi: ");
    scanf("%f", &Hindi);
    printf("Enter the marks of Maths: ");
    scanf("%f", &Maths);
    printf("Enter the marks of Science: ");
    scanf("%f", &Science);
    printf("Enter the marks of Social_Science: ");
    scanf("%f", &Social_Science);

    if ((English < 0 || English >= 100) ||
       (Hindi < 0 || Hindi >= 100) ||
       (Maths < 0 || Maths >= 100) ||
       (Science < 0 || Science >= 100) ||
        (Social_Science < 0 || Social_Science > 100)){
        printf("Error: Please enter marks between 0 and 100 for all subjects.\n");
        return 1; // Exit program with error
        Total = English + Hindi + Maths + Science + Social_Science;
        Percentage = (Total / 500.0) * 100;
        if (Percentage >= 90)
            printf("Marks: %.2f%% & Grade: A+\n", Percentage);
        else if (Percentage >= 80)
            printf("Marks: %.2f%% & Grade: A\n", Percentage);
        else if (Percentage >= 70)
            printf("Marks: %.2f%% & Grade: B\n", Percentage);
        else if (Percentage >= 60)
            printf("Marks: %.2f%% & Grade: C\n", Percentage);
        else if (Percentage >= 50)
            printf("Marks: %.2f%% & Grade: D\n", Percentage);
        else
            printf("Marks: %.2f%% & Grade: F\n", Percentage);
    }
    return 0;
}