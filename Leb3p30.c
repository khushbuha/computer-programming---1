
#include <stdio.h>

int main() {
    int i, j, isPrime;

    printf("Prime numbers between 1 and 500 are:\n");

    for(i = 2; i <= 500; i++) {
        isPrime = 1; // assume number is prime

        for(j = 2; j <= i/2; j++) {
            if(i % j == 0) {
                isPrime = 0; // not prime
                break;
            }
        }

        if(isPrime == 1) {
            printf("%d ", i);
        }
    }

    printf("\n");
    return 0;
}

