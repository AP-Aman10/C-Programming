#include <stdio.h>
typedef struct vector{
    int i;
    int j;
} V;

V sumVector(V v1, V v2){
    V v3 = {v1.i + v2.i, v1.j + v2.j};
    return v3;
}

int main(){
    int num1, num2, num3, num4;
    printf("Enter the Num1, Num2: ");
    scanf("%d %d", &num1, &num2);
    printf("Enter the Num3, Num4: ");
    scanf("%d %d", &num3, &num4);

    V v1 = {num1, num2};
    V v2 = {num3, num4};
    V v3 = sumVector(v1, v2);
    printf("The value of vector3:= %di + %dj", v3.i, v3.j);
    return 0;
}