#include <iostream>
using namespace std;

void countEvenOdd(int* ptr, int n, int* even, int* odd) {

    *even = 0;
    *odd = 0;

    for (int i = 0; i < n; i++) {

        if (*(ptr + i) % 2 == 0) {
            (*even)++;
        }
        else {
            (*odd)++;
        }
    }
}

int main() {

    int arr[] = {10, 15, 22, 31, 40};
    int n = 5;

    int even, odd;

    countEvenOdd(arr, n, &even, &odd);

    cout << "Even = " << even << endl;
    cout << "Odd = " << odd << endl;

    return 0;
}