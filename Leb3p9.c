include <stdio.h>

int main() {
    int n, i, sum = 0;

    printf("Enter value of n: ");
    scanf("%d", &n);

    // Loop for first n even numbers
    for(i = 2; i <= 2*n; i += 2) {
        sum += i;
    }

    printf("Sum of first %d even numbers = %d\n", n, sum);

    return 0;
}
