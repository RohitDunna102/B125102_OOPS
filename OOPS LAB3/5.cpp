#include <iostream>
using namespace std;

class Book
{
    int bookID;
    string title;
    string author;
    float price;

public:
    void getData()
    {
        cout << "Enter Book ID: ";
        cin >> bookID;

        cout << "Enter Book Title: ";
        cin >> title;

        cout << "Enter Author: ";
        cin >> author;

        cout << "Enter Price: ";
        cin >> price;
    }

    void display()
    {
        cout << "\nBook Details\n";
        cout << "Book ID: " << bookID  ;
        cout << "Title: " << title ;
        cout << "Author: " << author ;
        cout << "Price: " << price ;
    }
};

int main()
{
    Book *b = new Book;

    b->getData();
    b->display();

    delete b;

    return 0;
}