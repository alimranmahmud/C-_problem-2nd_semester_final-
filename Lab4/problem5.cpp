// 5. Write a C++ program that take four functions that get integer values and returns its sum,
// subtraction, multiplication, division using function overloading (number of argument different).
#include <iostream>
using namespace std;
void display(int a, int b, int c, int d)
{
    cout << "Sum = " << a + b + c + d << endl;
}
void display(int a, int b, int c)
{
    cout << "Multiply : " << a * b * c << endl;
}
void display(int a, int b)
{
    cout << "subtraction : " << a - b << endl;
}
void display(int a)
{
    cout << "Division : " << a / 5 << endl;
}
int main()
{
    display(1, 2, 7, 8);

    return 0;
}