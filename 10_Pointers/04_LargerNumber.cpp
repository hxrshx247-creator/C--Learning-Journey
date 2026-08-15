#include<iostream>
using namespace std;
int main() {
    int a=10,b=15;
    int *ptr1=&a, *ptr=&b;
    
    if(*ptr1 > *ptr) {   
        cout<<*ptr1<<" is larger"<<endl;
    }
    else {
        cout<<*ptr<<" is larger"<<endl;
    }
    return 0;
}