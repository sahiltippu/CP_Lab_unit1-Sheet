// Program to Compute Student Grade based on total  marks and display result (Pass/Fail).
#include <stdio.h>

int main() {
    int totalMarks;

    printf("Enter total marks (out of 100): ");
    scanf("%d", &totalMarks);

    if(totalMarks >= 40) {
        printf("Result: Pass\n");

        // Optional: Display grade
        if(totalMarks >= 90) {
            printf("Grade: A\n");
        } else if(totalMarks >= 75) {
            printf("Grade: B\n");
        } else if(totalMarks >= 60) {
            printf("Grade: C\n");
        } else {
            printf("Grade: D\n");
        }
    } else {
        printf("Result: Fail\n");
        printf("Grade: F\n");
    }

    return 0;
}
