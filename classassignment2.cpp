#include <iostream>
using namespace std;
class Date
 {
    private:
    int day, month, year;
    public:
    void initDate() {
        day = 1; month = 1; year = 2000;
    }

    void printDate() {
        cout << day << "/" << month << "/" << year << endl;
    }

    void acceptDate() {
        cout << "Enter day: "; cin >> day;
        cout << "Enter month: "; cin >> month;
        cout << "Enter year: "; cin >> year;
    }

    bool isLeapYear() {
        return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
    }
};

int main() {
    Date date;
    int choice;

    do {
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: date.initDate(); cout << "Date initialized.\n"; break;
            case 2: date.acceptDate(); break;
            case 3: date.printDate(); break;
            case 4: cout << (date.isLeapYear() ? "It is a leap year.\n" : "It is not a leap year.\n"); break;
            case 0: cout << "Exiting program.\n"; break;
            default: cout << "Invalid choice! Try again.\n";
        }
    } while (choice != 0);

    return 0;
}