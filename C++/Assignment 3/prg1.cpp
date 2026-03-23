#include<iostream>
#include<cstring> 
using namespace std ; 


int main(){
    char str[100] ; 
    cout << "Enter a string " ; 
    cin >> str ; 
    
    int length = strlen(str) ; 
    bool isPalindrome = true ;
    
    for (int i = 0 ; i < length /2 ; i ++) {
        if (tolower(str[i]) != tolower(str[length - i - 1])) {
            isPalindrome = false ;
            break;
        }
    }
    
    if (isPalindrome) {
        cout << "The Reverse of the String is "<<str<<" and it is a Palindrome " ;
    }
    else cout << " the String is not a Palindrome " ;
    return 0;
}
