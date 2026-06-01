#include <iostream>
using namespace std;

// Function for addition
float add(float a, float b) {
    return a + b;
}

// Function for subtraction
float subtract(float a, float b) {
    return a - b;
}

// Function for multiplication
float multiply(float a, float b) {
    return a * b;
}

// Function for division
float divide(float a, float b) {
    return a / b;
}

int main() {
    float num1, num2;
    int choice;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    cout << "\n1. Add";
    cout << "\n2. Subtract";
    cout << "\n3. Multiply";
    cout << "\n4. Divide";
    cout << "\nEnter your choice: ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "Result = " << add(num1, num2);
            break;

        case 2:
            cout << "Result = " << subtract(num1, num2);
            break;

        case 3:
            cout << "Result = " << multiply(num1, num2);
            break;

        case 4:
            if (num2 != 0)
                cout << "Result = " << divide(num1, num2);
            else
                cout << "Division by zero is not allowed!";
            break;

        default:
            cout << "Invalid choice!";
    }

    return 0;
}
