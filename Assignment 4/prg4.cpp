#include<iostream> 
#include<string> 
#include<iomanip>
using namespace std ; 

class Product{
    int id , quantity; 
    string name ; 
    float price , total , discount , bill ; 
    
    public :
    void getData(){
        cout <<"Enter Product id : ";
        cin >> id ; 
        cout << "Enter the name of the Product : " ; 
        cin >> name ; 
        cout << "Enter Quantity : " ; 
        cin >> quantity ; 
        cout<<"Enter the price of the product :" ; 
        cin >> price ; 
    }
    void calculateAmount(){
        total = price * quantity ; 
    }
    void calculateDiscount(){
        if (total < 1000) {
            discount = 0;
        }
        else if (total < 5000) {
            discount = 0.05 ;
        }
        else if (total < 10000) {
            discount = 0.10 ;
        }
        else if (total < 20000) {
            discount = 0.15 ; 
        }
        else if (total >= 20000) {
            discount = 0.20 ;
        }
    }
    void calculatePayableAmount(){
        discount = total * discount ;
        bill = total - discount ; 
    }
    void display(){
        cout << left << setw(8) << id 
         << setw(10) << name << fixed<<setprecision(2)
         << setw(10) << price << setw(10) << quantity 
         << setw(10) << total << setw(10)  << discount 
         << setw(10) << bill << endl;
        
    }
};
int main(){
    int n ; 
    cout<<"Enter the no of products :" ; 
    cin >> n ; 
    Product p[n] ;  
    for (int i = 0 ; i < n ; i ++) {
        cout <<"enter details of Product : " << endl ; 
        p[i].getData(); 
        p[i].calculateAmount() ; 
        p[i].calculateDiscount() ; 
        p[i].calculatePayableAmount() ; 
    }
    
    cout<<"The details Of the Products : " <<endl ; 
    cout<<"---------------------------------------------------------------------------";
    cout<<"\nId     Name      Price     QTY     Total     Discount     Payable Amount " << endl ; 
    cout<<"---------------------------------------------------------------------------"<<endl;; 
    for(int i =0 ; i < n ; i ++) {
        p[i].display();
    }

    
    return 0;
}