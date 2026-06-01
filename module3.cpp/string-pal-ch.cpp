#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    bool isPalindrome = true;

    cout << "Enter a string: ";
    cin >> str;

    int length = str.length();

    for(int i = 0; i < length / 2; i++) {
        if(str[i] != str[length - i - 1]) {
            isPalindrome = false;
            break;
        }
    }

    if(isPalindrome)
        cout << str << " is a palindrome." << endl;
    else
        cout << str << " is not a palindrome." << endl;

    return 0;
}
