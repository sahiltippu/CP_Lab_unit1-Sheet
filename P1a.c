
//C program for receiving an input from the user at runtime and printing it

#include <stdio.h>

int main() {
    int number; // Declare an integer variable

    // Ask user for input
    printf("Enter a number: ");
    scanf("%d", &number); // Read integer input from user

    // Print the input value back
    printf("You entered: %d\n", number);

    return 0;
}
