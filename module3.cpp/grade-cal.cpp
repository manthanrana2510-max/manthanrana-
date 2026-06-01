#include <stdio.h>

// Function for Addition
float add(float a, float b) {
    return a + b;
}

// Function for Subtraction
float subtract(float a, float b) {
    return a - b;
}

// Function for Multiplication
float multiply(float a, float b) {
    return a * b;
}

// Function for Division
float divide(float a, float b) {
    return a / b;
}

int main() {
    float num1, num2;
    int choice;

    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);

    printf("\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("Result = %.2f", add(num1, num2));
            break;
        case 2:
            printf("Result = %.2f", subtract(num1, num2));
            break;
        case 3:
            printf("Result = %.2f", multiply(num1, num2));
            break;
        case 4:
            if(num2 != 0)
                printf("Result = %.2f", divide(num1, num2));
            else
                printf("Division by zero is not allowed.");
            break;
        default:
            printf("Invalid choice!");
    }

    return 0;

