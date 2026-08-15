#include <iostream>
using namespace std;

class Employee
{

    int employeeID;
    string employeeName;
    float salary;

public:
    void getData()
    {
        cout << "Enter Employee ID: ";
        cin >> employeeID;

        cout << "Enter Employee Name: ";
        cin >> employeeName;

        cout << "Enter Salary: ";
        cin >> salary;
    }

    void display()
    {
        cout << "Employee ID: " << employeeID << endl;
        cout << "Employee Name: " << employeeName << endl;
        cout << "Salary: " << salary << endl;
    }

    float getSalary()
    {
        return salary;
    }
};

int main()
{
    int n;
    float total = 0;

    cout << "Enter number of employees: ";
    cin >> n;

    Employee *e = new Employee[n];

    for (int i = 0; i < n; i++)
    {
        cout << "\nEmployee " << i + 1 << endl;
        e[i].getData();
    }

    int highest = 0;

    for (int i = 0; i < n; i++)
    {
        total += e[i].getSalary();

        if (e[i].getSalary() > e[highest].getSalary())
            highest = i;
    }

    cout << "\nEmployee with Highest Salary:\n";
    e[highest].display();

    cout << "\nAverage Salary = " << total / n << endl;

    delete[] e;

    return 0;
}