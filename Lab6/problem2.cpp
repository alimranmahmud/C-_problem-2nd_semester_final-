// 2. Create a class called &quot;Employee&quot; with a name, salary, and hire date
// attributes, and a method to calculate years of service.
#include <iostream>
using namespace std;
class Employee
{
    string name;
    int hier_date;
    int salary;

public:
    Employee(string n, int d, int s) : name(n), hier_date(d), salary(s){};
    int Calculate()
    {
        return 2024 - hier_date;
    }
    void display()
    {
        cout << "Your name is : " << name << endl;
        cout << "Year : " << Calculate() << endl;
        cout << "Salary : " << salary << endl;
    }
};
int main()
{
    Employee em("Rissi", 2021, 50000);
    em.display();

    return 0;
}
