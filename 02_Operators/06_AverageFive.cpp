//Find the average of five numbers.
#include<iostream>
using namespace std;
int main(){
    float a,b,c,d,e;
    float average;
    
    cout<<"Enter the value of a: ";
    cin>>a;
    
    cout<<"Enter the value of b: ";
    cin>>b;
    
    cout<<"Enter the value of c: ";
    cin>>c;

    cout<<"Enter the value of d: ";
    cin>>d;
    
    cout<<"Enter the value of e: ";
    cin>>e;
    
    average = (a+b+c+d+e)/5;
    
    cout<<"Average: "<<average;
    return 0;
}

