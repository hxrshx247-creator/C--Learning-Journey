#include <iostream>
#include <string>
using namespace std;

int main() {

    string text;
    char target;
    int count = 0;

    cout << "Enter a string: ";
    getline(cin, text);

    cout << "Enter the character to search: ";
    cin >> target;

    for (int i = 0; i < text.length(); i++) {

        if (text.at(i) == target) {
            count++;
        }
    }

    cout << "'" << target << "' occurs "
         << count << " times." << endl;

    return 0;
}