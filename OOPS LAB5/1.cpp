#include <iostream>
using namespace std;

int convert(int km)
{
    return km * 1000;
}

int convert(long m)
{
    return m * 100;
}

float convert(float km)
{
    return km * 1000;
}

int main()
{
    int km;
    long m;
    float fkm;

    cout << "Enter distance in kilometers (integer): ";
    cin >> km;
    cout << "Meters: " << convert(km) << endl;

    cout << "\nEnter distance in meters: ";
    cin >> m;
    cout << "Centimeters: " << convert(m) << endl;

    cout << "\nEnter distance in kilometers (decimal): ";
    cin >> fkm;
    cout << "Meters: " << convert(fkm) << endl;

    return 0;
}