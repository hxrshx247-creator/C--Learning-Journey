#include <iostream>
using namespace std;

int findLargest(int* p1, int* p2) {

    if (*p1 > *p2) {
        return *p1;
    }
    else {
        return *p2;
    }
}

int main() {

    int a = 25;
    int b = 17;

    cout << "Largest = " << findLargest(&a, &b) << endl;

    return 0;
}