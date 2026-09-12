#include <iostream>
using namespace std;

class SensorGrid {
private:
    int n;
    double *temperature;

public:
    SensorGrid(int size) {
        n = size;
        temperature = new double[n];
    }

    void enterReadings() {
        for (int i = 0; i < n; i++) {
            cout << "Enter temperature " << i + 1 << ": ";
            cin >> temperature[i];
        }
    }

    void displayReadings() {
        cout << "Temperature readings: ";

        for (int i = 0; i < n; i++) {
            cout << temperature[i] << " ";
        }

        cout << endl;
    }

    void replaceReading(int position, double newTemperature) {
        if (position >= 1 && position <= n) {
            temperature[position - 1] = newTemperature;
        } else {
            cout << "Invalid position.\n";
        }
    }

    double average() {
        double sum = 0;

        for (int i = 0; i < n; i++) {
            sum += temperature[i];
        }

        return sum / n;
    }

    friend void compareAverage(SensorGrid &s1, SensorGrid &s2);

    };


void compareAverage(SensorGrid &s1, SensorGrid &s2) {
    double avg1 = s1.average();
    double avg2 = s2.average();

    cout << "Grid 1 Average: " << avg1 << endl;
    cout << "Grid 2 Average: " << avg2 << endl;

    if (avg1 > avg2)
        cout << "Grid 1 has the greater average temperature.\n";
    else if (avg2 > avg1)
        cout << "Grid 2 has the greater average temperature.\n";
    else
        cout << "Both grids have the same average temperature.\n";
}

int main() {
    int n1, n2,position;
    double newTemp;

    cout << "Enter number of readings for Grid 1: ";
    cin >> n1;

    cout << "Enter number of readings for Grid 2: ";
    cin >> n2;

    SensorGrid *grid1 = new SensorGrid(n1);
    SensorGrid *grid2 = new SensorGrid(n2);

    cout << "\nGrid 1:\n";
    grid1->enterReadings();

    cout << "\nGrid 2:\n";
    grid2->enterReadings();

    cout << "\nBefore replacement:\n";
    grid1->displayReadings();
    grid2->displayReadings();


    cout << "\nEnter position to replace in Grid 1: ";
    cin >> position;

    cout << "Enter new temperature: ";
    cin >> newTemp;

    grid1->replaceReading(position, newTemp);

    cout << "\nAfter replacement:\n";
    grid1->displayReadings();

    cout << "\nComparison:\n";
    compareAverage(*grid1, *grid2);

    delete grid1;
    delete grid2;

    return 0;
}