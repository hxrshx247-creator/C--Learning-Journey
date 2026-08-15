#include <iostream>
using namespace std;
int main() {
    int num = 10;
    int* ptr = &num;

    cout << "Before: " << num << endl;

    *ptr = 20; 

    cout << "After: " << num << endl;

    return 0;
}