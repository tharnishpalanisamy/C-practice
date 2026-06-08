#include<iostream> 
#include<cmath>
using namespace std ; 

bool palindrome(string str) {
    int l = 0 ; 
    int r = (str.length()) - 1 ;
    
    while (l < r ) {
        if (str[l] != str[r] ) {
            return false;
        }
        l++ ; 
        r --; 
    }
    return true;
    
}

int main(){
    cout<<palindrome("malayalam") ; 
    return 0 ; 
}