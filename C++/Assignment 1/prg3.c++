#include <iostream>
using namespace std;

int main() {
    float a, b, c;

    cout << "Enter three sides: ";
    cin >> a >> b >> c;

    if (a == b && b == c) {
        cout << "Equilateral Triangle" << endl;
    } 
    else if (a == b || b == c || a == c) {
        cout << "Isosceles Triangle" << endl;
    } 
    else {
        cout << "Scalene Triangle" << endl;
    }

    if ((a*a + b*b == c*c) || (a*a + c*c == b*b) || (b*b + c*c == a*a)) {
        cout << "Right-Angled Triangle" << endl;
    }

    return 0;
}
