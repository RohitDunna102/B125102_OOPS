#include <iostream>
using namespace std;

class AttendanceManager;

class Classroom
{
private:
    string className;
    int totalStudents;
    int presentStudents;
    bool attendanceStatus;

public:
    void getData()
    {
        cout << "Enter Class Name: ";
        cin >> className;

        cout << "Enter Total Students: ";
        cin >> totalStudents;

        presentStudents = 0;
        attendanceStatus = false;
    }

    friend class AttendanceManager;
};

class AttendanceManager
{
public:
    void displayInfo(Classroom &c)
    {
        cout << "\n--- Classroom Information ---" << endl;
        cout << "Class Name: " << c.className << endl;
        cout << "Total Students: " << c.totalStudents << endl;
        cout << "Present Students: " << c.presentStudents << endl;
        cout << "Absent Students: "
             << c.totalStudents - c.presentStudents << endl;
        cout << "Attendance Status: "
             << (c.attendanceStatus ? "Completed" : "Not Completed")
             << endl;
    }

    void updatePresentStudents(Classroom &c, int present)
    {
        if (present >= 0 && present <= c.totalStudents)
        {
            c.presentStudents = present;
            cout << "Present student count updated." << endl;
        }
        else
        {
            cout << "Invalid number of present students." << endl;
        }
    }

    void completeAttendance(Classroom &c)
    {
        c.attendanceStatus = true;
        cout << "Attendance marked as completed." << endl;
    }

    void checkAttendance(Classroom &c)
    {
        cout << "Attendance Status: "
             << (c.attendanceStatus ? "Completed" : "Not Completed")
             << endl;
    }

    void displayAbsentStudents(Classroom &c)
    {
        cout << "Absent Students: "
             << c.totalStudents - c.presentStudents << endl;
    }
};

int main()
{
    Classroom c;
    AttendanceManager am;

    c.getData();

    int present;

    cout << "Enter Number of Present Students: ";
    cin >> present;

    am.updatePresentStudents(c, present);
    am.completeAttendance(c);
    am.displayInfo(c);
    am.checkAttendance(c);
    am.displayAbsentStudents(c);

    return 0;
}