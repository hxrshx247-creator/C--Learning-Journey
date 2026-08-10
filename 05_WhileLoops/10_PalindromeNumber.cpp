//Check if a number is a palindrome.

#include <iostream>
using namespace std;

bool isPalindrome(int n) {
    int original = n;
    int reversed = 0;

    while (n > 0) {
        int digit = n % 10;
        reversed = (reversed * 10) + digit;
        n /= 10;
    }

    return original == reversed;
}

int main() {
    int number;
    cout << "Enter an integer: ";
    cin >> number;

    if (isPalindrome(number)) {
        cout << "It is a palindrome." << endl;
    } else {
        cout << "It is not a palindrome." << endl;
    }
    return 0;
}
