//Find the area and perimeter of a rectangle.
#include<iostream>
using namespace std;
int main() {
    float l,b;
    float area;
    float perimeter;
    
    cout<<"Enter the value of length: ";
    cin>>l;
    cout<<"Enter the value of breadth: ";
    cin>>b;
    
    area=l*b;
    perimeter=2*(l+b);
    
    cout<<"Area: "<<area<<endl;
    cout<<"Perimeter: "<<perimeter;
    
return 0;
}