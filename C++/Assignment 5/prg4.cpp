#include<iostream> 
#include<string> 
using namespace std ; 
class Vehicle{
    protected:
    string brand ; 
    double price ; 
    
    public :
    Vehicle(string b , double p){
        brand = b ; 
        price = p ;
    }
    void displayVehicle(){
        cout<<"Brand of the vehicle : " <<brand <<endl; 
        cout<<"Price of the Car : "<<price << endl ; 
    }
}; 
class Bike:public Vehicle{
    private :
    int engineCapacity ; 
    double insurance ; 
    public :
    Bike(int e , string b , double p) : Vehicle(b,p){
        engineCapacity = e ; 
        if (engineCapacity >= 200 )insurance = 5000 ;  
        else insurance = 2500 ;
    }
    void display(){
        displayVehicle();
        cout<<"Engine Capacity : "<<engineCapacity <<endl ; 
        cout<<"Insurance Cost : "<<insurance <<endl ; 
    }
} ; 
class Car : public Vehicle{
    private :
    int seats ; 
    double roadTax ; 
    
    public :
    Car(int s , string b , double p ) : Vehicle(b,p) {
        seats = s;
        roadTax = p * 0.08 ; 
        
    }
    void display(){
        displayVehicle();
        cout<<"No of seats : "<<seats << endl ; 
        cout <<"Road Tax : " << roadTax << endl ;
        
    }
};
int main(){
    Car car1(4,"BMW",800000) ; 
    Bike bike1(250 , "KTM" , 300000) ; 
    car1.display() ; 
    bike1.display();
    
    return 0 ;
}