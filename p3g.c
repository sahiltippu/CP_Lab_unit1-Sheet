//Comma Operator
#include <stdio.h>

int main() {
    int a, b, c;

    // Using the comma operator in an assignment
    a = (b = 5, c = 10, b + c);

    printf("b = %d\n", b);
    printf("c = %d\n", c);
    printf("a = b + c = %d\n", a);

    // Using comma operator in a for loop
    printf("Using comma operator in for loop:\n");
    for (b = 1, c = 5; b <= c; b++, c--) {
        printf("b = %d, c = %d\n", b, c);
    }

    return 0;
}
