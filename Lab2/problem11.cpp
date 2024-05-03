// 11. C++ Program to Add Two Matrix Using Multi-dimensional Arrays.
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[100][100], arr2[100][100], add[100][100];
    cout << "First Matrix : " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
        cout << endl;
    }
    cout << "Second Marix : " << endl;
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
            add[i][j] = arr[i][j] + arr2[i][j];
        }
    }
    cout << "Add Two Matrix : " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << add[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}