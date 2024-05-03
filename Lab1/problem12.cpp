// 12. C++ Program to Check Whether a Number is Positive or Negative
#include <iostream>
using namespace std;

int main()
{
    int num;
    cin >> num;
    if (num > 0)
    {
        cout << "Positive : "
             << "(" << num << ")" << endl;
    }
    else
    {
        cout << "Negative : "
             << "(" << num << ")" << endl;
    }
    return 0;
}