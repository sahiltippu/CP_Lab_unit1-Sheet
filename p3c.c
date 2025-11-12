//Increment/Decrement Operator
#include <stdio.h>

int main() {
    int x = 5;

    printf("Initial value of x: %d\n", x);

    // Increment operator
    x++; // Same as x = x + 1
    printf("After increment (x++): %d\n", x);

    // Decrement operator
    x--; // Same as x = x - 1
    printf("After decrement (x--): %d\n", x);

    // Pre-increment and pre-decrement
    printf("Pre-increment (++x): %d\n", ++x);
    printf("Pre-decrement (--x): %d\n", --x);

    return 0;
}
