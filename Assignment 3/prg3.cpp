#include<iostream> 
#include<cstring>
using namespace std ; 

int main(){
    char str[100] ; 
    cout<<"Enter a string :" ; 
    cin >> str ; 
    
    for (int i = 0 ; str[i] != '\0' ; i ++) {
        bool isVisited = false;
        
        for (int j = 0 ; j < i ; j ++) {
            if (str[j] == str[i]) {
                isVisited = true ;
            }
        }
        if (!isVisited) {
            int count = 1 ; 
            for(int j = i +1 ; j < strlen(str) ; j ++){
                if (str[i] == str[j]) {
                    count ++;
                }
            }
            cout << str[i] <<" = " << count<<endl; ; 
        }
    }
    
    
    return 0 ; 
}