#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int root = sqrt(n + 1);

    if (root * root == n + 1)
        cout << n << " is a Sunny Number.";
    else
        cout << n << " is not a Sunny Number.";

    return 0;
}