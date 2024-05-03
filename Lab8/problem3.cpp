// Base class name is student and that has private data Name, ID , Mark. Print that information with help of a derived class named Result.
#include <iostream>
using namespace std;
class Base
{
    string name;
    int id, mark;

public:
    void set(string n, int i, int m)
    {
        name = n;
        id = i;
        mark = m;
    }
    string Name()
    {
        return name;
    }
    int Id()
    {
        return id;
    }
    int Mark()
    {
        return mark;
    }
};
class Derived : public Base
{
public:
    void display()
    {
        cout << Name() << endl;
        cout << Id() << endl;
        cout << Mark() << endl;
    }
};
int main()
{
    Derived ob;
    ob.set("Aurik", 327, 90);
    ob.display();

    return 0;
}
