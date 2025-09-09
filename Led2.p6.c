#include <stdio.h>

int main() {
    int m1, m2, m3, total;
    float avg;

    // Input marks
    printf("Enter marks of three subjects: ");
    scanf("%d %d %d", &m1, &m2, &m3);

    // Check for subject fail
    if (m1 < 35 || m2 < 35 || m3 < 35) {
        printf("Result: Fail (less than 35 in one or more subjects)\n");
    }
    else {
        total = m1 + m2 + m3;
        avg = total / 3.0;

        printf("Total Marks = %d\n", total);
        printf("Average = %.2f\n", avg);

        if (avg >= 70) {
            printf("Result: Distinction\n");
        }
        else if (avg >= 60) {
            printf("Result: First Class\n");
        }
        else if (avg >= 50) {
            printf("Result: Second Class\n");
        }
        else if (avg >= 35) {
            printf("Result: Third Class\n");
        }
        else {
            printf("Result: Fail\n");
        }
    }

    return 0;
}
