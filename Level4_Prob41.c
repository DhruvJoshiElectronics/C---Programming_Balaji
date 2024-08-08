#include <stdio.h>
int main() 
{
char str[] = "Dhruv Joshi is A good boy" ;
int len ;
int count = 0;
int i;

for(i=0;str[i]!='\0';i++)
{
count++;
}
len = count+1;
printf("The length of the string : %d", len);
}
