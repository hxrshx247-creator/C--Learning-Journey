#include <iostream>
using namespace std;

void swapNumbers(int* p1, int* p2) {

    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

int main() {

    int a = 10;
    int b = 20;

    cout << "Before swapping: " << a << " " << b << endl;

    swapNumbers(&a, &b);

    cout << "After swapping: " << a << " " << b << endl;

    return 0;
}