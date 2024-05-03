// 5. Create a class called Employee with a name, salary, and hire date as private attributes.
// With help of a friend function, calculate the total year of service.
#include <iostream>
using namespace std;
class Employee
{
    string name;
    int hire_date;
    int salary;

public:
    void set(string n, int s, int d)
    {
        name = n;
        salary = s;
        hire_date = d;
    }
    friend void display(Employee obj);
};
void display(Employee obj)
{
    cout << obj.name << endl;
    cout << obj.salary << endl;
    cout << 2024 - obj.hire_date << endl;
}
int main()
{
    Employee obj;
    obj.set("Rissi", 19000, 2021);
    display(obj);

    return 0;
}