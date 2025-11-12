//Logical Operator
#include <stdio.h>

int main() {
    int a = 5, b = 10;

    // Logical AND
    printf("(a == 5) && (b == 10): %d\n", (a == 5) && (b == 10));

    // Logical OR
    printf("(a == 5) || (b == 20): %d\n", (a == 5) || (b == 20));

    // Logical NOT
    printf("!(a == b): %d\n", !(a == b));

    return 0;
}
