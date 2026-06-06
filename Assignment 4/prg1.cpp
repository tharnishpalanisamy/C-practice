#include <iostream>
#include<string>
using namespace std ;
class Student {
    string name , result; 
    int rollNo , marks[5] , total = 0 ; 
    float average ; 
    char grade ; 
    
    public : 
    void readDetails(){
        cout <<"Enter your Name : " ; 
        cin >> name ;
        cout<<"Enter your Roll no : " ; 
        cin>>rollNo ;
        cout << "Enter Your Marks : "<<endl; ; 
        for (int i = 0 ; i < 5 ; i ++) {
            cout <<"Enter Mark of subject " <<i+1 <<" : " ; 
            cin >> marks[i] ; 
        }}
        
    void calculateScore(){
        for (int i = 0 ; i < 5 ; i ++) {
            total += marks[i] ; 
        }
        average = total / 5 ; 
    }
    void calculateResult(){
        if (average >= 90) {
            grade = 'A' ;
            result = "pass";
        }
        else if (average >= 75) {
            grade = 'B' ;
            result = "pass";
        }
        else if (average >= 60) {
            grade = 'C' ;
            result = "pass";
        }
        else if (average >= 50) {
            grade = 'D' ;
            result = "pass";
        }
        else{
            grade = 'F' ;
            result = "Fail";
        }
        }
        void displayDetails(){
            cout<<"Name : " <<name <<endl ; 
            cout << "ROll No :" <<rollNo << endl ; 
            cout << "Marks scored : " <<endl;;
            for (int i = 0 ; i < 5 ; i ++) {
                cout << "Mark of subject "<<i+1<<" " <<marks[i]<<endl  ; 
        }
            cout << "Your Results :" <<endl; 
            cout <<"You have " << result <<"ed" <<endl ; 
            cout <<"Your Grade is " << grade ; 
            
        }};
    
int main() {
    Student student1 , student2 ; 
    
    cout<<"Enter Details of Student 1"<<endl; ; 
    student1.readDetails() ;
    student1.calculateScore();
    student1.calculateResult(); 
    cout <<"Enters details of Student 2 "<<endl; ; 
    student2.readDetails();
    student2.calculateScore() ; 
    student2.calculateResult(); 
    cout<<endl;
    cout<<"Details"  << endl ;;
    student1.displayDetails() ; 
    cout<<endl;
    student2.displayDetails();
    return 0;
}