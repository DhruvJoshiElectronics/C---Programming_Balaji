// Write a program get number from user print the total number of single-
// digit prime numbers in the number.

// Answer: Input: 163496481 - Output: 1
// Input: 364925 - Output: 3

#include<stdio.h>
#include<math.h>

int main()
{
  int number, temp, digit , count = 0 , count1=0,i;
  int check;
  printf("Enter the Number: ");
  scanf("%d", &number);
  temp = number ;

  while(temp!=0)
    {
      digit = temp%10;
      count = 0;
      for(i=0;i<=digit;i++)
            {
               if(digit%i==0)
                 count++;
            }
     if(count==2)
       count1++;
    temp = temp/10;
    }
printf("Answer : %d", count1);
}

