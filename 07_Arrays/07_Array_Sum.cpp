#include <iostream>
using namespace std;

int main() {
    int a[5];
    int sum = 0;

    cout << "Enter 5 values: ";

    for (int i = 0; i < 5; i++) {
        cin >> a[i];
        sum += a[i];
    }

    cout << "The sum is: " << sum << endl;

    return 0;
}