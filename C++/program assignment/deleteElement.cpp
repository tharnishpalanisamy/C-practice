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
            k--; 
            continue;
        }

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





//2nd way
#include<iostream>
#include<set>

using namespace std;

int main(){
    int arr[100];
    int n;
    
    cout << "Enter no of elements : " << endl;
    cin >> n;
    
    for (int i = 0; i < n; i++){
        cout << "Enter element " << i + 1 << ":";
        cin >> arr[i];
    }
    
    int deletions;
    cout << "Enter no of elements to delete : ";
    cin >> deletions;
    
    set<int> deleteSet;
    for(int i = 0; i < deletions; i++) {
        int el;
        cout << "Enter positions to delete elements " << i + 1 << " : ";
        cin >> el;
        deleteSet.insert(el);
    }
    
    int res[100];
    int pos = 0;
    
    for(int i = 0; i < n; i++){
        if (deleteSet.count(i) == 0) {
            res[pos++] = arr[i];
        }
    }
    
    cout << "Result after deleting " << endl;
    for(int i = 0; i < pos; i++) {
        cout << res[i] << " ";
    }
    
    return 0;
}
