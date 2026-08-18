#include <iostream>
using namespace std;

int findLargest(int* ptr, int n) {

    int largest = *ptr;

    for (int i = 1; i < n; i++) {

        if (*(ptr + i) > largest) {
            largest = *(ptr + i);
        }
    }

    return largest;
}

int main() {

    int arr[] = {10, 45, 23, 67, 12};
    int n = 5;

    cout << "Largest = " << findLargest(arr, n) << endl;

    return 0;
}