// Write a program get number from user print the total number of two-digit
// odd numbers in the number.

// Answer: Input: 12345678 - Output: 3
// Input: 987531 - Output: 4

#include<stdio.h>
int main()
{
  int number, temp, digit , count = 0 ;
  printf("Enter the Gold: ");
  scanf("%d", &number);
  temp = number ;
  while(temp>=10)
    {
        digit = temp%100;
        if(digit % 2 != 0 && digit >= 10 && digit <= 99)
          count++;
        temp = temp/10;
    }
printf("The no of odd no : %d", count);
return 0 ;
}
