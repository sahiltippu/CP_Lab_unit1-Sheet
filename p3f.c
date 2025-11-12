//Conditional Operator
#include <stdio.h>

int main() {
    int a, b, max;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // Conditional operator to find maximum
    max = (a > b) ? a : b;

    printf("The maximum number is: %d\n", max);

    return 0;
}
