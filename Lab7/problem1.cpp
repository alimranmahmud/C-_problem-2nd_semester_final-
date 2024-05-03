// 1. Write a C++ program to implement a class called Date that has private member variables
//  for day, month, and year. Include member functions to set and get these variables, as well
//  as to validate if the date is valid.
#include <iostream>
using namespace std;
class Date
{
private:
    int day, month, year;

public:
    void set(int d, int m, int y)
    {
        day = d;
        month = m;
        year = y;
    }
    void get()
    {
        if (day)
            cout << "Your Date : " << day << "/ " << month << "/ " << year << endl;
    }
};
int main()
{
    int day, month, year;
    cin >> day >> month >> year;
    Date d;
    if (day > 0 && day < 32 && month > 0 && month < 13)
    {
        d.set(day, month, year);
        d.get();
    }
    else
    {
        cout << "Please check your date " << endl;
    }

    return 0;
}