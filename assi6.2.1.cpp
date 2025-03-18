#include<iostream>
using namespace std;

class Employee {
private:
    int id;
    double salary;

public:
    Employee() {}
    Employee(int id, double salary) {
        this->id = id;
        this->salary = salary;
    }

    virtual void accept() {
        cout << "Enter id: ";
        cin >> id;
        cout << "Enter salary: ";
        cin >> salary;
    }

    virtual void display() {
        cout << "ID - " << id << endl;
        cout << "Salary - " << salary << endl;
    }
};

class Manager : virtual public Employee {
private:
    double bonus;

protected:
    void acceptManager() {
        cout << "Enter Bonus - ";
        cin >> bonus;
    }

    void displayManager() {
        cout << "Bonus - " << bonus << endl;
    }

public:
    Manager() {}
    Manager(int id, double salary, double bonus) : Employee(id, salary) {
        this->bonus = bonus;
    }

    void accept() {
        Employee::accept();
        acceptManager();
    }

    void display() {
        Employee::display();
        displayManager();
    }

    void setbonus(double bonus) {
        this->bonus = bonus;
    }

    double getbonus() {
        return bonus;
    }
};

class salesman : virtual public Employee {
private:
    double commission;

protected:
    void acceptsalesman() {
        cout << "Enter commission - ";
        cin >> commission;
    }

    void displaySalesman() {
        cout << "Commission - " << commission << endl;
    }

public:
    salesman() {}
    salesman(int id, double salary, double commission) : Employee(id, salary) {
        this->commission = commission;
    }

    void accept() {
        Employee::accept();
        acceptsalesman();
    }

    void display() {
        Employee::display();
        displaySalesman();
    }

    void setcommission(double commission) {
        this->commission = commission;
    }

    double getcommission() {
        return commission;
    }
};

class salesmanager : public Manager, public salesman {
public:
    salesmanager() {}

    salesmanager(int id, double salary, double commission, double bonus):Employee(id,salary)
      
    {
        setbonus(bonus);
        setcommission(commission);
    }

    virtual void accept() {
        Employee::accept();
        Manager::acceptManager();
        salesman::acceptsalesman();
    }

    virtual void display() {
        Employee::display();
        Manager::displayManager();
        salesman::displaySalesman();
    }
};

int main() {
    Manager m;
    m.accept();
    m.display();

    salesman sm;
    sm.accept();
    sm.display();

    Employee* eptr = new salesmanager();
    eptr->accept();
    eptr->display();

    delete eptr; // Prevent memory leak
    return 0;
}