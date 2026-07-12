// 2. Neon Number
// A Neon Number is a number whose sum of the digits of its square is equal to the original number.


#include<iostream> 
using namespace std ; 

bool neonNumber(int n) {
    int temp = n * n ; 
    int sum = 0 ; 
    
    while (temp > 0) { 
        int digit = temp % 10 ; 
        sum += digit ; 
        temp /= 10 ; 
    }
    if (sum ==n) {
        return true ; 
    }
    else{
        return false ; 
    }
}

int main(){
    cout<<neonNumber(9) ; 
    return 0 ; 
}