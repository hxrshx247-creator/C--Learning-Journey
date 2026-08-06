// Convert Fahrenheit to Celsius.
#include <iostream>
using namespace std;
int main() {
    float C,F;
    cout<<"Enter temperature in Fahrenheit: ";
    cin>>F;
    
    C = (F - 32) * 5/9;
    
    cout <<"Celsius: "<< C << "°C";
    return 0;
}