//Program to calculate the sum of first n natural numbers- do-while loop
#include <stdio.h>

int main() {
    int n, i = 1, sum = 0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    do {
        sum = sum + i;
        i++;
    } while(i <= n);

    printf("Sum of first %d natural numbers = %d\n", n, sum);

    return 0;
}
