#include <iostream>
using namespace std;

float evaluate(int a, int b)
{
    return (a + b) / 2.0;
}

float evaluate(int a, int b, int c)
{
    return (a + b + c) / 3.0;
}

float evaluate(float a, float b)
{
    return (a + b) / 2.0;
}

float evaluate(int arr[], int n)
{
    int sum = 0;

    for (int i = 0; i < n; i++)
        sum += arr[i];

    return (float)sum / n;
}

float evaluate(int *a, int *b)
{
    return (*a + *b) / 2.0;
}

int main()
{
    int a, b, c;

    cout << "Enter two integers: ";
    cin >> a >> b;

    cout << "Average of two integers: "
         << evaluate(a, b) << endl;

    cout << "\nEnter three integers: ";
    cin >> a >> b >> c;

    cout << "Average of three integers: "
         << evaluate(a, b, c) << endl;

    float x, y;

    cout << "\nEnter two floating-point values: ";
    cin >> x >> y;

    cout << "Average of two floating-point values: "
         << evaluate(x, y) << endl;

    int n;
    int arr[100];

    cout << "\nEnter size of integer array: ";
    cin >> n;

    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Average of integer array: "
         << evaluate(arr, n) << endl;

    int p, q;

    cout << "\nEnter two integers for pointer average: ";
    cin >> p >> q;

    cout << "Average using pointers: "
         << evaluate(&p, &q) << endl;

    return 0;
}