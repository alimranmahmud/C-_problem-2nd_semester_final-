// 4. Create a class called &quot;Person&quot; with a name and age attribute and two
// member functions called get_data and put_data. Create one object of the
// &quot;Person&quot; class, set the attributes from user with get_data, and print name
// and age with put_data.
#include <iostream>
using namespace std;
class Person
{
protected:
    string name;
    int age;

public:
    void get_data(string n, int a)
    {
        name = n;
        age = a;
    }
    void put_data()
    {
        cout << name << endl;
        cout << age << endl;
    }
};
int main()
{
    Person student;
    student.get_data("Risshi", 21);
    student.put_data();

    return 0;
}