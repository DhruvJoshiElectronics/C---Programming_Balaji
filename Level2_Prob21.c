// Write a program get number from user print the total number digits
// which are odd in the number.

// Answer: Input : 12345678 - Output : 4
// Input : 987531 - Output : 5

#include<stdio.h>
int odddigits(int);
int main()
{
  int number, x;
  printf("Enter the Gold: ");
  scanf("%d", &number);
  x = odddigits(number);
  printf("The no of Odd Digits : %d", x);
}

int odddigits(int num)
{
  int temp;
  int digit;
  int count = 0 ;
  temp = num ;
  while(temp!=0)
  {
  digit = temp%10;
  temp = temp/10;
  if(digit%2!=0)
  {
  count++;
  }
  }
  return count ;
}
  
