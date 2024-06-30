
#include<stdio.h>

int greater(int n)
{
int sum = 0 ;    
int dig ;
int temp = n ;
while (temp!=0)
{
    dig = temp%10;
    sum = sum + dig ;
    temp=temp/10;
}
return sum ;
}

int main()
{
  int num1 , num2 ;
  int x ;
  printf("Enter the two Numbers : \n");
  scanf("%d %d", &num1 , &num2);

  if( num1 > num2 )
  {
  x = greater(num1);
  }
  else{
    x = greater(num2);
  }  

  printf("The sum is : %d" , x );
}










