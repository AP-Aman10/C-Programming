#include <stdio.h>

float celsiusToFahrenheit(float celsius){
    return (celsius * 9 / 5) + 32;
}
float fahrenheitToCelsius(float fahrenheit){
    return (fahrenheit - 32) * 5 / 9;
}

int main(){
    int choice;
    float temp;

    printf("Temperature Conversion Menu:\n");
    printf("1. Celsius to Fahrenheit\n");
    printf("2. Fahrenheit to Celsius\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    if (choice == 1){
        printf("Enter temperature in Celsius: ");
        scanf("%f", &temp);
        printf("Temperature in Fahrenheit: %.2f`F\n", celsiusToFahrenheit(temp));
    }
    else if (choice == 2){
        printf("Enter temperature in Fahrenheit: ");
        scanf("%f", &temp);
        printf("Temperature in Celsius: %.2f`C\n", fahrenheitToCelsius(temp));
    }
    else{
        printf("Invalid choice!\n");
    }

    return 0;
}
