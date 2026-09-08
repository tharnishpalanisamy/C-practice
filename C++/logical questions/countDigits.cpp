#include<iostream> 
#include<vector> 
using namespace std ; 

int countDigits(int n ) {
    if (n < 10) {
        return 1 ; 
    }
    return 1 + countDigits(n / 10) ; 
}

int main(){ 
    int digits = countDigits(102345) ; 
    cout<<digits  ; 
    return 0 ; 
}