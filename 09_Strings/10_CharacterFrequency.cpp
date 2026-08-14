#include <iostream>
#include <string>
using namespace std;

int main() {

    string text;

    cout << "Enter a string: ";
    getline(cin, text);

    int frequency[256] = {0};

    for (int i = 0; i < text.length(); i++) {
        frequency[(unsigned char)text.at(i)]++;
    }

    cout << "Character frequencies:" << endl;

    for (int i = 0; i < 256; i++) {

        if (frequency[i] > 0) {
            cout << char(i) << " : "
                 << frequency[i] << endl;
        }
    }

    return 0;
}