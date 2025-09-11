
#include <stdio.h>

int main() {
    int num, original, reverse = 0, digit;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num; // store original number

    while (num > 0) {
        digit = num % 10;              // get last digit
        reverse = reverse * 10 + digit; // build reverse number
        num = num / 10;                // remove last digit
    }

    if (original == reverse) {
        printf("%d is a Palindrome number.\n", original);
    } else {
        printf("%d is NOT a Palindrome number.\n", original);
    }

    return 0;
}
