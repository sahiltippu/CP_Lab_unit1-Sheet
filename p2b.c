//C program for Input and Display Various Data Types
#include <stdio.h>

int main() {
    int integer;
    float floating;
    char character;
    double doub;
    char string[50];

    // Input section
    printf("Enter an integer: ");
    scanf("%d", &integer);

    printf("Enter a float: ");
    scanf("%f", &floating);

    // To consume the newline left in the buffer before reading a character
    getchar();

    printf("Enter a character: ");
    scanf("%c", &character);

    printf("Enter a double: ");
    scanf("%lf", &doub);

    printf("Enter a string: ");
    scanf("%s", string);

    // Display section
    printf("\nYou entered:\n");
    printf("Integer: %d\n", integer);
    printf("Float: %f\n", floating);
    printf("Character: %c\n", character);
    printf("Double: %lf\n", doub);
    printf("String: %s\n", string);

    return 0;
}
