#include <stdio.h>

int main() {
    char num[] = "12345678975893758490385758";
    int i;
    int isValid = 1; // Flag to check if the number is valid

    for (i = 0; num[i] != '\0'; i++) {
        if (num[i] < '0' || num[i] > '9') {
            isValid = 0; // Found an invalid character
            break;
        }
    }

    if (isValid) {
        printf("Valid Number\n");
    } else {
        printf("Invalid Number\n");
    }

    return 0;
}
