
#include <iostream>
#include <string>
using namespace std;

class Book {
    string title;
    double price;

public:
    Book(string t, double p) {
        title = t;
        price = p;
    }

    bool operator<(const Book& b) const {
        if (price == b.price)
            return title < b.title;

        return price < b.price;
    }
};

int main() {
    Book b1("Atomic Habits", 450);
    Book b2("Deep Work", 450);

     if (b1 < b2)
    cout << "First book is smaller" << endl;
    else
    cout << "First book is not smaller" << endl;

    return 0;

 
}


