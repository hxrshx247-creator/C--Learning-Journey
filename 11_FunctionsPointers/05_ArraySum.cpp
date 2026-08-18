#include <iostream>
using namespace std;

int arraySum(int* ptr, int n) {

    int sum = 0;

    for (int i = 0; i < n; i++) {
        sum += *(ptr + i);
    }

    return sum;
}

int main() {

    int arr[] = {10, 20, 30, 40, 50};
    int n = 5;

    cout << "Sum = " << arraySum(arr, n) << endl;

return 0;
}
