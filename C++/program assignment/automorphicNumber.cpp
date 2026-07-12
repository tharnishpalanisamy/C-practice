// 4. Automorphic Number
// An Automorphic Number is a number whose square ends with the same digits as the original number.

 
#include<iostream> 
using namespace std ; 

bool automorphicNumber(int n) {
    int temp = n * n ; 
    int numberLastDIgit = n % 10 ; 
    int squareLastDigit = temp % 10 ; 
    
    if(numberLastDIgit == squareLastDigit ){
        return true ; 
    }
    return false ; 
}

int main(){
    cout<<automorphicNumber(91) ; 
    return 0 ; 
}