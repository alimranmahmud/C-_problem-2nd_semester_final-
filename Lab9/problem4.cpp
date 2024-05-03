// Write a program to create a class called Employee with methods called work() and getSalary(). Create a subclass called HRManager that overrides the work() method and adds a new method called addEmployee().

// Bonus:
// Write a program to create a class called Vehicle with a method called drive(). Create a subclass called Car that overrides the drive() method to print "Repairing a car".
// Write a program to create a class known as "BankAccount" with methods called deposit() and withdraw(). Create a subclass called SavingsAccount that overrides the withdraw() method to prevent withdrawals if the account balance falls below one hundred.

#include <iostream>
using namespace std;
class Employee
{
public:
    int salary;
    void work()
    {
        cout << "Employee Class Called." << endl;
    }
    void getSalary(int salary)
    {
        this->salary = salary;
        cout << salary << endl;
    }
};
class HRManager : public Employee
{
public:
    void work()
    {
        cout << "Managing employees." << endl;
    }
    void addEmployee()
    {
        cout << "Adding new employee." << endl;
    }
};
int main()
{
    Employee emp;
    emp.getSalary(40000);
    emp.work();
    cout << endl;
    HRManager mgr;
    mgr.getSalary(50000);
    mgr.work();
    mgr.addEmployee();

    return 0;
}