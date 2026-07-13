// 5. Duck Number
// A Duck Number is a number that contains at least one zero, but the zero should not be the leading digit.

 
#include <iostream>
#include <string>
using namespace std;

int main() {
    string num;
    cout << "Enter a number: ";
    cin >> num;
    if (num[0] == '0') {
        cout << num << " is not a Duck Number.";
        return 0;
    }

    bool isDuck = false;

    for (int i = 1; i < num.length(); i++) {
        if (num[i] == '0') {
            isDuck = true;
            break;
        }
    }

    if (isDuck)
        cout << num << " is a Duck Number.";
    else
        cout << num << " is not a Duck Number.";

    return 0;
}