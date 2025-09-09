include <stdio.h>

int main() {
    int i, num;
    int largest, smallest;

    printf("Enter 100 numbers:\n");

    // take the first number as reference
    scanf("%d", &num);
    largest = smallest = num;

    // check remaining 99 numbers
    for(i = 2; i <= 100; i++) {
        scanf("%d", &num);

        if(num > largest)
            largest = num;

        if(num < smallest)
            smallest = num;
    }
