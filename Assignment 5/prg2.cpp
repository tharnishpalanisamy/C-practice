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
    void getData(){
        cout<<"Enter the Employee Id :" ; 
        cin >> empId ; 
        cout<<"Enter the Employee Name :" ; 
        cin >> name ; 
        cout<<"Enter the Basic Pay :" ; 
        cin >> basicPay ; 
        cout<<"Enter The Experience in Years :" ; 
        cin >> experience ; 
    }
    void displayEmployee(){
        cout<<"Employee Id : " << empId <<endl ; 
        cout<<"Name : " << name <<endl ; 
        cout<<"Basic Salary : " << basicPay <<endl ; 
        cout<<"experince : " << experience <<endl ; 

    }
};

class Salary : public Employee {
    private : 
    double hra , da , pf , netSalary , bonus ;
    
    public :
    void calculateSalary(){
        getData();
        hra = basicPay * 0.20;
        da = basicPay * 0.12 ;
        pf = basicPay * 0.10 ; 
        if (experience >= 10 )  bonus = 5000 ; 
        else if (experience >= 5)  bonus = 2500 ; 
        else bonus = 0;
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
};

int main(){
    Salary employee1; 
    employee1.calculateSalary(); 
    employee1.displayEmployee();
    employee1.displaySalary();
    
    return 0;
}