/*#include <iostream>
using namespace std;

class Time
{
    int hr;
    int min;

public:
    Time() : Time(10, 10) // ctor delegation use is to remove duplication
    {
        // hr = 10;
         // min = 10;
    }

    Time(int hr, int min)
    {
        this->hr = hr;
        this->min = min;
    }

    void display()
    {
        cout << "Time - " << hr << " : " << min << endl;
    }
};

int main()
{
    Time t1(11, 30);
    t1.display();

    Time t2;
    t2.display();
    return 0;
} */


/* #include <iostream>
using namespace std;
class Test
{
    int x;
    int y;

public:
    // ctor members initializer list
    Test() : y(x++), x(5)
    {
    }

    void display()
    {
        cout << "x = " << x << endl;
        cout << "y = " << y << endl;
    }
};
int main()
{
    Test t1;
    t1.display();
    return 0;
} */

/*
#include <iostream>
using namespace std;
class Test
{
    int x;
    int y;

public:
    Test() : Test(1, 1) {}

    // ctor members initializer list
    Test(int x, int y) : x(x), y(y)
    {
        this->x = 5;
        this->y = 6;
    }

    void display()
    {
        cout << "x = " << x << endl;
        cout << "y = " << y << endl;
    }
};
int main()
{
    Test t1(2,3);
    t1.display();
    return 0;
}
*/
/*
#include <iostream>
using namespace std;

class Time
{
    int hr;
    int min;

public:
    // facilitators
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
    // function that manipulates single data member value
    // by taking the value in the parameter,
    // such functions are called as Mutators
    void setMin(int min)
    {
        this->min = min;
    }

    void setHr(int hr)
    {
        this->hr = hr;
    }

    // A function that is designed to return the value of
    // single data member of the class is called as Inspector
    // Inspectors (getters)
    int getHr()
    {
        return hr;
    }

    int getMin()
    {
        return min;
    }
};

int main()
{
    Time t1;
    t1.accept();
    t1.display();
    t1.setMin(52);
    cout << "t1.min = " << t1.getMin() << endl;
    t1.setHr(10);
    cout << "t1.hrs = " << t1.getHr() << endl;
  
    return 0;
} */

