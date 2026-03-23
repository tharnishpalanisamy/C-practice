#include<iostream>
#include<vector>
using namespace std ; 
int main(){
    int n , target ;
    cout <<"Enter the number of elements in the array :" ; 
    cin >> n ; 
    vector<int> input(n) ;
    for (int i = 0 ; i < n ; i ++){
        cout << "Enter Element " << i+1 <<" : "; 
        cin >> input[i] ;
    }
    cout << "Enter the Number you want to search :" ;
    cin >> target ;
    cout<<"Linear Search" <<endl;;
    for(int i = 0 ; i < n ; i ++) {
        if (input[i] == target) {
            cout<<"The target is found at the index " << i ; 
            break ;
        }
    }
    return 0 ;
}