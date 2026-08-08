//Find the type of triangle (equilateral, isosceles, scalene).

#include <iostream>
using namespace std;

int main() {
    double a, b, c;
    cout << "Enter three sides of the triangle: ";
    cin >> a >> b >> c;

    if ((a + b <= c) || (a + c <= b) || (b + c <= a)) {
        cout << "These sides cannot form a valid triangle." << endl;
    } 
    else if (a == b && b == c) {
        cout << "It is an Equilateral triangle." << endl;
    } 
    else if (a == b || b == c || a == c) {
        cout << "It is an Isosceles triangle." << endl;
    } 
    else {
        cout << "It is a Scalene triangle." << endl;
    }
    return 0;
}