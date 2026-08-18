#include <iostream>
using namespace std;

void changeValue(int* ptr) {
    *ptr = 50;
}

int main() {

    int num = 10;

    cout << "Before: " << num << endl;

    changeValue(&num);

    cout << "After: " << num << endl;

    return 0;
}