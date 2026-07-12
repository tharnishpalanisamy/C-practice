#include <iostream>
using namespace std;

long long factorial(int n)
{
    long long fact = 1;

    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }

    return fact;
}

int main()
{
    int n, r;

    cout << "Enter N and R: ";
    cin >> n >> r;

    if (r > n || n < 0 || r < 0)
    {
        cout << "Invalid input!";
        return 0;
    }

    long long ncr = factorial(n) / (factorial(r) * factorial(n - r));

    cout << "NCR = " << ncr;

    return 0;
}