// 5. Duck Number
// A Duck Number is a number that contains at least one zero, but the zero should not be the leading digit.

 
#include<iostream> 
using namespace std ; 

bool duckNumber(int n) {
    if (n % 10 == 0) {
        return false ; 
    }
    int temp = n ; 
    while(temp > 0 ) {
        int digit = temp % 10 ; 
        if (digit == 0)  {
            return true ; 
        }
    }
    return false ; 

}

int main(){
    cout<<duckNumber(91) ; 
    return 0 ; 
}