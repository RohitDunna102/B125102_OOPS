#include <iostream>
using namespace std;

class Trip {
private:
    int tripID;
    double distance;
    double baseFare;

public:
    Trip(int id, double dist, double fareAmount) {
        tripID = id;
        distance = dist;
        baseFare = fareAmount;
    }

    
    double fare() {
        return baseFare ;
    }

    
    double fare(int waitingTime) {
        return baseFare + waitingTime * 2;
    }

   
    double fare(int waitingTime, int discount) {
        double total = baseFare + waitingTime * 2;

        total = total - (total * discount / 100.0);

        return total;
    }

    friend void compareFare(Trip &t1, Trip &t2);
};

void compareFare(Trip &t1, Trip &t2) {
   double fare1 = t1.fare();
    double fare2 = t2.fare();
    cout << "Trip " << t1.tripID << " final fare: "
         << fare1 << endl;

    cout << "Trip " << t2.tripID << " final fare: "
         << fare2 << endl;

    if (fare1 < fare2)
        cout << "Trip " << t1.tripID << " is cheaper.\n";
    else if (fare2 < fare1)
        cout << "Trip " << t2.tripID << " is cheaper.\n";
    else
        cout << "Both trips have the same fare.\n";
}

int main() {
    Trip *t1 = new Trip(101, 10, 50);
    Trip *t2 = new Trip(102, 15, 40);

    cout << "Normal fare of Trip 1: "
         << t1->fare() << endl;

    cout << "Trip 1 fare with waiting: "
         << t1->fare(10) << endl;

    cout << "Trip 1 fare with waiting and discount: "
         << t1->fare(10, 5) << endl;

    cout << endl;

    compareFare(*t1, *t2);

    delete t1;
    delete t2;

    return 0;
}