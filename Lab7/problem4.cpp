// 4. Write a C++ Program To Calculate Electricity Bill Of Person using Class.
//  To Calculate Electricity Bill Of Person using Class,first we have to create and call
// get( ) function to take input details of the customer.
//  After get( ) , we create and call a new function i.e calc_bill( ) to calculate the
// total bill of the customer on the behalf of units consumed by the customer .
//  At last , we call the put( ) function to print or display customer or person
// electricity bill on the screen.
//  Between 0 – 100 Unit, price 5 taka per unit
//  Between 101 – 200 Unit, price 7 taka per unit
//  Between 201 – N Unit, price 9 taka per unit
#include <iostream>
using namespace std;
class Electricity
{
protected:
    string name;
    int phone_number, meter_number, unit;

public:
    void get(string n, int p, int m, int taka)
    {
        name = n;
        phone_number = p;
        meter_number = m;
        unit = taka;
    }
    int clac_bill()
    {
        if (unit > 0 && unit < 101)
        {
            return unit * 5;
        }
        else if (unit > 100 && unit < 201)
        {
            return unit * 7;
        }
        else
        {
            return unit * 9;
        }
    }
    void put()
    {
        cout << "Your name is : " << name << endl;
        cout << "Your phone number : " << phone_number << endl;
        cout << "Your meter number is : " << meter_number << endl;
        cout << "Total Unit : " << unit << endl;
        cout << "Your total electricity bill : " << clac_bill() << endl;
    }
};

int main()
{
    string name;
    int phone_number, meter_number, unit;
    cout << "Please enter your Infomation" << endl;
    cout << "Name "
         << "Phone Number "
         << "Meter Number "
         << "Unit " << endl;

    cin >> name >> phone_number >> meter_number >> unit;
    Electricity person;
    person.get(name, phone_number, meter_number, unit);
    person.put();

    return 0;
}