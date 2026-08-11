//Function to check even/odd.

#include <iostream>
using namespace std;

bool isEven(int n) {
    if (n % 2 == 0) {
        return true; 
    } else {
        return false;
    }
}

int main() {
    int number = 4; 
    
    if (isEven(number)) {
        cout << number << " is even." << endl;
    } else {
        cout << number << " is odd." << endl;
    }
    
    return 0;
}
