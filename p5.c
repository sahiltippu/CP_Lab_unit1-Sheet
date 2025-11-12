//C program to perform all Arithmetic Operations ( + , - , * , / )
#include <stdio.h>

int main() {
    float num1, num2;

    // Input two numbers
    printf("Enter first number: ");
    scanf("%f", &num1);

    printf("Enter second number: ");
    scanf("%f", &num2);

    // Addition
    printf("Addition: %.2f + %.2f = %.2f\n", num1, num2, num1 + num2);

    // Subtraction
    printf("Subtraction: %.2f - %.2f = %.2f\n", num1, num2, num1 - num2);

    // Multiplication
    printf("Multiplication: %.2f * %.2f = %.2f\n", num1, num2, num1 * num2);

    // Division (check for division by zero)
    if(num2 != 0) {
        printf("Division: %.2f / %.2f = %.2f\n", num1, num2, num1 / num2);
    } else {
        printf("Division by zero is not possible.\n");
    }

    return 0;
}
