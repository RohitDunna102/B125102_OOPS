
#include <iostream>
using namespace std;

class Bill {
    int items;
    double amount;

public:
    Bill(int i = 0, double a = 0) {
        items = i;
        amount = a;
    }

    Bill operator+(const Bill& b) const {
        return Bill(items + b.items, amount + b.amount);
    }

    bool operator>(const Bill& b) const {
        return amount > b.amount;
    }

    void display() const {
        cout << "Number of items: " << items << endl;
        cout << "Total amount: " << amount << endl;
    }
};

int main() {
    Bill b1(3, 500);
    Bill b2(5, 800);

    Bill b3 = b1 + b2;

    cout << "First bill:" << endl;
    b1.display();

    cout << "Second bill:" << endl;
    b2.display();

    cout << "Combined bill:" << endl;
    b3.display();

    cout << "First bill > second bill: "
         << boolalpha << (b1 > b2) << endl;

    return 0;
}
