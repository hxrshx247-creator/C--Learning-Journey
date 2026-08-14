#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {

    string name;
    int count = 0;

    cout << "Enter name: ";
    getline(cin, name);

    for (int i = 0; i < name.length(); i++) {

        char ch = tolower(name.at(i));

        if (ch == 'a' ||
            ch == 'e' ||
            ch == 'i' ||
            ch == 'o' ||
            ch == 'u') {

            count++;
        }
    }

    cout << "Number of vowels: " << count;

    return 0;
}