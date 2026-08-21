#include <iostream>
using namespace std;

class ServiceManager;

class VehicleService
{
private:
    string vehicleNumber;
    string ownerName;
    bool serviceDue;
    int lastServiceKm;

public:
    void getData()
    {
        cout << "Enter Vehicle Number: ";
        cin >> vehicleNumber;

        cout << "Enter Owner Name: ";
        cin >> ownerName;

        cout << "Enter Last Service Kilometres: ";
        cin >> lastServiceKm;

        cout << "Is Service Due? (yes =1, no=0): ";
        cin >> serviceDue;
    }

    friend class ServiceManager;
};

class ServiceManager
{
public:
    void displayInfo(VehicleService &v)
    {
        cout << "\n--- Vehicle Service Information ---" << endl;
        cout << "Vehicle Number: " << v.vehicleNumber << endl;
        cout << "Owner Name: " << v.ownerName << endl;
        cout << "Last Service Kilometres: "
             << v.lastServiceKm << endl;
        cout << "Service Due: "
             << (v.serviceDue ? "Yes" : "No") << endl;
    }

    void completeService(VehicleService &v)
    {
        v.serviceDue = false;
        cout << "Service marked as completed." << endl;
    }

    void updateKilometres(VehicleService &v, int km)
    {
        v.lastServiceKm = km;
        cout << "Last service kilometres updated." << endl;
    }

    void checkService(VehicleService &v)
    {
        if (v.serviceDue)
            cout << "Vehicle requires servicing." << endl;
        else
            cout << "Vehicle does not require servicing." << endl;
    }
};

int main()
{
    VehicleService v;
    ServiceManager sm;

    v.getData();

    sm.displayInfo(v);
    sm.checkService(v);
    sm.completeService(v);
    sm.updateKilometres(v, 15000);
    sm.displayInfo(v);

    return 0;
}