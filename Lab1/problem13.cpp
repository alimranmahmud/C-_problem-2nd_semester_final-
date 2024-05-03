// 13. C++ Program to input a number. If the number is even, print
// its square otherwise print its cube.
#include <iostream>
using namespace std;

int main()
{
    int num, squre, cube;
    cin >> num;
    if (num % 2 == 0)
    {
        cout << "Squre : " << num * num << endl;
    }
    else
    {
        cout << "Cube : " << num * num * num << endl;
    }

    return 0;
}