#include <iostream>
using namespace std;

 class HotelRoom{
    int roomnumber, days;
    string guestname;
    float costperday, totalrent;
    public:
    void getData(){
        cout << "Enter Room Number: ";
        cin >> roomnumber;
    
        cout << "Enter Guest Name: ";
        cin >> guestname;
    
        cout << "Enter Number of days Stayed: ";
        cin >> days;

        cout << "Enter Cost per day: ";
        cin >> costperday;
         
    }

    void calculateRent(){
        totalrent = days * costperday;
    }
    
    void displaydata(){
        cout << "\n----- Booking Details ----- ";
        cout << "Guest Name: " << guestname;
        cout << "Room Number: " << roomnumber;
        cout << "Days Stayed: " << days;
        cout << "Cost Per Day: " << costperday;
        cout << "Total Rent: " << totalrent;
    }
 };

 int main(){
    HotelRoom h;

    h.getData();
    h.calculateRent();
    h.displaydata();

    return 0;
 }