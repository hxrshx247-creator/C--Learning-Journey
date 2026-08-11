// Function to return the largest of three numbers.

#include <iostream>
using namespace std;

int findMax(int a, int b, int c) {
    if (a >= b && a >= c) {
        return a;
    } else if (b >= a && b >= c) {
        return b;
    } else {
        return c;
    }
}

int main() {
    int num1 = 29; 
    int num2 = 88;
    int num3 = 44;
    
    int largest = findMax(num1, num2, num3);
    
    cout << "The largest number is: " << largest << endl;
    
    
    return 0;
}