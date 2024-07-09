// Question: Write a program get number from user print the total number of single-
// digit perfect square numbers in the number.

// Answer: Input: 123456789 - Output: 3
// Input: 987531 - Output: 2

#include<stdio.h>
#include<math.h>

int main()
{
  int number, temp, digit , count = 0 ;
  int check;
  printf("Enter the Number: ");
  scanf("%d", &number);
  temp = number ;

  while(temp!=0)
  {
    digit = temp%10;
    check = (int)sqrt(digit);
    if(check*check == digit)
      count++;
    temp = temp/10;
  }
printf("The value : %d", count);
}
