#include <stdio.h>
#include <stdbool.h>

int main() {
    bool str1 = true;
    bool str2 = false;

    printf("====*==== Logical Operators ====*====\n");
    printf("Logical AND (&&)\n");
    printf("  (True && True) := %s\n", (str1 && str1) ? "True" : "False");
    printf("  (False && False) := %s\n", (str2 && str2) ? "True" : "False");
    printf("  (True && False) := %s\n", (str1 && str2) ? "True" : "False");
    printf("  (False && True) := %s\n", (str2 && str1) ? "True" : "False");

    printf("\nLogical OR (||)\n");
    printf("  (True || False) := %s\n", (str1 || str2) ? "True" : "False");
    printf("  (False || False) := %s\n", (str2 || str2) ? "True" : "False");
    printf("  (True || False) := %s\n", (str1 || str2) ? "True" : "False");
    printf("  (False || True) := %s\n", (str2 || str1) ? "True" : "False");

    printf("\nLogical NOT (!)\n");
    printf("  (!True)  := %s\n", (!str1) ? "True" : "False");
    printf("  (!False) := %s\n", (!str2) ? "True" : "False");

    return 0;
}