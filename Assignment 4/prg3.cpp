#include<iostream> 
#include<string>
using namespace std ; 
class Person{
    int id , age  ; 
    string name ; 
    char gender ; 
    static int maleCount ; 
    static int femaleCount ; 
    public :
    void getData(){
        cout<<"Enter the Id : " ; 
        cin>>id ; 
        cout <<"Enter the name : " ; 
        cin >> name ; 
        cout << "Enter the age : " ; 
        cin >> age ; 
        cout << "Enter the Gender (M-for Male and F-for Female) : " ; 
        cin >> gender;
        cout<<endl;
    }
    
    void countGender(){
        if (gender == 'M') {
            maleCount ++ ;
        }
        else if(gender == 'F') {
            femaleCount ++ ;
        }
        else{
            cout<<"Invalid Entry for gender" ;
        }
    }
    void display(){
        cout <<"\nName : " <<name ; 
        cout <<"\nPerson ID : "<<id ; 
        cout <<"\nAge : " << age ; 
        cout << "\nGender : " << gender ; 
        
    }
    static void displayGenderCount(){
        cout<<"\nGender count : "<<endl ; 
        cout<<"The no of males are : " << maleCount <<endl ; 
        cout <<"The no of Females are : " <<femaleCount << endl ; 
    }
    
};
int Person::maleCount = 0 ;
int Person::femaleCount = 0;
int main(){
    int n ;
    cout <<"ENter the no of persons : " ; 
    cin >> n ; 
    Person p[n] ; 
    
    for (int i = 0 ; i < n ; i ++) {
        cout <<"Enter the details of the person :" <<endl; 
        p[i].getData() ; 
        p[i].countGender() ; 
    }
    cout <<"Details of all the person : " <<endl ; 
    for (int i = 0 ; i < n ; i ++) {
        p[i].display();
    }
    Person::displayGenderCount ; 
    
    return 0; 
}