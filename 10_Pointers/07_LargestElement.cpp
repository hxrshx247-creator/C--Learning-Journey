#include<iostream>
using namespace std;
int main() {
    int a[5] = {10, 25, 15, 30, 20};
    int *ptr = a; 

    int largest = *ptr; 

    for(int i = 1; i < 5; i++) {
        if(*(ptr + i) > largest) { 
            largest = *(ptr + i); 
        }
    }

    cout << "Largest element is: " << largest << endl;

    return 0;
}