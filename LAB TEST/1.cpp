#include <iostream>
using namespace std;

class ParkingFloor {
private:
    int floorNumber;
    int numSlots;
    bool *occupied;

public:
    ParkingFloor(int floor, int slots) {
        floorNumber = floor;
        numSlots = slots;

        occupied = new bool[numSlots];

        for (int i = 0; i < numSlots; i++) {
            occupied[i] = false;
        }
    }

    
    void reserve(int slot) {
        if (slot >= 1 && slot <= numSlots) {
            if (!occupied[slot - 1]) {
                occupied[slot - 1] = true;
                cout << "Slot " << slot << " reserved.\n";
            } else {
                cout << "Slot " << slot << " is already occupied.\n";
            }
        } else {
            cout << "Invalid slot number.\n";
        }
    }

    
    void reserve(int startSlot, int count) {
        if (startSlot < 1 || startSlot + count - 1 > numSlots) {
            cout << "Invalid slot range.\n";
            return;
        }

        for (int i = startSlot - 1; i < startSlot - 1 + count; i++) {
            if (occupied[i]) {
                cout << "Some slots are already occupied.\n";
                return;
            }
        }

        for (int i = startSlot - 1; i < startSlot - 1 + count; i++) {
            occupied[i] = true;
        }

        cout << count << " consecutive slots reserved.\n";
    }

    void display() {
        cout << "Floor " << floorNumber << ": ";

        for (int i = 0; i < numSlots; i++) {
            cout << (occupied[i] ? "X " : "O ");
        }

        cout << "\n";
    }

    
};

int main() {
    int floors, slots;

    cout << "Enter number of floors: ";
    cin >> floors;

    cout << "Enter slots per floor: ";
    cin >> slots;

    ParkingFloor **building = new ParkingFloor*[floors];

    for (int i = 0; i < floors; i++) {
        building[i] = new ParkingFloor(i + 1, slots);
    }

    building[0]->reserve(2);
    building[0]->reserve(4, 3);
    building[0]->display();
    

    for (int i = 0; i < floors; i++) {
        delete building[i];
    }

    delete[] building;

    return 0;
}