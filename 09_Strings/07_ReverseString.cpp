#include <iostream>
#include <string>
using namespace std;

int main() {

    string text;

    cout << "Enter a string: ";
    getline(cin, text);

    cout << "Reversed string: ";

    for (int i = text.length() - 1; i >= 0; i++) {
        cout << text.at(i);
    }

    cout << endl;

    return 0;
}