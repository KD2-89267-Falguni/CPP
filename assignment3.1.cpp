/*Q1. Write a menu driven program to calculate volume of the box(length * width * height).
Provide parameterless, parameterized(with 3 parameters) and single paramaterized constructor.
Create the local objects in respective case and call the function to caluclate area.
Menu options ->
1. Calculate Volume with default values
2. Calculate Volume with length,breadth and height with same value
3. Calculate Volume with different length,breadth and height values.*/

#include<iostream>
using namespace std;
class Box{

    int length,width,height;

public:
           //parameterless constructor
           Box()
           {
           length=width=height=1;
           }
           //singleparameterized constructor
           Box(int side){
            length=width=height=side;
           }
           //parameterized constructor
           Box(int l,int w,int h){
            length=l;
            width=w;
            height=h;
           }
           int calculateVolume(){
            return length*width*height;
           }
        };

           int main(){
            int choice;

            do
            {
                cout << "\nMenu Options:" << endl;
                cout<<"1. Calculate Volume with default values:"<<endl;
                cout<<"2. Calculate Volume with length,breadth and height with same value"<<endl;
                cout<<"3. Calculate Volume with different length,breadth and height values"<<endl;
                cout << "4. Exit" << endl;
                cout << "Enter your choice: ";
                cin >> choice;


                switch (choice){
                
                case 1:
                    Box box1 ;
                    cout<<"Volume:"<<box1.calculateVolume() <<endl;
                    break;
                
                case 2:
                    int side;
                    cout<<"Enter the side value:";
                    cin>>side;
                    Box box2(side);
                    cout<<"Volume:"<<box2.calculateVolume()<<endl;
                    break;
                      
                case 3:
                    int l,w,h;
                    cout<<"Enter length,width,height:";
                    cin>>l>>w>>h;
                    Box box3(l,w,h);
                    cout<<"Volume:"<<box3.calculateVolume()<<endl;
                    break;
                
                case 4:
                     cout << "Exiting program.\n";
                
                break;

                default:+
                    
                }

            } while (choice!=4);
            return 0;
            
        }