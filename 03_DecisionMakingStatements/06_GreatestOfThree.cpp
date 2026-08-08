//Find the greatest among three numbers.

#include<iostream>
using namespace std;
int main() {
     int a,b,c; 
     cout<<"Enter the value of a: ";
     cin>>a;
     cout<<"Enter the value of b: ";
     cin>>b;
     cout<<"Enter the value of c: ";
     cin>>c;
if (a >= b && a >= c) {
        cout << a << " is the greater number among the three.";
    }
    else if (b >= a && b >= c) {
        cout << b << " is the greater number among the three.";
    }
    else {
        cout << c << " is the greater number among the three.";
    }
return 0;
}