//Write a program to print the total number of single digit odd numbers
#include <stdio.h>

int main() {
    int i, sum = 0;
    for(i = 100; i <= 999; i++) {
        if(i % 2 != 0) {
            sum = sum + i;
        }
    }
    printf("The sum of odd numbers between 1 and 99 is: %d\n", sum);
    return 0;
}
