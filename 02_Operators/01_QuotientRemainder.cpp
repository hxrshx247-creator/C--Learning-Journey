//Find quotient and remainder.
#include<iostream>
using namespace std;
int main(){
    int dividend;
    int divisor;
    
    cout<<"Enter the value of dividend: ";
    cin>>dividend;
    
    cout<<"Enter the value of divisor: ";
    cin>>divisor;
    
    int quotient = dividend / divisor;
    int remainder = dividend % divisor;
    
    cout << "Quotient: " << quotient << endl;
    cout << "Remainder: " << remainder << endl;
    
    return 0;
}
