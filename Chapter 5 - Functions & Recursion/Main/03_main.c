#include <stdio.h>

int change(int a) {
    a = 77;
    printf("Inside change(): a = %d\n", a);
    return a;
}

int main() {
    int b = 22;
    b = change(b);
    printf("b is %d\n", b);
    return 0;
}