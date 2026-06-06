#include<iostream> 
using namespace std ; 
class Student{
    string name ; 
    int rollno , marks[5] , total = 0  ; 
    float average ; 
    char grade ; 
    
    
    public :
    string res ; 
    Student(){
        name = "NULL" ; 
        rollno = -1 ; 
        average = -1 ; 
        for(int i = 0; i < 5; i++) {
            marks[i] = -1;
        }
        grade = 'N' ; 
        res = "NULL";
    }
    Student(string n , int r , int m[] ) {
        for(int i = 0 ; i< 5 ; i++) {
            marks[i] = m[i] ;
        }
        name = n ; 
        rollno = r ; 
    }
    
    Student (const Student &obj) {
        name = obj.name + " (Copy)";
        rollno = obj.rollno;
        total = obj.total;
        average = obj.average;
        grade = obj.grade;
        res = obj.res;
    
        for (int i = 0; i < 5; i++) {
            marks[i] = obj.marks[i];
        }
    
        cout << "Copy Constructor is used for " << name << endl;
    }
    void readDetails(){
        cout<<"Enter Your Name : " ; 
        cin>>name; 
        cout<<"Enter Your rollNo : " ; 
        cin>>rollno;
        
        for(int i = 0 ; i < 5 ; i++) {
            cout<<"enter mark of subject "<<i+1 ; 
            cin>>marks[i] ; 
        }
        
    }
    
    void calculate(){
        for(int i = 0 ; i< 5 ; i++) {
            total += marks[i] ; 
        }
        average = total / 5 ;
    }
    
    void result() {
        
        
    
    
    if (average >= 90) {
        grade = 'A'; 
        res = "Pass";
    }
    else if (average >= 75) {
        grade = 'B';
        res = "Pass";
    }
    else if (average >= 60) {
        grade = 'C';
        res = "Pass";
    }
    else if (average >= 50) {
        grade = 'D';
        res = "Pass";
    }
    else {
        grade = 'F';
        res = "Fail";
    }
    for(int i = 0 ; i< 5 ; i ++) {
        if (marks[i] < 40){
            res = "Fail" ; 
            break; 
        }
    }
}
    void display(){
        calculate();
        cout<<"Name : " <<name <<endl ; 
        cout<<"rollno : " <<rollno <<endl ; 
        cout<<"result : " <<res <<endl ; 
        cout<<"Grade : " <<grade <<endl ; 
        cout<<"TOtal: " <<total <<endl ; 
        
        for(int i = 0 ; i< 5 ; i++ ) {
            cout<<"Mark of subject "<<i+1<<":"<<marks[i] <<endl;
        }
    }
}; 
int main(){
    Student tharnish , sastha ;  
    cout<<tharnish.res;
    tharnish.readDetails(); 
    tharnish.display();
    Student naveen = tharnish ; 
    naveen.display();
    return 0 ; 
}