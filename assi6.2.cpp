#include<iostream>
using namespace std;
class Employee{
                private:
                int id;
                double salary;

                public:
                Employee(){}
                Employee(int id,double salary){
                    this->id=id;
                    this->salary=salary;
                }

               virtual void accept(){
                        cout<<"Enter id:";
                        cin>>id;
                        cout<<"Enter salary:";
                        cin>>salary;
                }
                virtual void display(){
                        cout<<"ID-"<<id<<endl;
                        cout<<"Salary-"<<salary<<endl;

                }
                void setid(int id){
                    this->id=id;
                }
                int getid(){
                    return id;
                }

                void setsalary(double salary){
                    this->salary=salary;
                }
                double getsalary(){
                    return salary;
                }


};

class Manager:virtual public Employee{
private:
           double bonus;
protected:
           void acceptManager()
           {
              cout<<"Enter Bonus-";
              cin>>bonus;

           }

           void displayManager(){
            cout<<"Bonus - "<<bonus<<endl;

           }
           public:
           Manager(){}
           Manager(int id,double salary,double bonus):Employee(id, salary){
            this->bonus=bonus;
           }
           void accept(){
            Employee::accept();
            acceptManager();
           }

           void display(){
            Employee::display();
            displayManager();
           }
           void setbonus(double bonus){
            this->bonus=bonus;
        }
        double getbonus(){
               return bonus;
        }

};

class salesman:virtual public Employee{
                    private:
                    double commission;
                    protected:
                    void acceptsalesman()
                    {
                       cout<<"Enter commission-";
                       cin>>commission;
         
                    }
         
                    void displaysalesman(){
                     cout<<"commission- "<<commission<<endl;
         
                    }
                    public:
                    salesman(){}
                    salesman(int id,double salary,double commission):Employee(id,salary){
                     this->commission=commission;
                    }
                    void accept(){
                     Employee::accept();
                     acceptsalesman();
                    }
         
                    void display(){
                     Employee::display();
                     displaysalesman();
                    }

                    void setcommission(double commission){
                        this->commission=commission;
                    }
                    double getcommission(){
                            return commission;
                    }
};

class salesmanager:public Manager,public salesman
{
public:
salesmanager(){

}
salesmanager(int id,double salary,double commission,double bonus):Employee(id,salary){
                     setbonus(bonus);
                     setcommission(commission);
}

    virtual void accept(){
    Employee::accept();
    Manager::acceptManager();
    salesman::acceptsalesman();
  
}

    virtual void display(){
    Employee::display();
    Manager::displayManager();
    salesman::displaysalesman();
 

}

};

int main(){
    int choice;
    Manager m;
    salesman sm;
    salesmanager smgr;
    Employee *eptr=new salesmanager();
    eptr->accept();
    eptr->display();
    delete eptr;


    do
    {
        cout << "\nMenu Options:" << endl;
                cout<<"1. Add Manager:"<<endl;
                cout<<"2. Add Salesman"<<endl;
                cout << "3.Add Salesmanager" << endl;
                cout<<"4.Display the count of all employees with respect to designation"<<endl;
                cout<<"5. Display all Managers:"<<endl;
                cout<<"6. Display all Salesman"<<endl;
                cout <<"7.Display all Salesmanager" << endl;
                cout<<"Exit"<<endl;

                cout << "Enter your choice: ";
                cin >> choice;

        cout << "Enter your choice: ";
        cin >> choice;
         
        switch (choice)
        {
        case 1:{
            smgr.accept();
            smgr.display();
            break;
        }
        case 2:{
            sm.accept();
            sm.display();
        }
        case 3:{
            m.accept();
            m.display();
        }
        case 4:{
        cout << "Exiting...\n";
        break;
        }
        
        default:cout<<"Invakid choice! please try again."<<endl;
            break;
        }


    } while (choice!=4);
    
   
    return 0;
}







