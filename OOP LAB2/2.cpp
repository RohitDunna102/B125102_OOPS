#include <iostream>
using namespace std;

class square{
float side, area, perimeter;

 public:

 void getData()
{
    cout << "Enter the side of the square:";
    cin >> side;
}

 void calculateArea()
{
    area = side * side;
}
 void calculatePerimeter()
{
    perimeter = 4 * side;
}
 void displayData()
 {
    cout << "\n----- Square Details -----\n";
    cout << "Area = "<< area ;
    cout << "Perimeter =" << perimeter;
 }

};
int main()
{
    square s;
    s.getData();
    s.calculateArea();
    s.calculatePerimeter();
    s.displayData();

    return 0;
}