#include<iostream> 
using namespace std ; 

bool isPalindromeNumber(int n ) {
    int temp = 0 ; 
    int x = n ; 

    while (x > temp) { 
        temp = temp * 10 + x % 10 ; 
        x/= 10 ; 

    }
    return (temp == x || temp == x / 10) ; 
}

int main(){ 
    cout<< isPalindromeNumber(142) ;
    return 0 ; 
}