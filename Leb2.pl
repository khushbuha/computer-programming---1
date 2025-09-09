#include <stdio.h>

int main() {
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    if (a > b) {
        printf("Largest value = %d\n", a);
        printf("Smallest value = %d\n", b);
    }
    else if (b > a) {
        printf("Largest value = %d\n", b);
        printf("Smallest value = %d\n", a);
    }
    else {
        printf("Both numbers are equal: %d\n", a);
    }

    return 0;
}
