#include <iostream>
using namespace std;

class UserAccount
{
private:
    string username;
    string password;
    int loginAttempts;
    string accountStatus;

public:
    UserAccount()
    {
        loginAttempts = 0;
        accountStatus = "Active";
    }

    void getData()
    {
        cout << "Enter Username: ";
        cin >> username;

        cout << "Enter Password: ";
        cin >> password;
    }

    friend void checkAccount(UserAccount u);
};

void checkAccount(UserAccount u)
{
    string enteredPassword;

    while (u.loginAttempts < 3)
    {
        cout << "\nEnter Password to Login: ";
        cin >> enteredPassword;

        if (enteredPassword == u.password)
        {
            cout << "\nLogin Successful!" << endl;
            cout << "Username: " << u.username << endl;
            cout << "Account Status: Active" << endl;
            return;
        }
        else
        {
            u.loginAttempts++;

            cout << "Wrong Password!" << endl;
            cout << "Attempts: " << u.loginAttempts << "/3" << endl;
            
        }
    }
    u.accountStatus = "Locked";
    cout << "\nAccount Locked!" << endl;
    cout << "Username: " << u.username << endl;
    cout << "Login Attempts: " << u.loginAttempts << endl;
}

int main()
{
    UserAccount u;

    u.getData();
    checkAccount(u);

    return 0;
}