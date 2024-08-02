#include <stdio.h>

int main() {
    int i = 100;
    int k, count, count1 = 0;
    int sum = 0 ;

    while(i <= 999) {
        count = 0; // Reset count for each i
        for(k = 1; k <= i; k++) {
            if(i % k == 0)
                count++;
        }
        if(count == 2)
        {// A prime number has exactly two divisors
            count1++;
            sum = sum+i;
        }
        i++;
    }

    printf("The total number of single digit prime numbers is: %d\n", count1);
    printf("The total sum of single digit prime numbers is: %d\n", sum);
    return 0;
}
