/*Q1. Create a class Date with data memebrs day,month and year.
Cretae a class Person with data members name,address and birthdate. The birthdate should be of 
type Date.
Create a class Student with data members id, marks, course and joining date, end date. The joining 
date and end date should be of type date.
Implement above classes. Test all functionalities in main().
(Note - Only Perform the Association in the above case. No need of Inheritance*/
#include<iostream>
using namespace std;

class Date{
    private:
    int day,month,year;
public:
Date(int d=1, int m=1, int y=2000): day(d),month(m),year(y){}

    
    void acceptDate() {
        cout << "Enter date (DD MM YYYY): ";
        cin >> day >> month >> year;
    }

    void displayDate() const {
        cout << day << "/" << month << "/" << year;
    }
};

class person{
                private:
                string name,address;
                Date birthdate;
              public:
               void acceptperson(){
                cout<<"\nEnter the Name:";
                cin.ignore();
                getline(cin,name);
                cout<<"\nEnter the Address:\n";
                cin.ignore();
                getline(cin,address);
                cout<<"\nEnter the Birthdate:\n";
                birthdate.acceptDate();

               }

               void displayperson(){
                      cout<<"Name:\n"<<name<<"Address\n"<<address<<"Birthdate:\n"; 
                       birthdate.displayDate();
               }
            };


               class student {
                             private:
                             int id;
                             float marks;
                             string course;
                             Date* joiningdate;
                             Date* enddate;

                             public:
                             void acceptstudent(){
                                cout<<"Enter the id:\n";
                                cin>>id;
                                cout<<"Enter the marks:\n";
                                cin>>marks;
                                cout<<"Enter the course:\n";
                                cin.ignore();
                                getline(cin,course);
                                joiningdate=new Date();
                                enddate=new Date();
                                cout<<"\nEnter joining date:\n";
                                joiningdate->acceptDate();
                                cout<<"\nEnter end date:\n";
                                enddate->acceptDate();
                             }


                             void displaystudent(){
                                cout<<"id:\n"<<id<<"marks:\n"<<marks<<"course:\n"<<course<<"joiningdate:\n";
                                joiningdate->displayDate();
                                cout<<"enddate:";
                                enddate->displayDate();
                             }

                             ~student(){
                                delete joiningdate;
                                delete enddate;
                             }

               };

               int main(){
                person p1;
                cout<<"\nEnter the person details\n:";
                p1.acceptperson();
                cout<<"\nperson details\n";
                p1.displayperson();


                student s1;
                cout<<"\nEnter the student details:\n";
                s1.acceptstudent();
                cout<<"\nstudent details\n";
                s1.displaystudent();

                return 0;

               }












