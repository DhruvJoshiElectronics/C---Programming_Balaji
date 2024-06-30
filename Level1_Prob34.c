#include <stdlib.h>

int main() {
    int num1, num2;
    
    // Input the first number
    printf("Enter the first 3-digit number: ");
    scanf("%d", &num1);

    // Input the second number
    printf("Enter the second 3-digit number: ");
    scanf("%d", &num2);
    
    // Extract the tens digit of each number
    int num1_tens = (num1 / 10) % 10;
    int num2_tens = (num2 / 10) % 10;
    
    // Find the larger tens digit
    int larger_tens = (num1_tens > num2_tens) ? num1_tens : num2_tens;
    
    // Calculate the difference between the one's digit and hundred's digit
    int difference = abs((num1 % 10) - (num1 / 100)) - abs((num2 % 10) - (num2 / 100));
    
    // Print the difference
    printf("The difference between the one's digit and hundred's digit of the number whose ten's digit is bigger is: %d\n", difference);

    return 0;
}




