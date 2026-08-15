#include <iostream>
using namespace std;

void input(int *arr, int n)
{
    cout << "Enter elements: ";

    for (int i = 0; i < n; i++)
        cin >> arr[i];
}

int sum(int *arr, int n)
{
    int s = 0;

    for (int i = 0; i < n; i++)
        s += arr[i];

    return s;
}

int smallest(int *arr, int n)
{
    int small = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (arr[i] < small)
            small = arr[i];
    }

    return small;
}

int largest(int *arr, int n)
{
    int large = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (arr[i] > large)
            large = arr[i];
    }

    return large;
}

void display(int *arr, int n)
{
    cout << "Elements: ";

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    cout << endl;
}

int main()
{
    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    int *arr = new int[n];

    input(arr, n);
    display(arr, n);

    cout << "Sum = " << sum(arr, n) << endl;
    cout << "Smallest = " << smallest(arr, n) << endl;
    cout << "Largest = " << largest(arr, n) << endl;

    delete[] arr;

    return 0;
}