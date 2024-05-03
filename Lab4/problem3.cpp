// 3. Write a function that has one character argument and displays that it’s a small letter, capital
// letter, a digit or a special symbol.
#include <iostream>
using namespace std;
void display(char ch)
{
    if (ch >= 65 && ch <= 90)
        cout << "Character is a capital letter";
    else if (ch >= 97 && ch <= 122)
        cout << "Character is a small letter";
    else if (ch >= 48 && ch <= 57)
        cout << "Character is a digit";
    else if ((ch > 0 && ch <= 47) || (ch >= 58 && ch <= 64) ||
             (ch >= 91 && ch <= 96) || (ch >= 123 && ch <= 127))
        cout << "Character is a special symbol";
}
int main()
{
    char ch;
    cout << "Enter any character:";
    cin >> ch;
    display(ch);
    return 0;
}
