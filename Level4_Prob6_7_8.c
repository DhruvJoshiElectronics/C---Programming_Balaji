// Reverse the Number
#include<stdio.h>
int main()
{
  int number ;
  printf("Enter the Number : ");
  scanf("%d",&number);
  int temp = number ;
  int rev = 0 ;
  int dig = 0 ;
  while(temp!=0)
  {
  dig = temp%10;
  rev = rev*10 + dig;
  temp = temp/10;
  }
printf("The number value is : %d", rev);
}
