#include<iostream> 
#include<string> 
using namespace std ;
int main(){
    string connectionType ;
    float prevUnits , curUnits , usage , bill ; 
    cout << "Enter your connection Type (r/c) : ";
    cin>> connectionType ; 
    cout << "Enter the pRevious month Reading :" ; 
    cin >> prevUnits ; 
    cout << "Enter the current month Reading : " ;
    cin >> curUnits ; 
    usage = curUnits - prevUnits;
    if (connectionType == "r") {
        if (usage <= 100){
            bill = 0;
        }   
        else if (usage <= 200) {
            bill += (usage - 100) * 2.25 ;
        }
        else if (usage <= 500) {
            bill = (100 * 2.25) +  (usage - 200 ) *  4.5 ;
        }
        else {
            bill = (100 * 2.25) + (300 * 4.5) + (usage - 500) * 6;
        }
        } 
    else {
        if (usage <= 100){
            bill = 0;
        }   
        else if (usage <= 400) {
            bill += (usage - 100) * 4.5 ;
        }
        else if (usage <= 700) {
            bill = (300 * 4.5) +  (usage - 400 ) * 6 ;
        }
        else if(usage <= 1000) {
            bill = (300*4.5) + (300*6) + (usage - 600) * 9;
        }
        else {
            bill = (300*4.5) + (300*6) + (usage - 600) * 9 + (usage - 1000) * 10;
        }
    } 
    cout <<"\nUnits Consumed :"<<usage<<endl;
    cout <<"\nTotal Bill is :" << bill <<endl;
    return 0;
}