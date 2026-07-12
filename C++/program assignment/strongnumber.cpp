// 1. Strong Number
// A Strong Number is a number whose sum of the factorials of its digits is equal to the original number.

#include<iostream> 
using namespace std ; 

int factorial(int n) {
    int fact = 1 ; 
    
    for (int i = 2 ; i<=n ; i++) {
        fact *= i ; 
    }
    return fact ; 
}

bool checkStrongNumber(int n) {
    int temp = n ; 
    int sum = 0 ; 
    
    while (temp > 0) {
        int digit = temp % 10 ; 
        sum += factorial(digit) ; 
        temp /= 10 ; 
    }
    if(sum == n) {
        return true ; 
    }
    else{
        return false; 
    }
    
}

int main(){
    cout<<checkStrongNumber(144) ; 
    return 0 ; 
}