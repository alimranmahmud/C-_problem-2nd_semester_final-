// 6. Write a C++ Program to Count Number of Digits of an Integer.
#include <iostream>
using namespace std;
int main()
{
    int n, count = 0;
    cin >> n;
    while (n != 0)
    {
        n = n / 10;
        count++;
    }
    cout << count << endl;
    return 0;
}