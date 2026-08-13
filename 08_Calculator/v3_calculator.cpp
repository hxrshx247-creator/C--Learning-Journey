#include <iostream>
using namespace std;

// Function declarations
double add(double num1, double num2);
double subtract(double num1, double num2);
double multiply(double num1, double num2);
double divide(double num1, double num2);

void showMenu() {
    cout << "\n===== CALCULATOR =====\n";
    cout << "1. Addition\n";
    cout << "2. Subtraction\n";
    cout << "3. Multiplication\n";
    cout << "4. Division\n";
    cout << "5. Exit\n";
    cout << "Enter your choice: ";
}

int main() {

    double num1, num2;
    double result;
    int choice = 0;

    while (choice != 5) {

        showMenu();
        cin >> choice;

        if (choice != 5) {

            cout << "Enter the first number: ";
            cin >> num1;

            cout << "Enter the second number: ";
            cin >> num2;

            switch (choice) {

                case 1:
                    result = add(num1, num2);
                    cout << "Result: " << result << endl;
                    break;

                case 2:
                    result = subtract(num1, num2);
                    cout << "Result: " << result << endl;
                    break;

                case 3:
                    result = multiply(num1, num2);
                    cout << "Result: " << result << endl;
                    break;

                case 4:
                    result = divide(num1, num2);
                    cout << "Result: " << result << endl;
                    break;

                default:
                    cout << "Invalid choice. Please try again." << endl;
            }
        }
        else {
            cout << "Exiting the program." << endl;
        }
    }

    return 0;
}

// Function definitions

double add(double num1, double num2) {
    return num1 + num2;
}

double subtract(double num1, double num2) {
    return num1 - num2;
}

double multiply(double num1, double num2) {
    return num1 * num2;
}

double divide(double num1, double num2) {

    if (num2 != 0) {
        return num1 / num2;
    }
    else {
        cout << "Error: Division by zero!" << endl;
        return 0;
    }
}