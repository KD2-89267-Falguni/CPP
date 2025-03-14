#include<iostream>
using namespace std;
class Tollbooth{
    private:
    unsigned int payingcars;
    unsigned int nonpayingcars;
    unsigned int totalcars;
    double totalamount;
    public:

   Tollbooth(){
    totalamount=0.0;
    payingcars=0;
    totalcars=0;
    nonpayingcars=0;
   }

void  payingcar(){
    totalcars++;
    payingcars++;
    totalamount++;

}
void  nopaycar(){
    totalcars++;
    nonpayingcars++;
}

void  printOnConsole() const{
    cout<<"Totalcars:"<<totalcars<<endl;
    cout<<"Total paying cars:"<<payingcars<<endl;
    cout<<"Total non paying cars:"<<nonpayingcars<<endl;
    cout<<"Total amount collected:$"<<totalamount<<endl;
}
};

int main(){
Tollbooth tollbooth;
int choice;

do{
    cout<<"\nMenu options:"<<endl;
    cout<<"1. Add a paying car"<<endl;
    cout<<"2. Add a nonpaying car"<<endl;
    cout<<"3. Display totals"<<endl;
    cout<<"Enter you choice"<<endl;
    cin>>choice;


    switch (choice)
    {
    case 1:{
    tollbooth.payingcar();
    cout<<"Paying car added"<<endl;
    break;
    }
    case 2:{
    tollbooth.nopaycar();
    cout<<"Non-Paying car added"<<endl;
    break;
    }
    case 3:{
    tollbooth.printOnConsole();
    break;
    }
    case 4:{
    cout << "Exiting program." << endl;
    break;
    }
default:
    cout << "Invalid choice. Please try again." << endl;
 }
} 

while (choice!=4);
return 0;


}
