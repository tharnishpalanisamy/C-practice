#include <iostream>
#include <string>
using namespace std;
int main() {
    string name, enroll_no;
    float mk1, mk2, mk3, total, average;
    string result, grade;
    cout << "Enter Student Name: ";
    getline(cin, name);
    cout << "Enter Enrolment Number: ";
    getline(cin, enroll_no);
    cout << "Enter Marks for Subject 1: ";
    cin >> mk1;
    cout << "Enter Marks for Subject 2: ";
    cin >> mk2;
    cout << "Enter Marks for Subject 3: ";
    cin >> mk3;
    total = mk1 + mk2 + mk3;
    average = total / 3;
    if (mk1 >= 40 && mk2 >= 40 && mk3 >= 40) {
        result = "PASS";
    } else {
        result = "FAIL";
    }
    if (result == "FAIL") {
        grade = "Not applixable because you are failed";
    } else {
        if (average > 90) grade = "S";
        else if (average > 80) grade = "A";
        else if (average > 70) grade = "B";
        else if (average > 60) grade = "C";
        else if (average >= 40) grade = "D";
        else grade = "F";
    }
    cout << "\n===================================" << endl;
    cout << "Student Name  : " << name << endl;
    cout << "Enrollment No : " << enroll_no << endl;
    cout << "Marks         : " << mk1 << ", " << mk2 << ", " << mk3 << endl;
    cout << "Total Marks   : " << total << endl;
    cout << "Average       : " << average << endl;
    cout << "Result        : " << result << endl;
    cout << "Grade         : " << grade << endl;
    cout << "===================================" << endl;
    return 0;
}