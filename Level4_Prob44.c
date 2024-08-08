#include <stdio.h>
#include <string.h>

void removeLeadingZeros(char str[]) {
    int len = strlen(str);
    int i = 0;

    // Find the index of the first non-zero character
    while (i < len && str[i] == '0') {
        i++;
    }

    // If all characters are zeros, print "0"
    if (i == len) {
        printf("0\n");
    } else {
        printf("%s\n", &str[i]);
    }
}

int main() {
    char num[51]; // Buffer to hold up to 50 digits plus the null terminator

    printf("Enter a number up to 50 digits: ");
    scanf("%50s", num); // Read up to 50 characters

    removeLeadingZeros(num);

    return 0;
}
