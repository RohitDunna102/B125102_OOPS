#include <iostream>
using namespace std;

class MobileRecharge
{
    string mobilenumber, customername;
    float balance, rechargeamount, planamount;

    public:

    void getData(){
        cout << "Enter Mobile Number: ";
        cin >> mobilenumber;
        cout << "Enter Customer Name: ";
        cin >> customername;
        cout << "Enter Customer Balance: ";
        cin >> balance;
    }

    void recharge(){
        cout << "Enter Recharge Amount: ";
        cin >> rechargeamount;
        recharge = balance + rechargeamount;

    }

    void deductplan(){
        cout << "Enter Recharge Plan Amount: ";
        cin >> rechargeamount;

        if(rechargeamount<=)
    }
}