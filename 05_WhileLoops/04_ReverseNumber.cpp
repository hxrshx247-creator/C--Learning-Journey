//Reverse a number.

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    
    int i = n;
    do {
        cout << i << "\n";
        i--;
    }
    while (i >= 1);
    return 0;
}