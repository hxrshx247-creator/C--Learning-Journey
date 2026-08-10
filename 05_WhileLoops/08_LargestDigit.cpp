//Largest digit.

#include <iostream>
using namespace std;

int getLargestDigit(int n) {
    int maxDigit = 0;
    while (n > 0) {
        int Digit = n % 10;
        if (Digit > maxDigit) {
            maxDigit = Digit; 
        }
        n /= 10;
    }
    return maxDigit;
}

int main() {
    int number;
    cout << "Enter an integer: ";
    cin >> number;
    cout << "The largest digit is: " << getLargestDigit(number) << endl;
    return 0;
}
