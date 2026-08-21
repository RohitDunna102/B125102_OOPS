#include <iostream>
using namespace std;

class PrinterManager;

class Printer
{
private:
    string printerName;
    int pagesPrinted;
    int inkLevel;
    bool powerStatus;

public:
    void getData()
    {
        cout << "Enter Printer Name: ";
        cin >> printerName;

        cout << "Enter Number of Pages Printed: ";
        cin >> pagesPrinted;

        cout << "Enter Ink Level (percentage): ";
        cin >> inkLevel;

        powerStatus = false;
    }

    friend class PrinterManager;
};

class PrinterManager
{
public:
    void displayInfo(Printer &p)
    {
        cout << "\n--- Printer Information ---" << endl;
        cout << "Printer Name: " << p.printerName << endl;
        cout << "Pages Printed: " << p.pagesPrinted << endl;
        cout << "Ink Level: " << p.inkLevel << "%" << endl;
        cout << "Power Status: "
             << (p.powerStatus ? "ON" : "OFF") << endl;
    } 

    void turnOn(Printer &p)
    {
        p.powerStatus = true;
        cout << "Printer turned ON." << endl;
    }

    void turnOff(Printer &p)
    {
        p.powerStatus = false;
        cout << "Printer turned OFF." << endl;
    }

    void checkInk(Printer &p)
    {
        cout << "Ink Level: " << p.inkLevel <<  endl;
    }

    void resetPageCount(Printer &p)
    {
        p.pagesPrinted = 0;
        cout << "Page count resetted." << endl;
    }
};

int main()
{
    Printer p;
    PrinterManager pm;

    p.getData();

    pm.displayInfo(p);
    pm.turnOn(p);
    pm.checkInk(p);
    pm.resetPageCount(p);
    pm.turnOff(p);

    return 0;
}