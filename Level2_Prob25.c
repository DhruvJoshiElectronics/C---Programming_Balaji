// Write a program get number from user print the total number of two-digit
// perfect square numbers in the number.
// Answer: Input: 163496481 - Output: 4
// Input: 364925 - Output: 4

#include<stdio.h>
#include<math.h>

int main()
{
  int number, temp, digit , count = 0 ;
  int check;
  printf("Enter the Number: ");
  scanf("%d", &number);
  temp = number ;

  while(temp>=10)
    {
      digit = temp%100;
      check = (int)sqrt(digit);
      if(check*check == digit && check*check >=10 && check*check <= 99)
        count++;
      temp = temp/10;
    }
printf("The Answer: %d", count);
}
