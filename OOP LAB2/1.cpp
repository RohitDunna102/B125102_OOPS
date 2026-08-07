#include <iostream>
using namespace std;
#include <string>

class car{
    int CarNumber, ModelYear;
    string BrandName[50];
    public:
    void getData()
{ 
    cout << "Enter Car Number: ";
    cin >> CarNumber;
    
    cout << "Enter the Brand Name: ";
    cin >> BrandName[50];

    cout << "Enter Model Year: ";
    cin >> ModelYear;
}
    void displayData()
    {
        cout << "\n----- Car Details -----";
        cout << "\n----- Car Number -----" << CarNumber ;
        cout << "\n----- Brand Name -----" << BrandName ;
        cout << "\n----- Model Year -----" << ModelYear ;
    }
};

int main()
{ 
   car c;
   c.getData();
   c.displayData();
   return 0;
}