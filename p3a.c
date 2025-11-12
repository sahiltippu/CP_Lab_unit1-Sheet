//C Program to Perform Arithmetic Operation
#include <stdio.h>

int main() {
    int num1, num2;
    
    // Input two numbers
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    // Perform and display arithmetic operations
    printf("Addition: %d + %d = %d\n", num1, num2, num1 + num2);
    printf("Subtraction: %d - %d = %d\n", num1, num2, num1 - num2);
    printf("Multiplication: %d * %d = %d\n", num1, num2, num1 * num2);

    // To avoid division by zero
    if(num2 != 0) {
        printf("Division: %d / %d = %.2f\n", num1, num2, (float)num1 / num2);
    } else {
        printf("Division by zero is not possible.\n");
    }

    return 0;
}
