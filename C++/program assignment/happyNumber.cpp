// 8. Happy Number
// A Happy Number is a number that eventually becomes 1 when it is repeatedly replaced by the sum of the squares of its digits.
// If the process reaches 1, it is a Happy Number. Otherwise, it enters a repeating cycle and is called an Unhappy Number.



#include <iostream>
#include <cmath>
#include<set>
using namespace std;

bool happyNumber(int n) {
    set<int> seen;

    while (n != 1 && seen.count(n) == 0) {
        seen.insert(n); 

        int sum = 0;

        while (n > 0) {
            int digit = n % 10;
            sum += digit * digit;
            n /= 10;
        }

        n = sum;
    }

    return n == 1;
}

int main() {
    cout<<happyNumber(91) ; 
    return 0;
}