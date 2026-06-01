#include <iostream>
using namespace std;

// Global variable
int num = 100;

void showGlobal() {
    cout << "Global variable inside function: " << num << endl;
}

void showLocal() {
    // Local variable
    int num = 50;

    cout << "Local variable inside function: " << num << endl;
    cout << "Global variable inside function using scope resolution operator (::): "
         << ::num << endl;
}

int main() {
    cout << "Global variable in main(): " << num << endl;

    showGlobal();
    showLocal();

    return 0;
}
