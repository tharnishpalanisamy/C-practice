#include<iostream> 
using namespace std ;

void fibSeries(int n) {
    int prev = 0 ; 
    int cur = 1 ; 
    cout<< 0 <<" " << 1 ; 
    for (int i = 2 ; i < n ; i ++) {
        cout << " " << prev + cur ; 
        int next = cur + prev ; 
        prev = cur ; 
        cur = next ; 
    }
}

int main(){
    fibSeries(7) ; 
    return 0 ; 
}