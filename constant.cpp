/*#include <iostream>
using namespace std;

class Test
{
    int n1;
    const int n2;

public:
    // constant data members must be initialized inside
    // ctor members initializer list
    Test() : n2(20)
    {
        n1 = 10;
        // n2 = 20; // NOT OK
    }

    void f1() // Test *const this
    {
        n1 = 100;
        // n2 = 200; // NOT OK
    }

    // inside the constant function the state of the object
    // cannot be modified
    void f2() const // const Test *const this
    {
        // n1 = 100; // NOT OK
        // n2 = 200; // NOT OK
    }
};

int main()
{
    Test t1;
    t1.f1();
    t1.f2();

    const Test t2;
    // t2.f1(); // NOT OK
    t2.f2();

    return 0;
}*/

/*#include <iostream>
using namespace std;

int main() {
    const int num1 = 10;
    int num2 = 20;

    const int* ptr = &num1; // ✅ Pointer can point to num1
    cout << "*ptr = " << *ptr << endl;

    // *ptr = 15;    ❌ Error: Cannot modify value through pointer

    ptr = &num2;     // ✅ Pointer can point to another constant value
    cout << "*ptr = " << *ptr << endl;

    return 0;
}*/


/*#include <iostream>
using namespace std;

int main() {
    int num1 = 10;
    int num2 = 20;

    int* const ptr = &num1; // ✅ Pointer is initialized and fixed
    cout << "*ptr = " << *ptr << endl;

    *ptr = 30;  // ✅ Value can be modified
    cout << "*ptr after modification = " << *ptr << endl;

    // ptr = &num2; ❌ Error: Cannot change the pointer's address

    return 0;
}/*

/*#include <iostream>
using namespace std;

int main() {
    int num1 = 10;
    int num2 = 20;

    int const* ptr = &num1; // ✅ Pointer can point to 'num1'
    cout << "*ptr = " << *ptr << endl;

    // *ptr = 15;   ❌ Error: Cannot modify the value through the pointer

    ptr = &num2;    // ✅ Pointer can be reassigned to point to 'num2'
    cout << "*ptr = " << *ptr << endl;

    return 0;
}*/

#include <iostream>
using namespace std;

int main() {
     int num1 = 10;
    int num2 = 20;

    const int * const ptr = &num2; // ✅ Pointer must be initialized at declaration
    cout << "*ptr = " << *ptr << endl;

    // *ptr = 15;   ❌ Error: Cannot modify the value
    // ptr = &num2; ❌ Error: Cannot change the pointer's address

    return 0;
}