#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[100];

    cout << "Enter the elements:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int deletions;
    cout << "How many elements do you want to delete? ";
    cin >> deletions;

    for (int k = 0; k < deletions; k++)
    {
        int position;

        cout << "Enter position to delete (1 to " << n << "): ";
        cin >> position;

        if (position < 1 || position > n)
        {
            cout << "Invalid position!\n";
            k--; // Ask again
            continue;
        }

        // Shift elements to the left
        for (int i = position - 1; i < n - 1; i++)
        {
            arr[i] = arr[i + 1];
        }

        n--;
    }

    cout << "\nArray after deletions:\n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}