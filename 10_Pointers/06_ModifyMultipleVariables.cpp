#include <iostream>
using namespace std;
int main() {
    int a = 5, b = 10, c = 15;
    int *ptr1 = &a, *ptr2 = &b, *ptr3 = &c;

    cout << "Before modification: a=" << a << ", b=" << b << ", c=" << c << endl;

    *ptr1 += 5; 
    *ptr2 *= 2; 
    *ptr3 -= 3; 

    cout << "After modification: a=" << a << ", b=" << b << ", c=" << c << endl;

    return 0;
}