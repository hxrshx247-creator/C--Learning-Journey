#include <iostream>
using namespace std;

int main() {
    int a[7];
    int sum = 0;

    cout << "Enter 7 values: ";

    for (int i = 0; i < 7; i++) {
        cin >> a[i];
        sum += a[i];
    }

    double average = (double)sum / 7;

    cout << "The average is: " << average << endl;

    return 0;
}