#include<iostream>
#include<string> 
using namespace std ; 

class Person{
    private :
    string name ; 
    int age ; 
    
    public :
    Person(int a , string n ){ 
        age = a ; 
        name = n;
    }
    
    void displayPerson(){
        cout<<"Name : "<<name <<endl ; 
        cout<<"Age : "<<age <<endl ;
    }
};

class Employee : public Person{
    protected :
    double salary ; 
    int experience ; 
    
    public :
    Employee(double s , int e , int a , string n) : Person(a , n){
        salary = s ;
        experience = e ;
    }
    void displayEmployee(){
        cout <<"Salary : "<<salary <<endl ; 
        cout<<"Experience : " << experience << endl ;  
    }
}; 

class Customer : public Person{
    protected :
    double accountBalance ; 
    
}; 

class LoanApplicant : public Employee{
    private :
    double loanAmount , interest , emi ; 
    bool eligible ; 
    
    public :
    LoanApplicant(double l,double sal , int e , int a , string s ): Employee(sal ,e ,a , s){
        loanAmount = l ;
        if (salary >= 50000) {
            eligible = true ;
        }
        else { 
            eligible = false ; 
        } 
        interest = 0 ; 
        emi = 0 ; 
        
    }
    void calculateInterest(){
        if (loanAmount <= 500000) {
            interest = 0.08 ;
        }
        else interest = 0.10 ; 
        
        interest = loanAmount * interest;
        emi = (loanAmount + interest) / 12 ; 
    }
    void display(){
        cout<<"Loan Amount Requested :" <<loanAmount <<endl ; 
        if (eligible){
        cout <<"You are eligible for the Loan "<<endl; 
        cout <<"Interest for the Loan Amount :" <<interest <<endl;
        cout <<"Your monthly EMI : " <<emi <<endl ; 
        }
        else cout <<"You are not eligible for the Loan " ; 
    }
    
};
int main(){
    LoanApplicant person1(500000,65000,10 , 32 , "Tharnish") ;
    person1.displayPerson() ; 
    person1.displayEmployee() ; 
    person1.calculateInterest() ; 
    person1.display();
    return 0;
}