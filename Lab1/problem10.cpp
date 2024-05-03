// 10. C++ Program to Find the Largest Number Among Three Numbers
#include <iostream>
using namespace std;

int main()
{
    int a, b, c, large;
    cin >> a >> b >> c;
    if (a > b && a > c)
    {
        large = a;
    }
    else if (b > a && b > c)
    {
        large = b;
    }
    else
    {
        large = c;
    }
    cout << "Large Number Is " << large << endl;
    return 0;
}