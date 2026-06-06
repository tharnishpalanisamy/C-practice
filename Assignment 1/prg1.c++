#include<iostream> 
#include<string>
using namespace std;

int main(){
    int code;
    string name ,  dept ;
    float basic , hra , da , pf , tax , gorss , deduction , net ;

    cout <<"Enter employee Code :" ; 
    cin >> code ;
    cout << "Enter The Employee Name:";\
    cin >> name ;
    cout <<"Enter employee dept "; 
    cin >> dept ; 
    cout << "Enter the basic pay" ; 
    cin >> basic ; 
    

    if (basic > 20000) {
        da = basic * 0.585; 
        hra = basic * 0.15;
        pf = basic * 0.20;  
        tax = basic * 0.17;  
    } 
    else if (basic > 15000) {
        da = basic * 0.46;   
        hra = basic * 0.12; 
        pf = basic * 0.15;   
        tax = basic * 0.12; 
    } 
    else {
        da = basic * 0.425;  
        hra = 1500;          
        pf = basic * 0.10;  
        tax = 0;      
    }
    float gross = da + hra + basic ;
    deduction = pf + tax ; 
    net = gorss - deduction ; 

    cout << "\n--- PAYROLL DETAILS ---" << endl;
    cout << "Employee Code: " << code << endl;
    cout << "Employee Name: " << name << endl;
    cout << "Department: " << dept << endl;
    cout << "Basic Pay: " << basic << endl;
    cout << "DA: " << da << endl;
    cout << "HRA: " << hra << endl;
    cout << "PF: " << pf << endl;
    cout << "Tax: " << tax << endl;
    cout << "Gross Pay: " << gross << endl;
    cout << "Deduction: " << deduction << endl;
    cout << "Net Pay: " << net << endl;

    return 0;
}