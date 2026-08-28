#include <iostream>
#include <cstdlib>
using namespace std;

int nearValue(int a, int b)
{
    if (abs(a) <= abs(b))
        return a;
    else
        return b;
}

float nearValue(float a, float b)
{
    if (abs(a) <= abs(b))
        return a;
    else
        return b;
}

int nearValue(int arr[], int n)
{
    int nearest = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (abs(arr[i]) < abs(nearest))
            nearest = arr[i];
    }

    return nearest;
}

int main()
{
    int a, b;

    cout << "Enter two integers: ";
    cin >> a >> b;

    cout << "Integer nearest to zero: "
         << nearValue(a, b) << endl;

    float x, y;

    cout << "\nEnter two floating-point values: ";
    cin >> x >> y;

    cout << "Float nearest to zero: "
         << nearValue(x, y) << endl;

    int n;
    int arr[100];

    cout << "\nEnter size of integer array: ";
    cin >> n;

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Array element nearest to zero: "
         << nearValue(arr, n) << endl;

    return 0;
}
