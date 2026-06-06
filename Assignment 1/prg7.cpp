#include<iostream> 
#include<string>
using namespace std ; 
int main(){
    string name  , role;
    char gender ;
    float percentage ; 
    cout <<"Enter your Name : " ; 
    cin >> name ; 
    cout <<"Enter your Gender (m/f) :"; 
    cin >> gender ; 
    cout <<"Enter your Percentage :" ; 
    cin >> percentage ;
    
    switch(gender){
        case 'm' :
            role = (percentage > 85) ? "Office Work" : "Site work" ;
        break;
        
        
        case 'f' :
        if (percentage >60) {
            role = "Office Work";
        }
        else if (percentage <= 60 ){
            role = "Site work";
        }
        else{
            role = "You are Not Eligible for Any Posting";
        }
        break;
        default :
        role = "Invalid Gender" ;
        break;
    }
    cout << "Name :" << name << endl ; 
    cout << "Gender :"<<gender<<endl;
    cout << "Score :"<<percentage<<" % " <<endl; 
    cout << "Role :" << role << endl ;
    
    return 0;
}