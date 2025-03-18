/*Q1. Create a class Date with data memebrs day,month and year.
Cretae a class Person with data members name,address and birthdate. The birthdate should be of 
type Date.
Create a class Student with data members id, marks, course and joining date, end date. The joining 
date and end date should be of type date.
Implement above classes. Test all functionalities in main().
(Note - Only Perform the Association in the above case. No need of Inheritance*/


#include <iostream>
using namespace std;


class Date {
private:
    int day, month, year;

public:
    Date(int d = 1, int m = 1, int y = 2000) : day(d), month(m), year(y) {}

    void acceptDate() {
        cout << "Enter date (DD MM YYYY): ";
        cin >> day >> month >> year;
    }

    void displayDate() const {
        cout << day << "/" << month << "/" << year;
    }
};


class Person {
private:
    string name;
    string address;
    Date birthdate;  

public:
    void acceptPersonDetails() {
        cout << "Enter Name: ";
        cin.ignore();
        getline(cin, name);
        cout << "Enter Address: ";
        getline(cin, address);
        cout << "Enter Birthdate:\n";
        birthdate.acceptDate();
    }

    void displayPersonDetails() {
        cout << "Name: " << name << "\nAddress: " << address << "\nBirthdate: ";
        birthdate.displayDate();
        cout << endl;
    }
};


class Student {
private:
    int id;
    float marks;
    string course;
    Date* joiningDate; 
    Date* endDate;     

public:
    Student() : joiningDate(nullptr), endDate(nullptr) {}

    void acceptStudentDetails() {
        cout << "Enter Student ID: ";
        cin >> id;
        cout << "Enter Marks: ";
        cin >> marks;
        cout << "Enter Course: ";
        cin.ignore();
        getline(cin, course);

        joiningDate = new Date();
        endDate = new Date();

        cout << "Enter Joining Date:\n";
        joiningDate->acceptDate();
        cout << "Enter End Date:\n";
        endDate->acceptDate();
    }

    void displayStudentDetails()  {
        cout << "ID: " << id << "\nMarks: " << marks << "\nCourse: " << course << "\nJoining Date: ";
        joiningDate->displayDate();
        cout << "\nEnd Date: ";
        endDate->displayDate();
        cout << endl;
    }

    ~Student() {
        delete joiningDate;
        delete endDate;
    }
};


int main() {
   
    Person p1;
    cout << "Enter Person Details:\n";
    p1.acceptPersonDetails();
    cout << "\nPerson Details:\n";
    p1.displayPersonDetails();

    Student s1;
    cout << "\nEnter Student Details:\n";
    s1.acceptStudentDetails();
    cout << "\nStudent Details:\n";
    s1.displayStudentDetails();

    return 0;
}