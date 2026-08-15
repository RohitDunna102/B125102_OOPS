#include <iostream>
using namespace std;

int main()
{
    int n, even = 0, odd = 0;

    cout << "Enter number of elements: ";
    cin >> n;

    int *arr = new int[n];

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    cout << "Even numbers = " << even << endl;
    cout << "Odd numbers = " << odd << endl;

    delete[] arr;

    return 0;
}