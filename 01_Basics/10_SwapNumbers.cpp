//Swap two numbers using a third variable.
#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter the value of a: ";
    cin>>a;
    cout<<"Enter the value of b: ";
    cin>>b;
    
    c=b;
    b=a;
    a=c;
    
    cout<<"Value of a after swapping: "<<a;
    cout<<endl;
    cout<<"Value of b after swapping: "<<b;
    
    return 0;
}