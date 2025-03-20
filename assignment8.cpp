#include<iostream>
#include<vector>
using namespace std;
class work{
    private:
    int workid;
    string workname;
    double workfees;

    public:
    work(){}
    work(int workid,string workname,double workfees){
        this->workid=workid;
        this->workname=workname;
        this->workfees=workfees;
    }

    void acceptwork(){
        cout<<"Enter the Workid- ";
        cin>>workid;
        cout<<"Enter the workname- ";
        cin>>workname;
        cout<<"Enter the workfees- ";
        cin>>workfees;
    }
     void displaywork(){
        cout<<"ID-"<<workid<<"Workname-"<<workname<<"Workfees-"<<workfees<<endl;
     }

     int getworkid(){
        return workid;
     }

};


class Employee
{
    private:
    string empname;
    int empid;
    vector<work *> worktaken;

    public:
    Employee(){}
    Employee(int empid,string empname){
        this->empid=empid;
        this->empname=empname;
    }

    void acceptemployee(){
        cout<<"Enter the Empid- ";
        cin>>empid;
        cout<<"Enter the Empname- ";
        cin>>empname;
    }
     void displayemployee(){
        cout<<"EMPID-"<<empid<<"Empname-"<<empname<<endl;
     }

     int getempid(){
        return empid;
     }
     vector<work *> &getworktaken(){
        return worktaken;
     }

     void addworkinworktaken(work *wptr)
     {
        worktaken.push_back(wptr);
     }


};
int menu(){
    int choice;
    cout << "********************************************" << endl;
    cout << "0. EXIT" << endl;
    cout << "1. Add Work" << endl;
    cout << "2. Add Employee" << endl;
    cout << "3. Display All worktaken" << endl;
    cout << "4. Display All Employee" << endl;
    cout << "5. Purchase a Work" << endl;
    cout << "6. Display work taken by a specific Employee" << endl;
    cout << "Enter your choice - ";
    cin >> choice;
    cout << "********************************************" << endl;

    return choice;
}

void displayallworktaken(vector<work *> &works){
    for (int i = 0; i < works.size(); i++)
    {
        works[i]->displaywork();
    }
    
}

void purchasework(vector<work *> &worktaken, vector<Employee *>&employeelist){
    int empid;
    cout<<"Enter the emp id of employee who wants the work taken - ";
    cin>>empid;
    Employee *eptr=NULL;

    //for loop for searching the given employee
    for (int i = 0; i < employeelist.size(); i++)
    {
        eptr=employeelist[i];
        break;
    }

    if(eptr!=NULL){
        //once employee is found display him/her the work to take
        displayallworktaken(worktaken);
        int workid;
        cout<<"Enter the workid to take the work - ";
        cin>>workid;

        for (int i = 0; i < worktaken.size(); i++)
        {
            if(workid==worktaken[i]->getworkid()){
                eptr->getworktaken().push_back(worktaken[i]);
                break;
            }
        }
        
    }
    else
    cout<<"Student not found."<<endl;    

}

void displayworktakenforgivenemployee(vector<Employee *>&Employeelist){
    int empid;
    cout<<"Enter your roll no to display worktaken - ";
    cin>>empid;
    for(int i=0;i<Employeelist.size();i++){
        if (empid==Employeelist[i]->getempid())
        {
            Employeelist[i]->displayemployee();
            cout<<"Work taken ->"<<endl;
            displayallworktaken(Employeelist[i]->getworktaken());
            break;
        }
        
    }
}

void addDummywork(vector<work *>&worktaken){
    worktaken.push_back(new work(1,"Webdeveloper",10000));
    worktaken.push_back(new work(2,"Indsutrialist",20000));
    worktaken.push_back(new work(3,"AI developer",30000));
    worktaken.push_back(new work(4,"HR",40000));
    worktaken.push_back(new work(5,"team leader",50000));
    
}

void addDummyEmployees(vector<Employee *> &employeelist)
{
    employeelist.push_back(new Employee(1, "Anil"));
    employeelist.push_back(new Employee(2, "Mukesh"));
    employeelist.push_back(new Employee(3, "Ramesh"));
    employeelist.push_back(new Employee(4, "Suresh"));
    employeelist.push_back(new Employee(5, "Ram"));
    employeelist.push_back(new Employee(6,"Sham"));

}

int main(){
    int n1=10;
    vector<work *>worktaken;
    vector<Employee *>employeelist;
    addDummyEmployees(employeelist);
    addDummywork(worktaken);
  
    int choice;
    while ((choice=menu())!=0)
    {
        switch (choice)
        {
        case 1:{
                //adding the work in the worktaken
                work *ptr=new work;
                ptr->acceptwork();
                worktaken.push_back(ptr);
            break;
        }

        case 2:{
                   //adding the employee in the employee
                work *ptr=new work;
                ptr->acceptwork();
                worktaken.push_back(ptr);
            break;
        }
        case 3:{
            displayallworktaken(worktaken);
            break;
        }
        case 4:{
            for (int i = 0; i < employeelist.size(); i++)
            {
                employeelist[i]->displayemployee();
                break;
            }
            case 5:purchasework(worktaken,employeelist);
            break;           
        }
        case 6:{
            displayworktakenforgivenemployee(employeelist);
            break;
        }
        
        default:cout<<"Wrong Choice..."<<endl;
            break;
        }
        
    }
    return 0;
    

}






