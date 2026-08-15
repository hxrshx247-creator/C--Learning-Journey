#include <iostream>
using namespace std;

int main() {

    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int* arr = new int[n];

    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int* ptr = arr;

    int even = 0;
    int odd = 0;

    for (int i = 0; i < n; i++) {

        if (*(ptr + i) % 2 == 0) {
            even++;
        }
        else {
            odd++;
        }
    }

    cout << "Even numbers: " << even << endl;
    cout << "Odd numbers: " << odd << endl;

    return 0;
}