//Product of digits.

#include<iostream>
using namespace std;
int main(){
    int n;
    int digit;
    int product;
    
    cout<<"Enter the value of n: ";
    cin>>n;
    
    product = 1;
    while (n > 0) {
        digit = n % 10;
        product = product * digit;
        n = n / 10;
    }   
    cout << product;
    return 0;
}