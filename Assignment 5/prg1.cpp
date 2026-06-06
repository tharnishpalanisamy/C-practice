#include<iostream>
#include<string> 
using namespace std ; 

class Employee {
    private :
    int empId ; 
    string name ; 
    
    protected : 
    double basicPay ; 
    int experience ; 
    
    public :
    Employee(){
        cout<<"Default constructor is used here" ;
        empId = 0 ; 
        name = "NIL" ; 
        basicPay = 1000 ; 
        experience = 0 ; 
        
    }
    Employee(int id , string n , double p , int e){
        cout<<"Parameterised constructor is used here" ;
        empId = id ; 
        name = n ; 
        basicPay = p ; 
        experience = e ;
    }
    void displayEmployee(){
        cout<<"Employee Id : " << empId <<endl ; 
        cout<<"Name : " << name <<endl ; 
        cout<<"Basic Salary : " << basicPay <<endl ; 
        cout<<"experince : " << experience <<endl ; 

    }
    ~Employee(){
        cout<<"Destructor is used for parent class 'Employee' ";
    }
};

class Salary : public Employee {
    private : 
    double hra , da , pf , netSalary , bonus ;
    
    public :
    Salary(int id , string n , double p , int e) : Employee(id,n,p,e) {
        cout<<"Parameterised Constructor is used for Salary Class"<<endl;
        hra = 0 ; 
        da = 0; 
        pf = 0 ; 
        netSalary = 0 ; 
        bonus = 0 ; 
    }
    void calculateSalary(){
        hra = basicPay * 0.20;
        da = basicPay * 0.12 ;
        pf = basicPay * 0.10 ; 
        if (experience >= 10 )  bonus = 5000 ; 
        else if (experience >= 5)  bonus = 2500 ; 
        netSalary = basicPay + hra + da - pf + bonus;
    }
    
    void displaySalary(){
        cout <<"Basic Pay : "  <<basicPay <<endl; 
        cout <<"DA : " <<da <<endl; 
        cout <<"HRA : " <<hra <<endl; 
        cout <<"Bonus : "  <<bonus <<endl; 
        cout <<"PF : "  <<pf <<endl; 
        cout<<"NetSalary : "<<netSalary<<endl;
    }
    
    ~Salary(){
        cout<<"Destructor is used For the Derived Class 'Salary' "<<endl ;
    }
};

int main(){
    Salary employee1(001,"Tharnish",15000,2) ; 
    employee1.calculateSalary(); 
    employee1.displayEmployee();
    employee1.displaySalary();
    
    return 0;
}