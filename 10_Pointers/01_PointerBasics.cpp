#include <iostream>
using namespace std;

int main() {

    int num;
    int* ptr = &num;

    cout << "Enter a number: ";
    cin >> num;

    cout << "Value of num: " << num << endl;
    cout << "Address of num: " << &num << endl;
    cout << "Address stored in ptr: " << ptr << endl;
    cout << "Value accessed through ptr: " << *ptr << endl;

    return 0;
}