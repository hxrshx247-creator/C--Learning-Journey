#include<iostream>
using namespace std;
int main() {
    int a=5,b=10;

    int *ptr1=&a,*ptr2=&b;
    int sum=*ptr1+*ptr2;

    cout<<"Sum of "<<*ptr1<<" and "<<*ptr2<<" is "<<sum<<endl;

    return 0;
}