#include<iostream> 

using namespace std ; 


int main(){ 
    int arr[26] = {} ;
    string word = "swiss" ; 

    for(char c : word) {
        int i = c - 'a' ; 
        arr[i] += 1 ; 
    } 

    for(char c : word) {
        int i = c - 'a' ; 
        if (arr[i] == 1 ) {
            cout << c ; 
            break ; 
        }
    }
    return 0 ; 
}