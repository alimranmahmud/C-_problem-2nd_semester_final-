// Write a program to create a class known as "BankAccount" with methods called deposit() and withdraw(). Create a subclass called SavingsAccount that overrides the withdraw() method to prevent withdrawals if the account balance falls below one hundred.
#include <iostream>
using namespace std;
class BankAccount
{
public:
    string account_number;
    double balance;
    void set_value(string a, double b)
    {
        account_number = a;
        balance = b;
    }
    void deposit(double amount)
    {
        balance = balance + amount;
    }
    void withdraw(double amount)
    {
        if (balance >= amount)
        {
            balance = balance - amount;
        }
        else
        {
            cout << "Insufficient Balance." << endl;
        }
    }
    void display()
    {
        cout << "Your Balance is " << balance << endl;
    }
};
class SavingsAccount : public BankAccount
{
public:
    void withdraw(double amount)
    {
        if (balance - amount < 100)
        {
            cout << "Minimum balance of $100 required." << endl;
        }
    }
    void display()
    {
        cout << "Your Balance is " << balance << endl;
    }
};
int main()
{
    BankAccount Bank;
    Bank.set_value("2omnx34t4", 500);
    Bank.deposit(500);
    Bank.withdraw(200);
    Bank.display();

    SavingsAccount obj;
    obj.set_value("34jke8x9", 600);
    obj.withdraw(700);
    obj.display();
    return 0;
}