// 11. C++ program to Find all Roots of a Quadratic equation
#include <iostream>
#include <cmath>
using namespace std;

int main()
{

    float a, b, c, x1, x2, discriminant, realNumber, imaginaryNumber;
    cout << "Enter  a, b and c: ";
    cin >> a >> b >> c;
    discriminant = b * b - 4 * a * c;

    if (discriminant > 0)
    {
        x1 = (-b + sqrt(discriminant)) / (2 * a);
        x2 = (-b - sqrt(discriminant)) / (2 * a);
        cout << "Roots are real and different." << endl;
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
    }
    else if (discriminant == 0)
    {
        cout << "Roots are real and same." << endl;
        x1 = -b / (2 * a);
        cout << "x1 = x2 =" << x1 << endl;
    }

    else
    {
        realNumber = -b / (2 * a);
        imaginaryNumber = sqrt(-discriminant) / (2 * a);
        cout << "Roots are complex and different." << endl;
        cout << "x1 = " << realNumber << "+" << imaginaryNumber << "i" << endl;
        cout << "x2 = " << realNumber << "-" << imaginaryNumber << "i" << endl;
    }

    return 0;
}