// Function to find the factorial using a loop.
#include <iostream>
using namespace std;

// Using 'long long' because factorials grow large very quickly
long long factorial(int n) {
    if (n < 0) {
        return -1; 
    }
    
    long long result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i; // Multiply result by i
    }
    
    return result;
}

int main() {
    int number = 5;
    long long ans = factorial(number);
    
    if (ans == -1) {
        cout << "Factorial is not defined for negative numbers." << endl;
    } else {
        cout << "The factorial of " << number << " is: " << ans << endl;
    }
    
    return 0;
}
