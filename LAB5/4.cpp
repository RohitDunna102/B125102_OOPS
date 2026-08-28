#include <iostream>
using namespace std;

int process(int arr[], int n)
{
    int sum = 0;

    for (int i = 0; i < n; i++)
        sum += arr[i];

    return sum;
}

float process(float arr[], int n)
{
    float sum = 0;

    for (int i = 0; i < n; i++)
        sum += arr[i];

    return sum;
}

int process(int arr[], int n, int k)
{
    int sum = 0;

    for (int i = 0; i < k; i++)
        sum += arr[i];

    return sum;
}

int main()
{
    int n;

    cout << "Enter size of integer array: ";
    cin >> n;

    int arr[100];

    cout << "Enter integer elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Sum of integer array: "
         << process(arr, n) << endl;

    float farr[100];

    cout << "\nEnter floating-point elements: ";
    for (int i = 0; i < n; i++)
        cin >> farr[i];

    cout << "Sum of floating-point array: "
         << process(farr, n) << endl;

    int k;

    cout << "\nEnter k: ";
    cin >> k;

    cout << "Sum of first " << k << " elements: "
         << process(arr, n, k) << endl;

    return 0;
}