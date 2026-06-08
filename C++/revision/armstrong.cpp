#include<iostream> 
#include<cmath>
using namespace std ; 

bool armstrong(int n) {
    int digits = 0  , temp ; 
    temp = n ; 
    
    while (temp > 0) {
        temp /= 10 ; 
        digits ++ ;
    }
    
    temp = n ; 
    
    int sum = 0 ; 
    
    while (temp > 0) { 
        sum += pow((temp% 10 ) , digits );
        temp /= 10 ; 
    }
    
    if (sum == n) {
        return true ; 
    }
    else{
        return false;
    }
    
    
}

int main(){
    cout<<armstrong(61) ; 
    return 0 ; 
}