#include<iostream>
using namespace std;
class Student{
    private:
    int rollno;
    string name;
    float marks;
    public:
    void acceptStudentFromConsole(){
        cout<<"Enter Roll No:";
        cin>>rollno;
        cout<<"Enter Name:";
        cin.ignore();
        getline(cin,name);
        cout<<"Enter Marks:";
        cin>>marks;
    }
    
        void printStudentOnConsole(){
        cout << "Roll No:" << rollno << "\nname:" << name << "\nmarks:" << marks << endl;
        }
        
 };

int main() 
{
    Student student;
    int choice;

    do
    {
        cout<<"Enter your Choice:";
        
        cin>>choice;

        switch (choice)
        {
            case 1:student.acceptStudentFromConsole(); break;
            case 2:student.printStudentOnConsole(); break;
            case 0: cout << "Exiting program.\n"; break;
            default: cout << "Invalid choice! Try again.\n";
        
        }
    } while (choice!=0);
    return 0;
    
}