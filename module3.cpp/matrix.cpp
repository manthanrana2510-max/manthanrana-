#include <iostream>
using namespace std;

int main() {
    int A[2][2], B[2][2], C[2][2];

    // Input first matrix
    cout << "Enter elements of first 2x2 matrix:\n";
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            cin >> A[i][j];
        }
    }

    // Input second matrix
    cout << "Enter elements of second 2x2 matrix:\n";
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            cin >> B[i][j];
        }
    }

    // Matrix addition
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    // Display result
    cout << "\nSum of the matrices:\n";
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
