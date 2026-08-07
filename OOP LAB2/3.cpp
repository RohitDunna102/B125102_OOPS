#include <iostream>
using namespace std;

class Temperature{
    float celsius, fahrenheit;
    public:

    void getData(){
        cout << "Enter the temperate in celsius";
        cin >> celsius;
    }

    void convert(){
        fahrenheit = (9.0 / 5.0) * celsius + 32;
    }

    void displayData(){
        cout << "\n Temperature in Celsius : " <<  celsius;
        cout << "\n Temperature in Fahrenheit : " << fahrenheit;
    }
};

int main(){
    Temperature t;
    t.getData();
    t.convert();
    t.displayData();

    return 0;
}