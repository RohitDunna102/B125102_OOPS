#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    int n;
    int vowels = 0, consonants = 0, digits = 0, spaces = 0;

    cout << "Enter size of character array: ";
    cin >> n;

    char *str = new char[n];

    cout << "Enter a string: ";
    cin.getline(str, n);

    for (int i = 0; str[i] != '\0'; i++)
    {
        char ch = tolower(str[i]);

        if (ch == 'a' || ch == 'e' || ch == 'i' ||
            ch == 'o' || ch == 'u')
        {
            vowels++;
        }
        else if (isalpha(ch))
        {
            consonants++;
        }
        else if (isdigit(ch))
        {
            digits++;
        }
        else if (ch == ' ')
        {
            spaces++;
        }
    }

    cout << "Vowels = " << vowels << endl;
    cout << "Consonants = " << consonants << endl;
    cout << "Digits = " << digits << endl;
    cout << "Spaces = " << spaces << endl;

    delete[] str;

    return 0;
}