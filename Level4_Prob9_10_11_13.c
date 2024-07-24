//Sum of all Digits 
#include<stdio.h>
int main()
{
  int number ;
  printf("Enter the Number : ");
  scanf("%d",&number);
  int temp = number ;
  int sum = 0 ;
  int dig = 0 ;
  while(temp!=0)
  {
  dig = temp%10;
  sum = sum + dig;
  temp = temp/10;
  }
printf("The number value is : %d", sum);
}
