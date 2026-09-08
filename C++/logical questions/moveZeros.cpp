#include<iostream> 
#include<vector> 
using namespace std ; 


int main(){ 
    int arr[] = {1,5,4,0,8,0,8,0,8,6} ; 
    int l = 0 ; 
    int r = sizeof(arr) / sizeof(arr[0]) -1 ; 

    for(int i = 0 ; i < sizeof(arr) / sizeof(arr[0]) ; i++){
        cout<<arr[i] << " " ; 
    }
    while( l < r) {
        while(arr[l] != 0 && l < r)  {
            l++ ; 
        } 
        while(arr[r] == 0 && r > l ) {
            r --  ; 
        }
        swap(arr[l],arr[r]) ;
        l ++ ; 
        r -- ; 
    }
    cout<<"\n" ; 
    for(int i = 0 ; i < sizeof(arr) / sizeof(arr[0]) ; i++){
        cout<<arr[i] << " " ; 
    }
    return 0 ; 
}