// 5. Write a C++ program to find out factorial value of given number.
#include <iostream>
using namespace std;
int main()
{
    int n, fact = 1;
    cin >> n;
    if (n != 0)
    {
        for (int i = 1; i <= n; i++)
        {
            fact = fact * i;
        }
    }
    cout << fact << endl;
    return 0;
}