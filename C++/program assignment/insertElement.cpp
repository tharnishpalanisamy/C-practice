#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[100];

    cout << "Enter the elements:";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int element, position;

    cout << "Enter the element to insert: ";
    cin >> element;

    cout << "Enter the position (1 to " << n + 1 << "): ";
    cin >> position;

    if (position < 1 || position > n + 1)
    {
        cout << "Invalid position!";
        return 0;
    }

    for (int i = n; i >= position; i--)
    {
        arr[i] = arr[i - 1];
    }

    arr[position - 1] = element;
    n++;

    cout << "\nArray after insertion:\n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}