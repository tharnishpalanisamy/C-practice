#include <iostream>
#include<string>
using namespace std ;
class Student {
    string name , result; 
    int rollNo , marks[5] , total ; 
    float average ; 
    char grade ; 
    public : 
    Student(){
        name = "Not Defined" ; 
        rollNo = 0 ; 
        total = 0 ; 
        average = 0.0 ; 
        grade = 'N' ; 
        result = "Nil" ; 
        for (int i =0 ; i < 5 ; i ++) {
            marks[i] = 100 ;
        }
        cout<<"Default Constructor is used to assign default Values " ; 
    }
    Student(string n , int r , int m[]) {
        name = n ; 
        rollNo = r ; 
        for(int i = 0 ; i < 5 ; i ++) {
            marks[i] = m[i] ;
        }
        cout<<"Parameterised Contructors are used for the Student "<<name<< endl ; 
        calculateScore();
        calculateResult();
    }
        Student(const Student &obj) {
        name = obj.name + " (Copy)";
        rollNo = obj.rollNo;
        total = obj.total;
        average = obj.average;
        grade = obj.grade;
        result = obj.result;
        for (int i = 0; i < 5; i++) {
            marks[i] = obj.marks[i];
        }
        cout << "Copy Constructor is used for " << name << endl;
    }
    ~Student() {
        cout << " Destructor is called called " << name << "..." << endl;
    }

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
    int m1[5] = {76,87,58,69,80} ; 
    Student student1("Tharnish",57,m1) ; 
    Student student2 = student1 ; 
    Student student3 ; 
    student1.displayDetails() ; 
    student2.displayDetails(); 
    student3.displayDetails();
    return 0;
}