// Get a number as String and Print its ASCII Value
#include <stdio.h>

int main() 
{
    char str[100]; 
    int result = 0; 
    int i = 0;      

    printf("Enter a number as a string: ");
    scanf("%s", str);  // Read the string input from the user

    // Iterate through all characters of the input string
    while (str[i] != '\0')
      {
        result = result * 10 + (str[i] - '0');
        i++;
      }

    printf("The integer value of the string \"%s\" is: %d\n", str, result);

    return 0;
}
