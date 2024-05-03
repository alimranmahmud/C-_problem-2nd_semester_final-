// Write a C++ Program to Access Protected Data Members using Inheritance.
#include <iostream>
using namespace std;
class Base
{
protected:
    int a;

public:
    void set(int aa) { a = aa; }
};
class Derived : public Base
{
public:
    void display()
    {
        cout << "A = " << a << endl;
    }
};
int main()
{
    Derived ob;
    ob.set(10);
    ob.display();

    return 0;
}