#include <iostream>
using namespace std;

int main()
{
    int n, search, found = 0;

    cout << "Enter number of elements: ";
    cin >> n;

    int *arr = new int[n];

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Enter element to search: ";
    cin >> search;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == search)
        {
            cout << "Element found at position " << i + 1 << endl;
            found = 1;
            break;
        }
    }

    if (found == 0)
        cout << "Element not found." << endl;

    delete[] arr;

    return 0;
}