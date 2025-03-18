#include <iostream>
using namespace std;

class Time
{
    int hr;
    int min;

public:
    void accept() // accept(Time *const this)
    {
        // cout << "Time::accept()" << endl;
        // cout << "Address inside this = " << this << endl;
        cout << "Enter the hrs - ";
        cin >> hr;
        cout << "Enter the mins - ";
        cin >> min;
    }

    void display() // this
    {
        // cout << "Time::display()" << endl;
        cout << "Time - " << hr << " : " <<min << endl;
    }
};



int main()
{
    Time t1;
    Time t2;

    cout << "Address of t1 in main -  " << &t1 << endl;
    cout << "Address of t2 in main -  " << &t2 << endl;

    t1.accept(); 
    t2.accept();
    t1.display();
    t2.display();
    return 0;
}