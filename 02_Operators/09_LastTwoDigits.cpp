//Find the last two digits of a number. 

#include <iostream>
using namespace std;
int getLastTwoDigits(int n) {
    if (n < 0) {
        n = -n;
    }
    
    return n % 100;
}

int main() {
    int number;
    
    cout << "Enter an integer: ";
    cin >> number;
    
    int result = getLastTwoDigits(number);
    
    if (result < 10) {
        cout << "The last two digits are: 0" << result << endl;
    } else {
        cout << "The last two digits are: " << result << endl;
    }
    
    return 0;
}
