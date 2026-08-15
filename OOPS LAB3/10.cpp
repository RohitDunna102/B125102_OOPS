#include <iostream>
using namespace std;

int main()
{
    int m, n;

    cout << "Enter rows and columns: ";
    cin >> m >> n;

    int **a = new int*[m];
    int **b = new int*[m];
    int **sum = new int*[m];

    for(int i = 0; i < m; i++)
    {
        a[i] = new int[n];
        b[i] = new int[n];
        sum[i] = new int[n];
    }

    cout << "Enter elements of first matrix:\n";
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }

    cout << "Enter elements of second matrix:\n";
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cin >> b[i][j];
        }
    }

    // Matrix addition
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }

    cout << "\nResulting Matrix:\n";
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cout << sum[i][j] << " ";
        }
        cout << endl;
    }

    // Deallocate memory for each row
    for(int i = 0; i < m; i++)
    {
        delete[] a[i];
        delete[] b[i];
        delete[] sum[i];
    }

    // Deallocate row pointers
    delete[] a;
    delete[] b;
    delete[] sum;

    return 0;
}