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

double power(double x, int n)
{
    double result = 1;

    for (int i = 1; i <= n; i++)
    {
        result *= x;
    }

    return result;
}

int main()
{
    int choice, terms;
    double x, sum = 0;

    cout << "1. Sine Series\n";
    cout << "2. Cosine Series\n";
    cout << "Enter your choice: ";
    cin >> choice;

    cout << "Enter the value of x: ";
    cin >> x;

    cout << "Enter the number of terms: ";
    cin >> terms;

    switch (choice)
    {
        case 1:
            // sin(x) = x - x^3/3! + x^5/5! - ...
            for (int i = 0; i < terms; i++)
            {
                double term = power(x, 2 * i + 1) / factorial(2 * i + 1);

                if (i % 2 == 0)
                    sum += term;
                else
                    sum -= term;
            }

            cout << "Sum of Sine Series = " << sum;
            break;

        case 2:
            // cos(x) = 1 - x^2/2! + x^4/4! - ...
            for (int i = 0; i < terms; i++)
            {
                double term = power(x, 2 * i) / factorial(2 * i);

                if (i % 2 == 0)
                    sum += term;
                else
                    sum -= term;
            }

            cout << "Sum of Cosine Series = " << sum;
            break;

        default:
            cout << "Invalid Choice!";
    }

    return 0;
}