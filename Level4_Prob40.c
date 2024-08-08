// Get an integer and print it as string.
#include <stdio.h>

int main() 
{
    int num ;
    printf("Enter the Number: ");
    scanf("%d", &num);
    printf("The number in string will be written as %c" , (num+'0'));
}
