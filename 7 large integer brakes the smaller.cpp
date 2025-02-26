#include <stdio.h>
#include <string.h>

#define MAX_DIGITS 1000

// Function to add two large integers represented as arrays
void addLargeIntegers(char num1[], char num2[], char result[]) {
    int carry = 0;
    int i, sum;

    // Make the lengths of num1 and num2 equal by adding leading zeros
    int len1 = strlen(num1);
    int len2 = strlen(num2);
    int maxLength = (len1 > len2) ? len1 : len2;

    for (i = len1; i < maxLength; ++i) {
        num1[i] = '0';
    }
    for (i = len2; i < maxLength; ++i) {
        num2[i] = '0';
    }
    num1[maxLength] = '\0';
    num2[maxLength] = '\0';

    // Perform addition digit by digit
    for (i = 0; i < maxLength; ++i) {
        sum = (num1[i] - '0') + (num2[i] - '0') + carry;
        result[i] = (sum % 10) + '0';
        carry = sum / 10;
    }

    // If there is a carry after the last digit addition
    if (carry > 0) {
        result[maxLength] = carry + '0';
        result[maxLength + 1] = '\0';
    } else {
        result[maxLength] = '\0';
    }
}

int main() {
    char num1[MAX_DIGITS], num2[MAX_DIGITS], result[MAX_DIGITS + 1];

    // Input large integers as strings
    printf("Enter the first large integer: ");
    scanf("%s", num1);
    printf("Enter the second large integer: ");
    scanf("%s", num2);

    // Add the large integers
    addLargeIntegers(num1, num2, result);

    // Output the result
    printf("Sum of the large integers: %s\n", result);

    return 0;
}

