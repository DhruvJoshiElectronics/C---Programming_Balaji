Print the total number of all Palindrome numbers less than 100000.
Example: 101,12321,656,99899,11511

#include <stdio.h>
#include <stdbool.h>

// Function to check if a number is a palindrome
bool isPalindrome(int num) {
    int originalNum = num;
    int reversedNum = 0;

    while (num > 0) {
        int digit = num % 10;
        reversedNum = reversedNum * 10 + digit;
        num /= 10;
    }

    return originalNum == reversedNum;
}

int main() {
    int totalPalindromes = 0;

    for (int i = 1; i < 100000; i++) {
        if (isPalindrome(i)) {
            totalPalindromes++;
        }
    }

    printf("The total number of palindrome numbers less than 100000 is: %d\n", totalPalindromes);
    return 0;
}
