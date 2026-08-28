#include <iostream>
using namespace std;

int information(char arr[])
{
    int length = 0;

    while (arr[length] != '\0')
        length++;

    return length;
}

int information(char arr[], char ch)
{
    int count = 0;

    for (int i = 0; arr[i] != '\0'; i++)
    {
        if (arr[i] == ch)
            count++;
    }

    return count;
}

int information(char arr[], char ch, int k)
{
    int count = 0;

    for (int i = 0; i < k && arr[i] != '\0'; i++)
    {
        if (arr[i] == ch)
            count++;
    }

    return count;
}

int main()
{
    char arr[100];
    char ch;
    int k;

    cout << "Enter a string: ";
    cin >> arr;

    cout << "Length: " << information(arr) << endl;

    cout << "\nEnter character to count: ";
    cin >> ch;

    cout << "Total occurrences: "
         << information(arr, ch) << endl;

    cout << "\nEnter k: ";
    cin >> k;

    cout << "Occurrences in first " << k << " positions: "
         << information(arr, ch, k) << endl;

    return 0;
}