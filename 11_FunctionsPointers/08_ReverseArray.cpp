#include <iostream>
using namespace std;

void reverseArray(int* start, int* end) {

    while (start < end) {

        int temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}

int main() {

    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;

    reverseArray(arr, arr + n - 1);

    cout << "Reversed array: ";

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
