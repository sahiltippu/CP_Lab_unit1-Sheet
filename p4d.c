//Nested if: positivity of two numbers
#include <stdio.h>

int main() {
    int num1, num2;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    // Check for positivity using nested if
    if (num1 > 0) {
        printf("First number is positive.\n");
        if (num2 > 0) {
            printf("Second number is also positive.\n");
        } else {
            printf("Second number is not positive.\n");
        }
    } else {
        printf("First number is not positive.\n");
        if (num2 > 0) {
            printf("Second number is positive.\n");
        } else {
            printf("Second number is not positive.\n");
        }
    }

    return 0;
}
