#include<iostream>
using namespace std;

int main() {
    double num1, num2;
    int choice;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    cout << "Choose an operation: \n";
    cout << "1. Addition\n";
    cout << "2. Subtraction\n";
    cout << "3. Multiplication\n";
    cout << "4. Division\n";
    cin >> choice;

    switch (choice) {

        case 1:
            cout << "Result: " << num1 + num2 << endl;
            break;

        case 2:
            cout << "Result: " << num1 - num2 << endl;
            break;

        case 3:
            cout << "Result: " << num1 * num2 << endl;
            break;

        case 4:
            if (num2 != 0) {
                cout << "Result: " << num1 / num2 << endl;
            }
            else {
                cout << "Error: Division by zero!" << endl;
            }
            break;

        default:
            cout << "Invalid choice!" << endl;
    }

    return 0;
}