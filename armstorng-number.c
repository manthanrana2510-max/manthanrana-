 // extra logical building challenge;
 #include <stdio.h>
#include <math.h>

int main() {
    int num, originalNum, remainder, digits = 0;
    int result = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    originalNum = num;

    // Count number of digits
    while (originalNum != 0) {
        originalNum /= 10;
        digits++;
    }

    originalNum = num;

    // Calculate sum of digits raised to the power of digits
    while (originalNum != 0) {
        remainder = originalNum % 10;
        result += pow(remainder, digits);
        originalNum /= 10;
    }

    // Check Armstrong number
    if (result == num)
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);

    return 0;
}