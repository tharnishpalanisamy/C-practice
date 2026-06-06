#include<iostream> 
using namespace std ; 

int main(){
    char str[100] ; 
    cout<<"Enter a String " ; 
    cin.getline(str,100) ; 
    
    for (int i = 0 ; str[i] != '\0' ; i ++) {
        if (str[i] >= 65 && str[i] <= 90) {
            str[i] = str[i] + 32 ;
        }
        else if (str[i] >= 97 && str[i] <= 122) {
            str[i] = str[i] - 32 ; 
        }
    }
    cout <<"the Converted String is "<<str ; 
    return 0;
}