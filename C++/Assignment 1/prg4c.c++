#include <iostream>
using namespace std;

int main() {
    int num, i = 1;
    cout << "Enter a number: ";
    cin >> num;

    cout << "Factors (do-while loop): ";
    if (num > 0) {
        do {
            if (num % i == 0) {
                cout << i << " ";
            }
            i++;
        } while (i <= num);
    }
    return 0;
}
