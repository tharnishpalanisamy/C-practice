#include<iostream>
#include<vector>
using namespace std ; 
int main(){
    int n , target ;
    cout <<"Enter the number of elements in the array :" ; 
    cin >> n ; 
    vector<int> input(n) ;
    for (int i = 0 ; i < n ; i ++){
        cout << "Enter Element "<< i+1<<" (Increasing Order) : "; 
        cin >> input[i] ;
    }
    cout << "Enter the Number you want to search :" ;
    cin >> target ;
    cout<<"Binary Search" <<endl;
    int l = 0 ; 
    int r = n - 1 ; 
    bool found = false ;
    while ( l <= r ) {
        int mid = (l+r) / 2 ; 
        if (input[mid] == target ) {
            cout<<"Target is Found using binary Search at index "<<mid ; 
            found = true;
            break;
        }
        else if(input[mid] > target) {
            r = mid - 1 ;
        }
        else{
            l = mid;
        }
    }
    if (found = false) {
        cout<<"\nElement not Found" ;
    }
    return 0 ;
}