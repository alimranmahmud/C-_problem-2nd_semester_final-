// 1.Write a C++ program that take four functions that gets two integer and returns
#include <iostream>
using namespace std;
int sum(int a, int b)
{
    return a + b;
}
int subtraction(int a, int b)
{
    return a - b;
}
int multiplication(int a, int b)
{
    return a + b;
}
int division(int a, int b)
{
    return a / b;
}
int main()
{
    cout << sum(1, 2) << endl;
    cout << subtraction(4, 2) << endl;
    cout << multiplication(5, 2) << endl;
    cout << division(10, 2) << endl;
    return 0;
}