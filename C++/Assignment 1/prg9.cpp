#include<iostream>
using namespace std ; 
int main(){
    int total = 0 ; 
    int i = 1;
    do {
        total += i ;
        i ++;
    }
    while(i <= 25) ;
    
    cout << "The sum of the numbers from 1 - 25 is :" <<total ; 
    return 0 ; 
}