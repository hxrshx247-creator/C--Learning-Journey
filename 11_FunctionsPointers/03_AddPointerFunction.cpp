#include <iostream>
using namespace std;

int addNumbers(int* p1, int* p2) {
    return *p1 + *p2;
}

int main() {

    int a = 10;
    int b = 20;

    int sum = addNumbers(&a, &b);

    cout << "Sum = " << sum << endl;

    return 0;
}