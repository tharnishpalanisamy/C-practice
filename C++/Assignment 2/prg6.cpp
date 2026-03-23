#include <iostream>
using namespace std;

int isPrime(int n) {
    if (n <= 1) return 0;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}
int main() {
    int start, end;
    
    cout << "Enter The starting range : ";
    cin >> start;
    cout << "Enter The Ending range : ";
    cin >> end;

    cout << "Prime numbers between " << start << " and " << end << ":" << endl;
    for (int i = start; i <= end; i++) {
        if (isPrime(i)) {
            cout << i << " ";
        }
    }
    cout << endl;

    return 0;
}
