//Read three numbers and print their average.
#include<iostream>
using namespace std;
int main() {
    float a,b,c;
    float average;
    
    cout<<"Enter the value of a: ";
    cin>>a;
    cout<<"Enter the value of b: ";
    cin>>b;
    cout<<"Enter the value of c: ";
    cin>>c;
    

    average=(a+b+c)/3;
    
    cout<<"Average: "<< average;
    
return 0;
}