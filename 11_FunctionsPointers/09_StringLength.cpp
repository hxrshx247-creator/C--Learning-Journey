#include <iostream>
#include <string>
using namespace std;

int stringLength(string* str) {

    return str->length();
}

int main() {

    string name;

    cout << "Enter a string: ";
    getline(cin, name);

    cout << "Length = " << stringLength(&name) << endl;

    return 0;
}