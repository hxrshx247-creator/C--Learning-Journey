#include <iostream>
using namespace std;

int main() {
    int n;
    int even = 0;
    int odd = 0;

    cout << "Enter how many numbers (n): ";
    cin >> n;

    int a[100];

    cout << "Enter " << n << " numbers: ";

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++) {
        if (a[i] % 2 == 0) {
            even++;
        }
        else {
            odd++;
        }
    }

    cout << "Even: " << even << endl;
    cout << "Odd: " << odd << endl;

    return 0;
}