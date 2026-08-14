#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {

    string text;
    int count = 0;

    cout << "Enter a string: ";
    getline(cin, text);

    for (int i = 0; i < text.length(); i++) {

        if (isdigit(text.at(i))) {
            count++;
        }
    }

    cout << "Number of digits: " << count << endl;

    return 0;
}