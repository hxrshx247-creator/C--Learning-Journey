#include <iostream>
using namespace std;

int main() {
    int a[5] = {4, 8, 12, 16, 20};

    for (int i = 0; i < 5; i = i + 2) {
        cout << a[i] << " ";
    }

    return 0;
}