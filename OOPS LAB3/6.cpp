#include <iostream>
using namespace std;

class Product
{
    int productID;
    string productName;
    float price;
    int quantity;

public:
    void getData()
    {
        cout << "Enter Product ID: ";
        cin >> productID;

        cout << "Enter Product Name: ";
        cin >> productName;

        cout << "Enter Price: ";
        cin >> price;

        cout << "Enter Quantity: ";
        cin >> quantity;
    }

    float getCost()
    {
        return price * quantity;
    }

    void display()
    {
        cout << productID << "\t"
             << productName << "\t"
             << price << "\t"
             << quantity << "\t"
             << getCost() << endl;
    }
};

int main()
{
    int n;
    float total = 0;

    cout << "Enter number of products: ";
    cin >> n;

    Product *p = new Product[n];

    for (int i = 0; i < n; i++)
    {
        cout << "\nProduct " << i + 1 << endl;
        p[i].getData();
    }

    cout << "\nID\tName\tPrice\tQty\tCost\n";

    for (int i = 0; i < n; i++)
    {
        p[i].display();
        total += p[i].getCost();
    }

    cout << "\nOverall Inventory Value = " << total << endl;

    delete[] p;

    return 0;
}