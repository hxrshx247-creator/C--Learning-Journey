#include <iostream>
#include <string>
using namespace std;

int main() {

    string text;
    bool palindrome = true;

    cout << "Enter a string: ";
    getline(cin, text);

    int start = 0;
    int end = text.length() - 1;

    while (start < end) {

        if (text.at(start) != text.at(end)) {
            palindrome = false;
            break;
        }

        start++;
        end--;
    }

    if (palindrome) {
        cout << "The string is a palindrome." << endl;
    }
    else {
        cout << "The string is not a palindrome." << endl;
    }

    return 0;
}