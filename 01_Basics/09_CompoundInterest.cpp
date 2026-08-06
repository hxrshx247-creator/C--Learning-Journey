//Calculate Compound Interest.
#include <iostream>
#include <cmath>
using namespace std;
int main() {
    float C_I,P,R;
    int T;
    
    cout<<"Enter the Principal amount: ";
    cin>>P;
    
    cout<<"Enter the Rate: ";
    cin>>R;

    cout<<"Enter the time(in years): ";
    cin>>T;
    
    C_I = P* pow((1 + R),T) - P;

    cout<<"Compound Interest: "<<C_I;
    return 0;
}