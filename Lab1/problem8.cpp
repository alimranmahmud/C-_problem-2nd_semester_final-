// 8. C++ Program to Check Whether a Number is Even or Odd
#include <iostream>
using namespace std;

int main()
{
    int num;
    cin >> num;
    if (num % 2 == 0)
    {
        cout << "Even" << endl;
    }
    else
    {
        cout << "Odd" << endl;
    }
    return 0;
}