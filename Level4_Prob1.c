// Get a Two-digit number from user and print the digit in “Ones”
// position
// Example: User Enters “78”
// Answer - 8

#include<stdio.h>
int main()
{
  int number ;
  printf("Enter the Number : ");
  scanf("%d", &number);
  printf("The one's Digit is : %d ", (number%10));
}
