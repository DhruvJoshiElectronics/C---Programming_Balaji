#include <stdio.h>

int main() {
    int i = 2;
    int k, count, count1 = 0;

    while(i <= 9) {
        count = 0; // Reset count for each i
        for(k = 1; k <= i; k++) {
            if(i % k == 0)
                count++;
        }
        if(count == 2) // A prime number has exactly two divisors
            count1++;
        i++;
    }

    printf("The total number of single digit prime numbers is: %d\n", count1);
    return 0;
}
