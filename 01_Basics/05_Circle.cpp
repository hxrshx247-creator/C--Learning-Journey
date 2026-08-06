//Find the area and circumference of a circle.
#include<iostream>
using namespace std;
int main() {
    float r;
    float area;
    float circumference;
    
     const float pi = 3.14159f;
    
    cout<<"Enter the value of radius: ";
    cin>>r;
    
    area=pi*r*r;
    circumference=2*pi*r;
    
    cout<<"Area: "<<area<<endl;
    cout<<"Circumference: "<<circumference;
    
return 0;
}