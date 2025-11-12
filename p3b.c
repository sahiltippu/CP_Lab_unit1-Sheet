//C Program for swapping of two numbers.
#include <stdio.h>

int main() {
    int a, b, temp;

    // Input two numbers
    printf("Enter value of a: ");
    scanf("%d", &a);

    printf("Enter value of b: ");
    scanf("%d", &b);

    // Swapping
    temp = a;
    a = b;
    b = temp;

    // Output swapped values
    printf("After swapping:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    return 0;
}
