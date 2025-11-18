#include <stdio.h>

// Function declarations
double areaTriangle(double base, double height);
double areaSquare(double side);
double areaCircle(double radius);
double areaRectangle(double length, double breadth);

// Function definitions
double areaTriangle(double base, double height){
    return (base * height) / 2;
}

double areaSquare(double side){
    return side * side;
}

double areaCircle(double radius){
    return 3.14 * radius * radius;
}

double areaRectangle(double length, double breadth){
    return length * breadth;
}

int main(){
    int choice;
    double base, height, side, radius, length, breadth, area;

    printf("Choose a shape to find the area:\n");
    printf("1. Triangle\n");
    printf("2. Square\n");
    printf("3. Circle\n");
    printf("4. Rectangle\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    switch (choice){
    case 1:
        printf("Enter the Base: ");
        scanf("%lf", &base);
        printf("Enter the Height: ");
        scanf("%lf", &height);
        area = areaTriangle(base, height);
        printf("Area of Triangle = %.2lf\n", area);
        break;

    case 2:
        printf("Enter side length: ");
        scanf("%lf", &side);
        area = areaSquare(side);
        printf("Area of Square = %.2lf\n", area);
        break;

    case 3:
        printf("Enter the radius: ");
        scanf("%lf", &radius);
        area = areaCircle(radius);
        printf("Area of Circle = %.2lf\n", area);
        break;

    case 4:
        printf("Enter the Length: ");
        scanf("%lf", &length);
        printf("Enter the Breadth: ");
        scanf("%lf", &breadth);
        area = areaRectangle(length, breadth);
        printf("Area of Rectangle = %.2lf\n", area);
        break;

    default:
        printf("Invalid choice!\n");
    }

    return 0;
}
