// 16. C++ Program to input a character and check that it’s a small
// letter, capital letter, a digit or a special symbol.
#include <iostream>
using namespace std;

int main()
{
    char ch;
    cin >> ch;
    if (ch >= 0 && ch <= 9)
    {
        cout << "Number" << endl;
    }
    else if (ch >= 'A' && ch <= 'Z')
    {
        cout << "Capital Letter" << endl;
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        cout << "Small Letter" << endl;
    }
    else
    {
        cout << "Special Symbol" << endl;
    }
    return 0;
}