#include <iostream>
using namespace std;

class Weather
{
private:
    string cityName;
    float temperature;
    string condition;

public:
    void getData()
    {
        cout << "Enter City Name: ";
        cin >> cityName;

        cout << "Enter Temperature: ";
        cin >> temperature;

        cout << "Enter Weather Condition: ";
        cin >> condition;
    }

    friend void generateReport(Weather w);
};

void generateReport(Weather w)
{
    cout << "\n--- Weather Report ---\n";
    cout << "City: " << w.cityName << endl;
    cout << "Temperature: " << w.temperature << " C" << endl;
    cout << "Condition: " << w.condition << endl;

    if (w.temperature > 35)
        cout << "Category: Very Hot";
    else if (w.temperature >= 20)
        cout << "Category: Pleasant";
    else
        cout << "Category: Cool";
}

int main()
{
    Weather w;
    w.getData();
    generateReport(w);

    return 0;
}