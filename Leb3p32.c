
#include <stdio.h>

int main() {
    int i, j, isPrime, count = 0;

    for(i = 2; i <= 500; i++) {
        isPrime = 1; // assume prime

        for(j = 2; j <= i/2; j++) {
            if(i % j == 0) {
                isPrime = 0; // not prime
                break;
            }
        }

        if(isPrime == 1) {
            count++;
        }
    }

    printf("Total prime numbers between 1 and 500 = %d\n", count);

    return 0;
}
