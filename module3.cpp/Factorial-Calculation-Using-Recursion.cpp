#include <iostream>
using namespace std;

// Recursive function to calculate factorial
int factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}

int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;

    cout << "Factorial of " << num << " = " << factorial(num);

    return 0;
}
