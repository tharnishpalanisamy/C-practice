#include <iostream>
#include<cstring>
using namespace std ;

int main() {
    char str[100] , res[100] ; 
    int pos = 0 , count = 0 ;  
    cout<<"Enter a string : " ; 
    cin >> str ;
    for (int i = 0 ; str[i] != '\0' ; i ++) {
        if ((str[i] >= '0' && str[i] <= '9') || 
            (str[i] >= 'A' && str[i] <= 'Z') || 
            (str[i] >= 'a' && str[i] <= 'z')) {
            res[pos] = str[i];
            pos++; 
        }
        else{
            count ++;
        }
    }
    res[pos] = '\0';
    cout <<"The Output :" << res <<endl ; 
    cout<<"Count" << count ; 
    return 0;
}