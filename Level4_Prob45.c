#include <stdio.h>
#include <string.h>

void reverse(char str[]) {
    int len = strlen(str);
    char reversed[51]; // Buffer to hold the reversed string, same size as the input

    // Initialize the reversed string
    reversed[len] = '\0'; // Null-terminate the reversed string

    // Reverse the string
    for (int i = 0; i < len; i++) {
        reversed[i] = str[len - 1 - i];
    }

    // Print the reversed string
    printf("The reverse: %s\n", reversed);
}

int main() {
    char num[51]; // Buffer to hold up to 50 digits plus the null terminator

    printf("Enter a number up to 50 digits: ");
    scanf("%50s", num); // Read up to 50 characters

    reverse(num);

    return 0;
}
