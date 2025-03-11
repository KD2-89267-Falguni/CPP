#include <iostream>
using namespace std;
class Time
{
    // Data Members
    int hr;
    int min;

public:
    // Member Functions
    void accept()
    {
        cout << "Enter the hrs - ";
        cin >> hr;
        cout << "Enter the mins - ";
        cin >> min;
    }

    void display()
    {
        cout << "Time - " << hr << " : " << min << endl;
    }
};

