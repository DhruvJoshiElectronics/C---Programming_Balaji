// Get two 3-digit numbers from user. Add the one’s and hundred’s digits of both the
// numbers. Print the sum of all the digits of the number whose sum of one’s and
// hundred’s digits is bigger.
// Example: Input: 856 978 – Output: 24
// Input: 128 365 - Output: 11

#include<stdio.h>

void prob(int x)
{
int temp = x ;
int sum3 = 0 ;
int dig ;
  while(temp!=0)
    {
      dig = temp%10;
      sum3 = sum3 + dig ;
      temp = temp/10;
    }
printf("The value of sum of digits of number is : %d ", sum3);
}

int main()
{
  int num1 , num2,  last_one1 , first_one1 ;
  int last_one2 , first_one2 ;
  int sum1 = 0 ;
  int sum2 = 0 ;

  printf("Enter the Number : ");
  scanf("%d",&num1);
  printf("Enter the Number : ");
  scanf("%d",&num2);

  last_one1 = num1 % 10  // 6
  first_one1 = num1/100  // 8
  sum1 = last_one1 + first_one1 ;
  last_one2 = num2%10  // 8
  first_one2 = num2/100  // 9
  sum2 = last_one2 + first_one2 ;

if(sum1>sum2)
    prob(num1);
else
    prob(num2);

  return 0 ;
}

