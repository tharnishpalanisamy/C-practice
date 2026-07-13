#include <iostream>
#include <cmath>

using namespace std;

string decimalToHexadecimal(int n) {
    string hexDigits = "0123456789ABCDEF";
    string res = "";
    
    while (n > 0) {
        int digit = n % 16;
        res = hexDigits[digit] + res;
        n /= 16;
    }
    return res;
}

int hexadecimalToDecimal(string hex) {
    int sum = 0;
    int power = 0;
    int val;
    
    for (int i = hex.length() - 1; i >= 0; i--) {
        char c = hex[i];
        if (c >= '0' && c <= '9') {
            val = c - '0';
        } else {
            val = c - 'A' + 10;
        }
        sum += val * pow(16, power);
        power++;
    }
    return sum;
}

int main() {
    cout << decimalToHexadecimal(24); 
    cout << endl;
    
    cout << hexadecimalToDecimal("18"); 
    
    return 0;
}
