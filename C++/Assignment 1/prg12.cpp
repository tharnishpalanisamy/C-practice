#include <iostream>
using namespace std;

int main() {
    int num , rev = 0 , temp ; 
    
    cout <<"Enter a Number to check if it is Palindrome : "; 
    cin >> num ;
    temp = num ;
    
    while (temp > 0 ) {
        rev = (rev*10) + (temp % 10) ;
        temp = (temp / 10);
    }
    if (rev == num ) {
        cout <<"The reverse of the Number is " <<rev <<"And it is a Palindrome" <<endl ;
    }
    else{
        cout <<"The reverse of the Number is " <<rev <<"And it is not a Palindrome" <<endl ;
    }
    
    return 0;
}
