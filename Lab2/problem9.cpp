// 7. Write a C++ Program to Reverse a Number.
#include <iostream>
using namespace std;

int main()
{
    int n, avg, sum = 0;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum = sum + arr[i];
    }
    cout << "Average : " << sum / n << endl;

    return 0;
}