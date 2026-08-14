#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {

    string name;
    int vowelCount = 0;
    int consonantCount = 0;

    cout << "Enter a name: ";
    getline(cin, name);

    for (int i = 0; i < name.length(); i++) {

        char ch = tolower(name.at(i));

        if (isalpha(ch)) {

            if (ch == 'a' ||
                ch == 'e' ||
                ch == 'i' ||
                ch == 'o' ||
                ch == 'u') {

                vowelCount++;
            }
            else {
                consonantCount++;
            }
        }
    }

    cout << "Number of vowels: " << vowelCount << endl;
    cout << "Number of consonants: " << consonantCount << endl;

    return 0;
}