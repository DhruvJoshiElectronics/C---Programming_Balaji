// Total number of prime numbers below 1,000,000 have the sum of their digits
// equal to 14?
// Example: 59. 5 + 9 = 14
#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool isPrime(int num) {
    if (num <= 1) return false;  // Handle base cases
    if (num == 2) return true;   // 2 is a prime number
    if (num % 2 == 0) return false; // Exclude even numbers greater than 2

    for (int k = 3; k <= sqrt(num); k += 2) {
        if (num % k == 0) {
            return false;
        }
    }
    return true;
}

int sumofDigits(int num) {
    int dig, temp;
    int sum = 0;
    temp = num;
    while (temp != 0) {
        dig = temp % 10;
        sum = sum + dig;
        temp = temp / 10;
    }
    return sum;
}

int main() {
    int totalNumbers = 0;
    for (int i = 50; i <= 1000000; i++) {
        if (isPrime(i)) {
            if (sumofDigits(i) == 14) {
                totalNumbers++;
            }
        }
    }
    printf("The total number of prime numbers having a sum of digits equal to 14 is: %d\n", totalNumbers);
    return 0;
}
