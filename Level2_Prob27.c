// Write a program to print the total count of numbers which are less than
// 100000 and whose sum of digits is 14.

#include <stdio.h>
int main() {
    int numb, temp, dig, sum, count = 0;

    for (numb = 0; numb < 100000; numb++) {
        temp = numb;
        sum = 0;
        
        while (temp != 0) {
            dig = temp % 10;
            sum += dig;
            temp /= 10;
        }
        
        if (sum == 14) { 
            count++;
        }
    }
    
    printf("The total numbers whose sum of digits is 14: %d\n", count);

    return 0;
}


