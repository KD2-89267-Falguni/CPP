/*A shop sells book or tapes. The Book class holds id, title, author, and price; whereas Tape class 
holds id, title, artist, and price. There is 5% discount on tapes, while 10% discount on books. 
Assuming that each user purchase 3 products (either book or tape), calculate final bill. The program 
should be menu driven and should not cause memory leakage.
Hint - Create class Product and inherit into Book and Tape. Also create array like Product* arr[3]*/


#include<iostream>
using namespace std;
class Product
{
protected:
int id;
string title;
float price;
    
public:
        virtual void acceptdetails()=0;
        virtual void displaydetails()=0;
        virtual float getcalculatediscount()=0;
        virtual ~Product(){}

};

class Book:public Product{
                     string author;
                     public:
                     void acceptdetails(){
                        cout<<"Enter the id:";
                        cin>>id;
                        cin.ignore();
                        cout<<"Enter the title:";
                        cin.ignore();
                        getline(cin,title);
                        cout<<"Enter the author:";
                        getline(cin,author);
                        cout<<"Enter the price:";
                        cin>>price;

                     }

                     void displaydetails(){
                        cout<<"ID : "<<id<<"\nTitle"<<title<<"\nAuthor"<<author<<"\nPrice"<<price;
                     }

                     float getcalculatediscount() {
                                return price * 0.9;
                     }

};

               class tape :public Product{
                           string artist;
                          
                           
                           void acceptdetails(){
                            cout<<"Enter the id:";
                            cin>>id;
                            cout<<"Enter the title:";
                            cin>>title;
                            cout<<"Enter the artist:";
                            cin>>artist;
                            cout<<"Enter the price:";
                            cin>>price;
                           }

                           void displaydetails(){
                            cout<<"ID"<<id<<"Title"<<title<<"Artist"<<artist<<"Price"<<price;
                           }
                           float getcalculatediscount() {
                            return price * 0.95;
                 }

               };

               int main(){
                int choice, i=0;
                Product* arr[3];
                double totalbill=0;
                

                do
                {
                    cout << "\nMenu Options:" << endl;
                    cout<<"1. Add book:"<<endl;
                    cout<<"2. Add tape"<<endl;
                    cout<<"3. Display Bills"<<endl;
                    cout << "4. Exit" << endl;
                    cout << "Enter your choice: ";
                    cin >> choice;


                    switch (choice)
                    {
                    case 1:{
                            arr[i]=new Book();
                            arr[i]->acceptdetails();
                            i++;
                        break;
                    }

                    case 2:{
                        arr[i]=new tape();
                        arr[i]->acceptdetails();
                        i++;
                    break;
                }

                    case 3:{
                        float total=0.0;
                        cout<<"Bill details\n";
                        for (int j = 0; j < i; j++)
                        {
                           // cout<<"Type:"<<typeid(*arr[j]).name()<<" - ";
                            arr[j]->displaydetails();
                            total+=arr[j]->getcalculatediscount();
                        }
                        cout<<"Total bill with discounts:"<<total<<endl;
                        break;
                    }
                    case 4:{
                        cout<<"Exit"<<endl;
                        break;
                    }
                    
                    default:
                    cout<<"Invalid choice!"<<endl;
                        break;
                    }

                } while (choice!=4);

                for (int j = 0; i < j; j++)
                {
                    delete arr[j];
                }
                return 0;
               }
               





