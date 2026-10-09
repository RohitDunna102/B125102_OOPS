
#include <iostream>
using namespace std;

class InventoryItem {
    int productID, quantity;
    double unitPrice;

public:
    InventoryItem(int id, double price, int qty) {
        productID = id;
        unitPrice = price;
        quantity = qty;
    }

    InventoryItem operator+(const InventoryItem& item) const {
        if (productID == item.productID &&
            unitPrice == item.unitPrice) {
            return InventoryItem(productID, unitPrice,
                                 quantity + item.quantity);
        }

        cout << "Incompatible inventory items!" << endl;
        return *this;
    }

    void display() const {
        cout << "Product ID: " << productID
             << ", Unit Price: " << unitPrice
             << ", Quantity: " << quantity << endl;
    }
};

int main() {
    InventoryItem i1(101, 50.0, 10);
    InventoryItem i2(101, 50.0, 20);
    InventoryItem i3(102, 60.0, 5);

    InventoryItem i4 = i1 + i2;
    cout << "Combined inventory: ";
    i4.display();

    InventoryItem i5 = i1 + i3;

    cout << "Original first item: ";
    i1.display();

    return 0;
}
