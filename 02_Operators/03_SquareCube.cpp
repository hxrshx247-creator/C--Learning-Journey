//Find the square and cube of a number.
#include<iostream>
using namespace std;
int main() {
    double num;
    double square;
    double cube;
    
    cout<<"Enter a number: ";
    cin>>num;
    
    square = num*num;
    cube = num*num*num;
    
    cout << "Square: " << square << endl;
    cout << "Cube: " << cube <<endl;
    
    return 0;
}
