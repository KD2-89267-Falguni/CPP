
#include <iostream>
using namespace std;

// Base class Product
class Product {
protected:
    int id;
    string title;
    float price;

public:
    virtual void acceptDetails() = 0; // Pure virtual function
    virtual void displayDetails() = 0;
    virtual float getDiscountedPrice() = 0; // Pure virtual for discount calculation
    virtual ~Product() {} // Virtual destructor for memory cleanup
};

// Derived class Book
class Book : public Product {
    string author;

public:
    void acceptDetails() {
        cout << "Enter Book ID, Title, Author, and Price: ";
        cin >> id >> title >> author >> price;
    }

    void displayDetails() {
        cout << "Book - ID: " << id << ", Title: " << title
             << ", Author: " << author << ", Price: " << price << endl;
    }

    float getDiscountedPrice() {
        return price * 0.9; // 10% discount
    }
};

// Derived class Tape
class Tape : public Product {
    string artist;

public:
    void acceptDetails() {
        cout << "Enter Tape ID, Title, Artist, and Price: ";
        cin >> id >> title >> artist >> price;
    }

    void displayDetails() {
        cout << "Tape - ID: " << id << ", Title: " << title
             << ", Artist: " << artist << ", Price: " << price << endl;
    }

    float getDiscountedPrice() {
        return price * 0.95f; // 5% discount
    }
};

int main() {
    Product* arr[3];
    int choice, i = 0;

    do {
        cout << "\nMenu:\n1. Add Book\n2. Add Tape\n3. Display Bill\n4. Exit\nEnter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            arr[i] = new Book();
            arr[i]->acceptDetails();
            i++;
            break;
        case 2:
            arr[i] = new Tape();
            arr[i]->acceptDetails();
            i++;
            break;
        case 3: {
            float total = 0.0f;
            cout << "\n--- Bill Details ---" << endl;
            for (int j = 0; j < i; j++) {
                cout << "Type: " << typeid(*arr[j]).name() << " - ";
                arr[j]->displayDetails();
                total += arr[j]->getDiscountedPrice();
            }
            cout << "Total Bill (with discounts): " << total << endl;
            break;
        }
        case 4:
            cout << "Exiting..." << endl;
            break;
        default:
            cout << "Invalid choice!" << endl;
        }

    } while (choice != 4);

    // Free allocated memory
    for (int j = 0; j < i; j++) {
        delete arr[j];
    }

    return 0;
}


