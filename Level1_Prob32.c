/* Get two 2-digit numbers from user. If the sum of the numbers is less than 100, then
print the sum, otherwise print the difference.
Example: Input: 56 78 – Output: 22
Input: 14 65 - Output: 79
*/

#include<stdio.h>

int getvalue(int n,int n1);
int ret(int s, int d);

int getvalue(int n, int n1)
{
   int sum = 0 ;
   int difference = 0 ;
   sum = n+n1;
   difference = n-n1;
   ret(sum,difference);
}

int ret(int s, int d)
{
    if(s<=100)
    {
        printf("%d",s);
    }
    else
    {
        printf("%d",d);
    }
}

int main()
{
    int num1 , num2;
    printf("Enter the numbers : \n");
    scanf("%d %d", &num1 , &num2);
    getvalue(num1 ,num2);
}