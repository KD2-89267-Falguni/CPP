/*
Q1. Write a class for Time and provide the functionality
Time()
Time(int h,int m,int s)
getHour()
getMinute()
getSeconds()
printTime()
setHour()
setMinute()
setSeconds()
In main create array of objects of Time.
Allocate the memory for the array and the object dynamically.*/

#include<iostream>
using namespace std;
class Time
{
    private:
    int h;
    int m;
    int s;

    public:
    Time(){
        h=0;
        m=0;
        s=0;

    }
    Time(int h,int m,int s){
        this ->h= h;
        this ->m= m;
        this ->s= s;
        
    }

    void accept(){
        cout << "Enter the hrs - ";
        cin >> h;
        cout << "Enter the mins - ";
        cin >> m;
        cout << "Enter the sec - ";
        cin >> s;

    }
    void printTime(){
        cout<<"Time:"<<h<<" : "<<m<<" : "<<s<<endl;
    }

    void setHour(int h){
        this ->h= h;
    }

    void setMinute(int m){
        this ->m= m;
    }
    void setseconds(int s){
        this ->s= s;
    }

    int getHour(){
        return h;
    }
int getMinute(){
    return m;
}
int getSeconds(){
    return s;
}

};

int main(){
             int n;
             cout<<"Enter number of Time Objects: ";
             cin>>n;

             Time **ptr= new Time*[3];
            
             delete[] ptr;
             ptr = NULL;
                  

    int choice;
    do{
    cout << "\nMenu Options:" << endl;
                cout<<"1. Add Time:"<<endl;
                cout<<"2. Display Time"<<endl;
                cout << "3. Exit" << endl;
                cout << "Enter your choice: ";
                cin >> choice;
             
              switch (choice)
              {
              case 1:
              for (int i = 0; i < n; i++)
              {
                  ptr[i]=new Time();
                  ptr[i]->accept();
  
              }
                
                break;

                case 2:
                for(int i=0;i<n;i++){
                    ptr[i]->printTime();
                 }


                break;

                case 3:
                    exit(0);

                break;

              
              default:
              cout << "Invalid choice! Try again.\n";
                break;
              }
    
    
            }while(choice!=0);
return 0;


}