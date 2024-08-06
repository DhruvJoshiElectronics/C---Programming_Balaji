// Print the total number of non-decreasing numbers from 1000 to 9999.Non
// decreasing numbers have individual digits that do not have a decreasing order
// from left to right.
// (For e.g.: 1234 is a non-decreasing number where as 2134 is not)
#include <stdio.h>
#include <stdbool.h>

// Function to check if a number is non-decreasing
bool isNonDecreasing(int num) {
    int previousDigit = 10; // Start with a digit larger than any single digit (0-9)

    while (num > 0) {
        int currentDigit = num % 10;
        num /= 10;
        if (currentDigit > previousDigit) {
            return false;
        }
        previousDigit = currentDigit;
    }
    return true;
}

int main() {
    int totalNonDecreasingNumbers = 0;

    for (int i = 1000; i <= 9999; i++) {
        if (isNonDecreasing(i)) {
            totalNonDecreasingNumbers++;
        }
    }

    printf("The total number of non-decreasing numbers from 1000 to 9999 is: %d\n", totalNonDecreasingNumbers);
    return 0;
}
