#include <iostream>
#include <cctype>
using namespace std;

void check(int n)
{
    if (n > 0)
        cout << "Positive" << endl;
    else if (n < 0)
        cout << "Negative" << endl;
    else
        cout << "Zero" << endl;
}

void check(char ch)
{
    if (ch >= 'A' && ch <= 'Z')
        cout << "Uppercase Letter" << endl;
    else if (ch >= 'a' && ch <= 'z')
        cout << "Lowercase Letter" << endl;
    else
        cout << "Not an alphabet" << endl;
}

void check(char arr[], int n, char search)
{
    bool found = false;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == search)
        {
            found = true;
            break;
        }
    }

    if (found)
        cout << "Character Found" << endl;
    else
        cout << "Character Not Found" << endl;
}

int main()
{
    int n;
    char ch;

    cout << "Enter an integer: ";
    cin >> n;
    check(n);

    cout << "\nEnter a character: ";
    cin >> ch;
    check(ch);

    int size;
    char arr[100];

    cout << "\nEnter size of character array: ";
    cin >> size;

    cout << "Enter characters: ";
    for (int i = 0; i < size; i++)
        cin >> arr[i];

    cout << "Enter character to search: ";
    cin >> ch;

    check(arr, size, ch);

    return 0;
}