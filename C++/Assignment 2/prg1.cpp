#include<iostream>
#include<vector>
#include<climits>
using namespace std ; 

int main(){
    int n , largest  = INT_MIN, second_largest =INT_MIN  , least = INT_MAX , second_smallest = INT_MAX  ; 
    cout << "Enter the no of elements in the array : " ; 
    cin >> n ; 
    vector<int>arr(n) ;
    
    for (int i = 0 ; i < n ; i++  ) {
        cout <<"Enter element "<<(i+1) << ":"; 
        cin >> arr[i] ;
    }
    
    for (int x : arr) {
        if (x > largest) {
            second_largest = largest ; 
            largest = x;
        }
        else if (x > second_largest) {
            second_largest = x ;
        }
        
        if (x < least) {
            second_smallest = least ;
            least = x;
        }
        else if (x < second_smallest) {
            second_smallest = x;
        }
    }
    cout <<"The second largest element is :" <<second_largest<<endl;
    cout<<"The second Smallest Element is  : " <<second_smallest<<endl;
    
    return 0 ;
}