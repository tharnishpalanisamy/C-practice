#include<iostream>
#include<cmath>
using namespace std ; 

int isArmstrong(int n) {
    int digits = 0 , temp = n , sum = 0 ; 
    
    while (temp > 0) {
        digits ++ ; 
        temp /= 10 ;
    }
    temp = n ;
    
    while (temp > 0 ) {
        int rem = temp % 10 ;
        sum += pow(rem,digits) ; 
        temp /= 10;
        
    }
    return (sum == n) ? 1 : 0 ;
    
}

int main(){
    int n ; 
    cout<<"enter the Number : " ;
    cin >> n ; 
    
    if (isArmstrong(n)) cout <<"The Number is Armstrong Number " ;
    else cout <<"not a Armstrong Num";
    return 0 ;
}