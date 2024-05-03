// 14. C++ Program to input marks in three subjects of a student
// and calculate the division according to the following conditions:

// Percentage           Division
// >=60                 First
// 50-59                Second
// 40-49                Third
// <40                  Fail
#include <iostream>
using namespace std;

int main()
{
    int num;
    cin >> num;
    if (num >= 60)
    {
        cout << "First" << endl;
    }
    else if (num <= 59 && num >= 50)
    {
        cout << "Second" << endl;
    }
    else if (num <= 49 && num >= 40)
    {
        cout << "Third" << endl;
    }
    else
    {
        cout << "Fail" << endl;
    }
    return 0;
}