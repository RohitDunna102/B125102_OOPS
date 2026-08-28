#include <iostream>
using namespace std;

void inspect(int x)
{
    cout << "Value of integer: " << x << endl;
}

void inspect(int *p)
{
    cout << "Value stored at pointer: " << *p << endl;
}

void inspect(int *arr, int n)
{
    cout << "Array elements: ";

    for (int i = 0; i < n; i++)
        cout << *(arr + i) << " ";

    cout << endl;
}

int main()
{
    int x;

    cout << "Enter an integer: ";
    cin >> x;

    inspect(x);

    int *p = &x;

    inspect(p);

    int n;
    int arr[100];

    cout << "\nEnter size of array: ";
    cin >> n;

    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    inspect(arr, n);

    return 0;
}