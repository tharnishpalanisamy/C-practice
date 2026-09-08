#include <iostream>
#include <cmath>
#include<string>
using namespace std;

int main() {
    int choice;

    cout << "1. Decimal to Binary\n";
    cout << "2. Binary to Decimal\n";
    cout << "Enter your choice: ";
    cin >> choice;

    if (choice == 1) {
        int n;
        string binary = "";

        cout << "Enter Decimal Number: ";
        cin >> n;

        while (n > 0) {
            binary = to_string(n % 2) + binary;
            n /= 2;
        }

        cout << "Binary = " << binary;
    }
    else if (choice == 2) {
        int binary;
        int decimal = 0;
        int power = 0;

        cout << "Enter Binary Number: ";
        cin >> binary;

        while (binary > 0) {
            int digit = binary % 10;
            decimal += digit * pow(2, power);
            power++;
            binary /= 10;
        }

        cout << "Decimal = " << decimal;
    }
    else {
        cout << "Invalid Choice";
    }

    return 0;
}