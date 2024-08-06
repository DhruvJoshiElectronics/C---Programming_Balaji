// Print the number of zeroes you encounter between the numbers 0 to 1000
#include <stdio.h>
int countZeroes(int num) {
    int count = 0;
    while (num > 0) {
        if (num % 10 == 0) {
            count++;
        }
        num /= 10;
    }
    return count;
}

int main() {
    int totalZeroes = 0;
    for (int i = 0; i <= 1000; i++) {
        totalZeroes += countZeroes(i);
    }
    // Also account for the number 0 itself
    totalZeroes++;
    printf("Total number of zeroes between 0 and 1000: %d\n", totalZeroes);
    return 0;
}

