#include <iostream>
using namespace std;

class WalletManager;

class DigitalWallet
{
private:
    string userName;
    float walletBalance;
    bool walletStatus;

public:
    void getData()
    {
        cout << "Enter User Name: ";
        cin >> userName;

        cout << "Enter Wallet Balance: ";
        cin >> walletBalance;

        walletStatus = true;
    }

    friend class WalletManager;
};

class WalletManager
{
public:
    void displayDetails(DigitalWallet w)
    {
        cout << "\n--- Wallet Details ---" << endl;
        cout << "User Name: " << w.userName << endl;
        cout << "Wallet Balance: Rs. "
             << w.walletBalance << endl;
        cout << "Wallet Status: "
             << (w.walletStatus ? "Active" : "Disabled")
             << endl;
    }

    void addMoney(DigitalWallet w, float amount)
    {
        if (w.walletStatus)
        {
            w.walletBalance += amount;
            cout << "Rs. " << amount
                 << " added successfully." << endl;
        }
        else
        {
            cout << "Wallet is disabled." << endl;
        }
    }

    void deductMoney(DigitalWallet w, float amount)
    {
        if (!w.walletStatus)
        {
            cout << "Wallet is disabled." << endl;
        }
        else if (amount <= w.walletBalance)
        {
            w.walletBalance -= amount;
            cout << "Rs. " << amount
                 << " deducted successfully." << endl;
        }
        else
        {
            cout << "Insufficient balance." << endl;
        }
    }

    void disableWallet(DigitalWallet w)
    {
        w.walletStatus = false;
        cout << "Wallet disabled." << endl;
    }

    void checkStatus(DigitalWallet &w)
    {
        cout << "Wallet Status: "
             << (w.walletStatus ? "Active" : "Disabled")
             << endl;
    }
};

int main()
{
    DigitalWallet w;
    WalletManager wm;

    w.getData();

    wm.displayDetails(w);
    wm.addMoney(w, 500);
    wm.deductMoney(w, 200);
    wm.displayDetails(w);
    wm.disableWallet(w);
    wm.checkStatus(w);

    return 0;
}