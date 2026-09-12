#include <iostream>
using namespace std;

class Inventory {
private:
    int playerID;
    int numItems;
    int *quantity;

public:
    Inventory(int id, int items) {
        playerID = id;
        numItems = items;

        quantity = new int[numItems];

        for (int i = 0; i < numItems; i++) {
            quantity[i] = 5;
        }
    }

    void display() {
        cout << "Player ID: " << playerID << endl;

        cout << "Item quantities: ";
        for (int i = 0; i < numItems; i++) {
            cout << quantity[i] << " ";
        }

        cout << endl;
    }
    friend class GameController;

    
    
};

class GameController {
public:
    void inspectInventory(Inventory &inv) {
        cout << "Inspecting inventory...\n";
        cout << "Player ID: " << inv.playerID << endl;

        for (int i = 0; i < inv.numItems; i++) {
            cout << "Item " << i + 1
                 << ": " << inv.quantity[i] << endl;
        }
    }

    void changeQuantity(Inventory &inv, int item, int newQuantity) {
        if (item >= 1 && item <= inv.numItems) {
            inv.quantity[item - 1] = newQuantity;

            cout << "Quantity updated successfully.\n";
        } else {
            cout << "Invalid item number.\n";
        }
    }
};

int main() {
    Inventory *inventory = new Inventory(1001, 4);

    GameController controller;

    controller.inspectInventory(*inventory);

    controller.changeQuantity(*inventory, 2, 10);

    inventory->display();

    delete inventory;

    return 0;
}