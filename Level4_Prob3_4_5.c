#include<stdio.h>
int main()
{
  int number ;
  printf("Enter the Number: ");
  scanf("%d", &number);
  int mid = number/10;
  int mid2 = mid%10;
  printf("The Number at One Position : %d", number%10);
  printf("The Number at Ten Position : %d", mid2);
  printf("The Number at Hundred Position : %d", number/100);
}

