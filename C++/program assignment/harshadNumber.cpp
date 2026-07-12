// 3. Harshad (Niven) Number
// A Harshad Number (also called a Niven Number) is a number that is completely divisible by the sum of its digits.
// Examples

#include<iostream> 
using namespace std ; 

bool HarshadNumber(int n) {
    int temp = n ; 
    int sum = 0 ; 
    
    while (temp > 0) { 
        int digit = temp % 10 ; 
        sum += digit ; 
        temp /= 10 ; 
    }
    if (n % sum == 0 ) {
        return true ; 
    }
    else{
        return false ; 
    }
}

int main(){
    cout<<HarshadNumber(91) ; 
    return 0 ; 
}