#include<iostream> 
#include<string> 
using namespace std ; 

class ATM{
    float balance = 1000 ; 
    int pinCode ; 
    public :
    void createAccount(int pin , int initialAmount) {
        pinCode = pin ; 
        balance = initialAmount;
        cout<<"Account is created " <<endl; 
    }
    void deposit(float amount , int pin){
        if (pin == pinCode) {
        balance += amount ; 
        cout <<"Rupees "<<amount << " Has been Added to your account And your Current Balance is "<<balance<<endl;
    }
        else cout<<"Pin does not match";
    }
    
    void withdraw(float amount , int pin){
        if (pin == pinCode) {
            if (balance >= amount) {
                balance -= amount ; 
                cout <<"You have withdraw " <<amount <<" And Your Remanining Balance is " <<balance <<endl ; 
            }
            else {
                cout<<"insufficient Balance " ;
            } }
        else{
            cout <<"pin does not match" ;
        }
    }
    void showBalance(int pin) {
        if (pin == pinCode) {
            cout <<"Your current Balance is : "<<balance <<endl;
        }
        else cout<<"pin does not match" ;
    }
};
int main(){
    ATM account1 ; 
    account1.createAccount(1311,5000) ; 
    account1.deposit(1000,1311);
    account1.withdraw(2000,1311);
    account1.withdraw(3500,1311);
    return 0;
}