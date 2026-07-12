#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;

void decimalToHexadecimal(int decimal) {
    string hex = "";

    while (decimal > 0) {
        int rem = decimal % 16;

        if (rem < 10)
            hex = char(rem + '0') + hex;
        else
            hex = char(rem - 10 + 'A') + hex;

        decimal /= 16;
    }

    cout << "Hexadecimal = " << hex << endl;
}

void hexadecimalToDecimal(string hex) {
    int decimal = 0;
    int power = 0;

    for (int i = hex.length() - 1; i >= 0; i--) {
        char ch = hex[i];
        int value;

        if (ch >= '0' && ch <= '9')
            value = ch - '0';
        else
            value = ch - 'A' + 10;

        decimal += value * pow(16, power);
        power++;
    }

    cout << "Decimal = " << decimal << endl;
}

int main() {
    int choice;

    cout << "1. Decimal to Hexadecimal\n";
    cout << "2. Hexadecimal to Decimal\n";
    cout << "Enter your choice: ";
    cin >> choice;

    if (choice == 1) {
        int decimal;
        cout << "Enter Decimal Number: ";
        cin >> decimal;
        decimalToHexadecimal(decimal);
    }
    else if (choice == 2) {
        string hex;
        cout << "Enter Hexadecimal Number: ";
        cin >> hex;
        hexadecimalToDecimal(hex);
    }
    else {
        cout << "Invalid Choice!";
    }

    return 0;
}