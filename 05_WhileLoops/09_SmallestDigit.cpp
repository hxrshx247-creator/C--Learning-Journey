//Smallest digit.

#include <iostream>
using namespace std;

int getSmallestDigit(int n) {
    if (n == 0) return 0;

    int minDigit = 9; 
    while (n > 0) {
        int digit = n % 10;
        if (digit < minDigit) {
            minDigit = digit;
        }
        n /= 10;
    }
    return minDigit;
}

int main() {
    int number;
    cout << "Enter an integer: ";
    cin >> number;
    cout << "The smallest digit is: " << getSmallestDigit(number) << endl;
    return 0;
}
