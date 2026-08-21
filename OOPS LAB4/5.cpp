#include <iostream>
using namespace std;

class EventParticipant
{
private:
    string participantName;
    int age;
    string registrationStatus;

public:
    void getData()
    {
        cout << "Enter Participant Name: ";
        cin >> participantName;

        cout << "Enter Age: ";
        cin >> age;

        cout << "Enter Registration Status: ";
        cin >> registrationStatus;
    }

    friend void verifyParticipant(EventParticipant e);
};

void verifyParticipant(EventParticipant e)
{
    cout << "\n--- Participant Details ---" << endl;
    cout << "Participant Name: " << e.participantName << endl;
    cout << "Age: " << e.age << endl;
    cout << "Registration Status: "
         << e.registrationStatus << endl;

    if (e.age >= 18 && e.registrationStatus == "Active")
        cout << "Result: Eligible" << endl;
    else
        cout << "Result: Not Eligible" << endl;
}

int main()
{
    EventParticipant e;

    e.getData();
    verifyParticipant(e);

    return 0;
}