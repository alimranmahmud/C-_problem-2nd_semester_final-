// 3. Write a program that would print the information (name, year of joining, salary, address) of
// three employees by creating a class named &#39;Employee&#39;. The output should be as follows:
// Name         Year of joining         Address
// Robert      1994         64C-WallsStreat
// Sam         2000         68D-WallsStreat
// John         1999         26B- WallsStreat
#include <iostream>
using namespace std;
class Employee
{
private:
    string name, address;
    int year_joining, salary;

public:
    Employee(string n, int y, string a, int s) : name(n), year_joining(y), address(a), salary(s) {}
    void display()
    {

        cout << name << "\t\t " << year_joining << "                  \t\t " << address << "\t\t " << salary << "\t\t" << endl;
    }
};
int main()
{
    Employee ob1("Rissi", 2024, "Dhaka", 50000), obj2("Rony", 2021, "Rangpur", 49000), obj3("Shetu", 2017, "Rajshai", 47000);
    cout << "Name\t\t year of joining \t\t Adress \t\t Salary" << endl;
    ob1.display();
    obj2.display();
    obj3.display();
    return 0;
}