//Print ASCII values from A to Z.

#include <iostream>
using namespace std;

int main() {
    cout << "Character -> ASCII Value" << endl;
    cout << "------------------------" << endl;
    
    for (char ch = 'A'; ch <= 'Z'; ch++) {
        cout << ch << "         -> " << (int)ch << endl;
    }
    
    return 0;
}