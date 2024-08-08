#include <stdio.h>

int main() {
    int num;
    printf("Enter the Number: ");
    scanf("%d", &num);

    // Count number of digits
    int temp = num;
    int digits[10]; // Assuming the number won't have more than 10 digits
    int count = 0;

    // Extract digits
    while (temp != 0) {
        digits[count] = temp % 10;
        temp = temp / 10;
        count++;
    }

    // Print digits in reverse order (most significant to least significant)
    for (int i = count - 1; i >= 0; i--) {
        printf("%c\n", digits[i] + '0');
    }

    return 0;
}
