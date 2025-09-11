#include <stdio.h>

int main() {
    int num, digit;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Digits are: ");
    
    while (num > 0) {
        digit = num % 10;     // take last digit
        printf("%d ", digit); // print digit
        num = num / 10;       // remove last digit
    }

    return 0;
}
