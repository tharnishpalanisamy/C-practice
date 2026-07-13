#include<iostream>
#include<cmath> 
using namespace std  ; 

int factorial(int n) {
    int fact = 1 ; 
    for (int i = 2 ; i <= n ; i++){
        fact *= i ; 
    }
    return fact ; 
}

double sinSeries(double radian , int n ) {
    int sign = 1 ; 
    double sum = 0 ; 
    int val = 0 ;
    for (int i = 1 ; i <= n ; i++  ) { 
        val = (i*2) - 1 ; 
        sum += sign * (pow(radian,val) / factorial(val));
        sign *= -1 ; 
    }
    return sum ; 
    
}

double cosSeries(double radian , int n) {
    double sum = 1 ; 
    int sign = -1 ; 
    
    for(int i = 1; i < n ; i++) {
        int val = i * 2 ; 
        sum += sign * (pow(radian , val) / factorial(val)) ;
        sign *= -1 ;
    }
    return sum ; 
}

int main(){
    double x = 30 ; 
    x = x * 3.14 / 180 ; 
    cout<<sinSeries(x,4)<<endl;
    cout<<cosSeries(x,4) ; 
    
    return 0 ; 
}










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