// 1. Write a C++ program to create a class called Person that has private member variables for name,
// age and country. Implement member functions to set and get the values of these variables.
#include <iostream>
using namespace std;
class Person
{
    string name, country;
    int age;

public:
    void set(string n, int a, string c)
    {
        name = n;
        age = a;
        country = c;
    }
    void get(void)
    {
        cout << "Name : " << name << endl;
        cout << "Age : " << age << endl;
        cout << "Country : " << country << endl;
    }
};
int main()
{
    Person Richi;
    Richi.set("Imran", 21, "Bangladesh");
    Richi.get();
    return 0;
}