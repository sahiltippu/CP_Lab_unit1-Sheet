//Number Comparison (find biggest number)
#include <stdio.h>

int main() {
    int a, b;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    if (a > b) {
        printf("%d is bigger than %d\n", a, b);
    } else if (b > a) {
        printf("%d is bigger than %d\n", b, a);
    } else {
        printf("Both numbers are equal.\n");
    }

    return 0;
}
