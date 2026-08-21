#include <iostream>
using namespace std;

class MuseumManager;

class Exhibit
{
private:
    string exhibitName;
    int exhibitID;
    int visitorCount;
    bool displayStatus;

public:
    void getData()
    {
        cout << "Enter Exhibit Name: ";
        cin >> exhibitName;

        cout << "Enter Exhibit ID: ";
        cin >> exhibitID;

        visitorCount = 0;
        displayStatus = false;
    }

    friend class MuseumManager;
};

class MuseumManager
{
public:
    void displayInfo(Exhibit &e)
    {
        cout << "\n--- Exhibit Information ---" << endl;
        cout << "Exhibit Name: " << e.exhibitName << endl;
        cout << "Exhibit ID: " << e.exhibitID << endl;
        cout << "Visitor Count: " << e.visitorCount << endl;
        cout << "Display Status: "
             << (e.displayStatus ? "Open" : "Closed") << endl;
    }

    void addVisitors(Exhibit &e, int visitors)
    {
        e.visitorCount += visitors;
        cout << visitors << " visitors added." << endl;
    }

    void resetVisitorCount(Exhibit &e)
    {
        e.visitorCount = 0;
        cout << "Visitor count reset." << endl;
    }

    void openExhibit(Exhibit &e)
    {
        e.displayStatus = true;
        cout << "Exhibit opened." << endl;
    }

    void closeExhibit(Exhibit &e)
    {
        e.displayStatus = false;
        cout << "Exhibit closed." << endl;
    }

    void checkStatus(Exhibit &e)
    {
        cout << "Exhibit is currently "
             << (e.displayStatus ? "Open." : "Closed.") << endl;
    }
};

int main()
{
    Exhibit e;
    MuseumManager mm;

    e.getData();

    mm.addVisitors(e, 25);
    mm.openExhibit(e);
    mm.displayInfo(e);
    mm.checkStatus(e);
    mm.resetVisitorCount(e);
    mm.closeExhibit(e);

    return 0;
}