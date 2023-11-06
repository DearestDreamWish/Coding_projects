/*
A program that calculates the greatest common divisor (GCD).
Inspired by:
https://en.wikipedia.org/wiki/Euclidean_algorithm
*/

// Library inclusion.
#include <stdio.h>

// Main function.
int main(void) {
    // Declarations.
    int num1, num2, temp;

    // Interaction with the user.
    // Checks if valid values are entered and repeats if not.
    do {
        printf("Give me two positive numbers to calculate the greatest common divisor: ");
        scanf("%d %d", &num1, &num2);
    } while (num1 <= 0 || num2 <= 0);

    // Ensure the order of the numbers for the algorithm to work.
    if (num1 > num2) {
        temp = num2;
        num2 = num1;
        num1 = temp;
    }

    // Calculate the greatest common divisor using the Euclidean algorithm.
    while (num1 != num2) {
        if (num1 > num2) {
            num1 = num1 - num2;
        } else {
            num2 = num2 - num1;
        }
    }
    
    // Display the result.
    printf("The result is: %d\n", num1);

    // Successful program execution.
    return 0;
}
