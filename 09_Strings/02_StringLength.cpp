#include <iostream>
#include <string>
using namespace std;

int main() {

    string name;
    int Length, Size;

    cout << "Enter your name: ";
    getline(cin, name);

    cout << "Your name is: " << name << endl;

    Length = name.length();
    Size = name.size();

    cout << "Length of the name: " << Length << endl;
    cout << "Size of the name: " << Size << endl;

    return 0;
}