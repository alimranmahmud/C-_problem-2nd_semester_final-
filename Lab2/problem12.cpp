// 12. C++ Program to Multiply Two Matrix Using Multi-dimensional Arrays.
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[100][100], arr2[100][100], multiply[100][100];
    cout << "First MATRIX : " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
        cout << endl;
    }
    cout << "second MATRIX : " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr2[i][j];
        }
        cout << endl;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            multiply[i][j] = arr[i][j] * arr2[i][j];
        }
    }
    cout << "Multiply Two Matrix : " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << multiply[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}