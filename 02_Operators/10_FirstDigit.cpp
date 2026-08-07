//Find the first digit of a three-digit number.

#include <iostream>
using namespace std;
int getFirstDigit(int n) {
    if (n < 0) {
        n = -n;
    }

    while (n >= 10) {
        n /= 10;
    }
    
    return n;
}

int main() {
    int number;
    
    cout << "Enter an integer: ";
    cin >> number;
    
    if (number == 0) {
        cout << "The first digit is: 0" << endl;
    } else {
        cout << "The first digit is: " << getFirstDigit(number) << endl;
    }
    
    return 0;
}