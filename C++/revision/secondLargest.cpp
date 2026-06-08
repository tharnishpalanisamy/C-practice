#include<iostream> 
#include<climits> 
#include<cmath>
using namespace std ; 

int main(){
    
    double largest , secondL , least , secondS ; 
    largest = INT_MIN ; 
    least = INT_MAX ;  
    secondL = INT_MIN ; 
    secondS = INT_MAX ;
    int nums[5] = {5,4,3,2,5};
    int n = sizeof(nums) / sizeof(nums[0]);
    
    for(int i = 0 ; i < n ; i++) {
        if (nums[i] > largest ) {
            secondL = largest ; 
            largest = nums[i] ; 
            
        }
        else if (nums[i] > secondL) {
            secondL = largest ; 
        } 
        
        if (nums[i] < least) {
            secondS = least ; 
            least = nums[i] ;
        }
        else if (nums[i] < secondS) {
            secondS = nums[i] ; 
        }
    }
    cout<<largest ; 
    cout<<least ; 
    cout << secondS ; 
    cout << secondL ; 
    return 0 ; 
}