#include <iostream>
using namespace std;

class Borrower {
private:
    int borrowerID;
    int overdueDays;
    double fineAmount;

public:
    Borrower(int id, int days) {
        borrowerID = id;
        overdueDays = days;
        fineAmount = 0;
    }

   
    void calculateFine() {
        fineAmount = overdueDays * 5;
    }

    
    void calculateFine(double specialRate) {
        fineAmount = overdueDays * specialRate;
    }

    void display() {
        cout << "Borrower ID: " << borrowerID << endl;
        cout << "Overdue Days: " << overdueDays << endl;
        cout << "Fine: " << fineAmount << endl;
    }

    
    friend void compareFine(Borrower &b1, Borrower &b2);
};

void compareFine(Borrower &b1, Borrower &b2) {
    if (b1.fineAmount > b2.fineAmount) {
        cout << "Borrower " << b1.borrowerID
             << " has the higher fine.\n";
    }
    else if (b2.fineAmount > b1.fineAmount) {
        cout << "Borrower " << b2.borrowerID
             << " has the higher fine.\n";
    }
    else {
        cout << "Both borrowers have the same fine.\n";
    }
}

int main() {
    Borrower *b1 = new Borrower(101, 10);
    Borrower *b2 = new Borrower(102, 15);

    b1->calculateFine();
    b2->calculateFine(3);

    b1->display();
    b2->display();

    compareFine(*b1, *b2);

    delete b1;
    delete b2;

    return 0;
}