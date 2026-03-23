#include<iostream> 
#include<cstring>
using namespace std ; 

int main(){
    char str[100] , res[100];
    cout<<"Enter a string :" ; 
    cin >> str ; 
    int pos = 0 ;
    for (int i = 0 ; str[i] != '\0' ; i ++) {
        bool isDup = false ; 
        for (int j = 0 ; j < i ; j ++) {
            if (str[j] == str[i] ) {
                isDup = true ; 
                break;
            }
        }
        if(!isDup) {
            res[pos] = str[i] ; 
            pos ++;
        }
        
    }
    cout <<"The String After removing Duplicates : " << res ;
    return 0 ; 
}