#include <iostream>
#include <string>
using namespace std;

void reverseString(string* str) {

    int start = 0;
    int end = str->length() - 1;

    while (start < end) {

        char temp = (*str)[start];
        (*str)[start] = (*str)[end];
        (*str)[end] = temp;

        start++;
        end--;
    }
}

int main() {

    string text;

    cout << "Enter a string: ";
    getline(cin, text);

    reverseString(&text);

    cout << "Reversed string: " << text << endl;

    return 0;
}