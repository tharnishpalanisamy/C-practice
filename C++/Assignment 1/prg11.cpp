#include <iostream>
using namespace std;

int main() {
    int a = 10 ; 
    int b = 12 ; 
    
    cout << "Initally a = " <<a << endl; 
    cout << "initally b = " << b << endl ; 
    cout << "a & b (AND) = " << (a&b) <<endl ; 
    cout << "a | b (OR)  = " <<(a|b) <<endl; 
    cout << "a ^ b (XOR) = " <<(a^b) << endl ; 
    cout << "a<<2 (Left Shift) = " <<(a<<2) <<endl ; 
    cout << "a>>2 (Right Shidt ) = " <<(a>>2)<<endl;

    return 0;
}
