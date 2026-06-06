#include<iostream>
#include<string> 
using namespace std ; 

class Base{
    private :
    int a ; 
    protected :
    int b ; 
    public :
    int c ; 
    
    Base(int a , int b , int c) {
        this -> a = a ; 
        this -> b = b ; 
        this -> c = c ; 
    
    } 
    void displayPrivate(){
        cout <<"Private Variables accessible only within The base Class \nthe Private Variables are : " <<a<<endl ; 
    }
} ; 

class Derived : public Base {
    public :
    Derived(int a , int b , int c ) : Base(a,b,c) {
        cout <<"Protected Variables can be Accesses within the Class itself and the Subclasses \nthe Protected variables are " << b <<endl ; 
    }
} ; 

int main(){
    Derived d1(1,2,3) ;
    d1.displayPrivate();
    cout<<"The public variables can be Accessed within the class , subclass and even from outside the Class \nthe public variables are : " << d1.c  ;
    return 0 ;
}