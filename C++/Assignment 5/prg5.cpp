#include<iostream> 
#include<string> 
using namespace std ; 

class Academics{
    protected : 
    float average ; 
    
    Academics(float a){
        cout<<"Parameterised Constructor used in Base Class 'Academics'" <<endl ;
        average = a ; 
        }
    public:
    void displayMarks(){
        cout<<"Average : " <<average <<endl;
    }    
    
}; 

class Sports{
    public:
    int sportsScore ; 
    
    Sports(int s) {
        cout<<"Parameterised Constructor used in Base Class 'Sports'" <<endl ;
        sportsScore = s ;
    }
    void displaySports() {
        cout <<"Sports Score : " << sportsScore ; 
    }
    
};

class Scholarship : public Academics , public Sports {
    private :
    double scholarshipAmount ; 
    
    public :
    Scholarship(int a , int s) : Academics(a) , Sports(s){
        cout<<"Parameterised Constructor used in derived Class 'Scholaeship'" <<endl ; 
    }
    void calculateScholarship () {
        if (average >= 85 && sportsScore >= 80) {
            scholarshipAmount = 50000 ; 
        }
        else if (average >= 75 && sportsScore >= 70) {
            scholarshipAmount = 30000 ; 
        }
        else if (average >= 60 && sportsScore >= 60) {
            scholarshipAmount = 15000 ; 
        }
        else {
            scholarshipAmount = 0 ;
        } 
        
    }
    
    void displayScholarship(){
        cout << "You got Scholarship of " <<scholarshipAmount <<endl; 
    }
};
int main(){
    Scholarship student1(86,75) ; 
    student1.displayMarks();
    student1.displaySports() ; 
    student1.calculateScholarship() ; 
    student1.displayScholarship();
    
    return 0 ;
}