// The problem Statement of Level 1 - Prob 31
// Get a three-digit number from user. If the sum of the digits is less than 10, then print
// the sum, otherwise add the digits of the sum. If the sum of the digits is less than 10,
// then print the sum, otherwise add the digits of the sum, and print the sum.
// Note: The result should be always single digit only.

// Example: Input: 123 – Output: 6

// Input: 149 - Output: 5 (149:1+4+9 = 14: 1+4 = 5)
// Input: 991 - Output: 1 (991: 9+9+1 = 19: 1+9 = 10: 1+0 = 1)

#include <stdio.h>

// Function to calculate the sum of digits of a number
int digitSum(int num) {
    int sum = 0;
    while (num != 0) {
        sum += num % 10; // Add the last digit to the sum
        num /= 10; // Move to the next digit
    }
    return sum;
}

// Function to get the single digit result
int getSingleDigit(int num) {
    int sum = digitSum(num);
    while (sum >= 10) {
        sum = digitSum(sum); // Calculate the sum of digits of the sum
    }
    return sum;
}

int main() {
    int number;

    // Get input from the user
    printf("Enter a three-digit number: ");
    scanf("%d", &number);

    // Ensure the number is three digits
    while (number < 100 || number > 999) {
        printf("Please enter a three-digit number: ");
        scanf("%d", &number);
    }

    // Get the single-digit result
    int result = getSingleDigit(number);

    // Print the result
    printf("Result: %d\n", result);

    return 0;
}
