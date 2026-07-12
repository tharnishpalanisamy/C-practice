// 6. Spy Number
// A Spy Number is a number whose sum of digits is equal to the product of its digits.


 
#include<iostream> 
using namespace std ;  

bool spyNumber(int n) {
    int sum = 0 ; 
    int product = 1 ; 
    int temp = n ; 
    while(temp > 0 ) {
        int digit = temp % 10 ; 
        temp /= 10 ; 
        sum += digit ; 
        product *= digit ; 
    }
    if(sum == product) {
        return true ;
    }
    return false ; 

}

int main(){
    cout<<spyNumber(1245) ; 
    return 0 ; 
}