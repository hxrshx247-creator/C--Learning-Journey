//Find the last digit of a number.

#include <iostream>
using namespace std;
int getLastDigit(int n) {
    if (n < 0) {
        n = -n;
    }
    
    return n % 10;
}

int main() {
    int number;
    
    cout << "Enter an integer: ";
    cin >> number;
    
    cout << "The last digit is: " << getLastDigit(number) << endl;
    
    return 0;
}

