#include <iostream>
using namespace std;

bool isPrime(int n)
{
    if (n < 2)
        return false;

    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main()
{
    int n;

    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];
    int prime[n], nonPrime[n];
    int p = 0, np = 0;

    cout << "Enter " << n << " numbers:\n";

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];

        if (isPrime(arr[i]))
            prime[p++] = arr[i];
        else
            nonPrime[np++] = arr[i];
    }

    cout << "\nPrime Numbers: ";
    for (int i = 0; i < p; i++)
        cout << prime[i] << " ";

    cout << "\nNon-Prime Numbers: ";
    for (int i = 0; i < np; i++)
        cout << nonPrime[i] << " ";

    return 0;
}   