// Convert Celsius to Fahrenheit.
#include <iostream>
using namespace std;
int main() {
    float C,F;
    cout<<"Enter temperature in Celsius: ";
    cin>>C;
    
    F = (C * 9/5) + 32;
    
    cout <<"Fahrenheit: "<< F << "°F";
    return 0;
}
