//Calculate Simple Interest.

#include <iostream>
using namespace std;
int main() {
    float S_I,P,R,T;
    cout<<"Enter the Principal amount: ";
    cin>>P;
    
    cout<<"Enter the Rate: ";
    cin>>R;

    cout<<"Enter the time: ";
    cin>>T;
    
    S_I= P*R*T/100;

    cout<<"Simple Interest: "<<S_I;
    return 0;
}