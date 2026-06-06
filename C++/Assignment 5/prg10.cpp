#include <iostream>
#include <string>
using namespace std;

class Vehicle {
protected:
    string brand;
    float basePrice;
public:
    Vehicle(string b, float p) : brand(b), basePrice(p) {
        cout << "Vehicle " << brand << " initialized." << endl;
    }
    void displayBaseInfo() {
        cout << "Brand: " << brand << " | Base Price: Rs. " << basePrice << endl;
    }
    virtual ~Vehicle() {
        cout << "Vehicle base destroyed." << endl;
    }
};
class Car : public Vehicle {
protected:
    int seats;
    float taxRate;
public:
    Car(string b, float p, int s) : Vehicle(b, p), seats(s) {
        taxRate = 0.18f; 
        cout << "Car layer initialized." << endl;
    }

    float calculateTax() {
        return basePrice * taxRate;
    }
    virtual ~Car() {
        cout << "Car layer destroyed." << endl;
    }
};

class ElectricCar : public Car {
private:
    float batteryCapacity;
    float unitRate;
public:
    ElectricCar(string b, float p, int s, float cap) 
        : Car(b, p, s), batteryCapacity(cap) {
        unitRate = 7.50f;
        cout << "ElectricCar layer initialized." << endl;
    }
    float calculateChargingCost() {
        return batteryCapacity * unitRate;
    }

    float calculateTotalPrice() {
        return basePrice + calculateTax();
    }

    void showDetails() {
        displayBaseInfo();
        cout << "Seats: " << seats << endl;
        cout << "Battery Capacity: " << batteryCapacity << " kWh" << endl;
        cout << "GST (Tax): Rs. " << calculateTax() << endl;
        cout << "Full Charge Cost: Rs. " << calculateChargingCost() << endl;
        cout << "Total On-Road Price: Rs. " << calculateTotalPrice() << endl;
    }
        ~ElectricCar() {
        cout << "ElectricCar layer destroyed." << endl;
    }
};
int main() {
    ElectricCar myTata("Tata Nexon EV", 1500000.0, 5, 40.5);
    
    cout << "\n--- Vehicle Summary ---" << endl;
    myTata.showDetails();
    cout << "-----------------------\n" << endl;
    return 0;
}
