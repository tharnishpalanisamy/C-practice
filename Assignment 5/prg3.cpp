#include<iostream> 
#include<string> 
using namespace std ; 

class Student{
    private :
    int rollNo ; 
    string name ; 
    
    public :
    Student (int r , string n){
        cout <<"Parameterised Contructor is used at the Base Class 'Student '" <<endl; 
        rollNo = r ; 
        name = n ; 
    }
    void displayStudent(){
        cout<<"Name :"<<name<<endl ; 
        cout <<"Roll No :" << rollNo <<endl; 
    }
}; 

class Marks : public Student {
    protected :
    int marks[5] ; 
    
    public:
    Marks(int r,string n) : Student( r, n) {
        cout<<"Parameterised Constructor is used on Level 1 inherited class 'Marks ' " <<endl ;   
        for (int i =0 ; i < 5 ; i ++) {
            marks[i] = 0 ;
        }
    }
    void getMarks(){
        for (int i = 0 ; i < 5 ; i ++) {
            cout<<"Enter the mark of subject " <<i+1 <<" : " ; 
            cin>>marks[i];
        }
    }
    
    void displayMarks(){
        for(int i =0 ; i < 5 ; i++) {
            cout <<"Mark of Subject " << i+ 1 << " : " <<marks[i] <<endl;
        }
    }
} ; 

class Result : public Marks {
    private :
    int total ; 
    float average ; 
    string grade ; 
    
    public :
    Result(int r , string n  ) : Marks(r ,  n) {
        cout<<"parameterised constructor is used in the 2nd level of inherited class 'Result' "<<endl ; 
        total = 0 ; 
        average = 0.0 ; 
        grade = 'N' ; 
    }
    
    void calculateResult(){
        for(int i = 0 ; i < 5 ; i ++) {
            total += marks[i] ; 
        }
        average = total / 5 ; 
        
        if (average >= 90 ) {
            grade = "A+" ;
            
        }
        else if (average >= 75) {
            grade = "A" ;
        }
        else if (average >= 60 ) {
            grade = "B" ;
        }
        else if(average >= 50) {
            grade = "C" ; 
        }
        else if (average < 50) {
            grade = "F" ; 
        } 
    }
    void displayResult(){
        cout<<"Total : " <<total <<endl ; 
        cout <<"Average : " <<average<<endl ; 
        cout<<"Grade :" <<grade <<endl ; 
        if (grade == "F") {
            cout <<"You have Failed :(" ; 
        }
    }
}; 

int main(){
    Result student1(1 , "Tharnish") ;
    student1.getMarks();
    student1.calculateResult(); 
    student1.displayStudent() ; 
    student1.displayMarks(); 
    student1.displayResult();
    
    return 0;
}