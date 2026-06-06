#include<iostream>
#include<climits> 
#include<vector>
using namespace std ; 
int main(){
    int n ;
    cout <<"Enter the number of elements in the array :" ; 
    cin >> n ; 
    
    vector<int> input(n) ;
    for (int i = 0 ; i < n ; i ++){
        cout << "Enter Element " << i+1 <<" : "; 
        cin >> input[i] ;
        
    }
    vector<int> even ; 
    vector<int> odd ; 
    
    for (int x : input) {
        if (x % 2 == 0 ) {
            even.push_back(x);
        }
        else{
            odd.push_back(x);
        }
    }
    cout<<"The Values of the even Array : " ; 
    for(int n : even) {
        cout << n << " " ;
    }
    cout<<"\nThe values of the odd Array :" ;
    for (int n : odd) {
        cout << n << " " ;
    }
    return 0 ;
}