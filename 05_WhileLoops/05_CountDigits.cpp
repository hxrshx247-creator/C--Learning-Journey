//Count digits.

#include<iostream>
using namespace std;
int main(){
    int n;
    int count;
    
    cout<<"Enter the value of n: ";
    cin>>n;
    
    count = 0;
    while (n > 0) {
       n = n/10;
       count++;
    }    
    cout << count;
    return 0;
}