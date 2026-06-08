#include<iostream> 
#include<cmath>
using namespace std ; 

bool isPrime(int n ) {
    if (n <= 2 ) {
         cout<<"false" ;
         return false ; 
    }
    
    for(int i = 2 ; i*i <= n ; i++ ) {
        if(n % i == 0 ) {
            cout<<"false" ; 
            return false; 
        }
    }
    cout<<"True" ;
    return true;
}

int main(){
    cout<<isPrime(41) ; 
    return 0 ; 
}