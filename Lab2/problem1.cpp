// 1. Write a c++ program to accept 5 numbers from user one by one and
// displays their sum on screen.
#include <iostream>
using namespace std;

int main()
{
    int sum = 0, n;
    for (int i = 0; i < 5; i++)
    {
        cin >> n;
        sum = sum + n;
    }
    cout << sum << endl;

    return 0;
}