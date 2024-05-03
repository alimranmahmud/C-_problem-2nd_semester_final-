// 6. C++ Program to Find Quotient and Remainder of Two Integers Entered by User
#include <iostream>
using namespace std;

int main()
{
    int divisor, dividend, q, r;

    cout << "Enter dividend: ";
    cin >> dividend;

    cout << "Enter divisor: ";
    cin >> divisor;

    q = dividend / divisor;
    r = dividend % divisor;

    cout << "Quotient = " << q << endl;
    cout << "Remainder = " << r;

    return 0;
}