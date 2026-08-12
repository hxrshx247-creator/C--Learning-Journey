#include <iostream>
using namespace std;

int main() {
    int a[7] = {4, 17, 9, 25, 6, 12, 30};

    int largest = a[0];

    for (int i = 1; i < 7; i++) {
        if (a[i] > largest) {
            largest = a[i];
        }
    }

    cout << "Largest is " << largest << endl;

    return 0;
}