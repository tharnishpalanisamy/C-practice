#include<iostream>
using namespace std ; 

int calculateGCD(int a , int b ) {
    while (b > 0 ) { 
        int temp = a ; 
        a = b ; 
        b = temp % b ; 
    }
    return a ; 
}

int calculateLCM(int a , int b ){
    int gcd = calculateGCD(a , b) ; 
    return a / gcd * b ; 
}
int main(){ 
    int a = 50 ; 
    int b = 150 ; 
    int gcd = calculateGCD(a,b);
    cout<< "GCD : " <<gcd ;  
    int lcm =  calculateLCM(a,b)   ; 
    cout<<"LCM : " << lcm ; 
    return 0 ; 
}